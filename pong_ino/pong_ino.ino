/*  
*   Pong Project
*   Tomas Reijven en Frank van Wattingen, MG2A
*   Released under GNU General Public License v3 (GPL-3) Open Source
*/
#include <SPI.h>
#include <GD.h>
#include "graphics.h"
//#include "Vector.h"

/*Define de BALL en PADDLE, voor easy access en 
  overzichtelijke beschrijving in de code naar de sprites in de spritesheet */
#define BALL   0
#define PADDLE 1
#define ZERO   7

int ball_x, ball_y;

int paddle1_y, paddle2_y;

int x_speed, y_speed;

long score1, score2;

bool readying = true;

unsigned int ready_timer, timer, counter;

static void graphics(unsigned int x, int y, byte anim, byte rot = 0)
{
  draw_graphics(x, y, anim, rot);
}

static uint16_t atxy(byte x, byte y)
{
  return RAM_PIC + 64 * y + x;
}

static void draw_score(uint16_t dst, long n)
{
  GD.wr(dst + 0, ZERO + (n / 10) % 10);      // tens
  GD.wr(dst + 1, ZERO + n % 10);             // ones
}

void setup()
{ 
  
  score1 = 0, score2 = 0, timer = 0, counter = 0;
  
  ball_x = 200;
  ball_y = 150;
  
  int x = rand() % 2;
  int y = rand() % 2;
  
  if (x)
    x_speed = 1;
  else
    x_speed = -1;
  
   if (y)
    y_speed = 1;
  else
    y_speed = -1;
  
  paddle1_y = 150; 
  paddle2_y = 150;
  
  byte i;
  for (i = 3; i < 7; i++) 
  {
    pinMode(i, INPUT);
    digitalWrite(i, HIGH);
  }
  
  GD.begin();

  GD.copy(RAM_SPRPAL, graphics_sprpal, sizeof(graphics_sprpal));
  GD.copy(RAM_SPRIMG, graphics_sprimg, sizeof(graphics_sprimg));
    
  GD.__end();
}

void loop()
{
  timer++;
 
  if (timer == 100)
  {
    GD.__wstartspr(0);
    
    //Draw paddle1
    graphics(25, paddle1_y - 16, PADDLE);
    graphics(25, paddle1_y, PADDLE + 1);
    graphics(25, paddle1_y + 16, PADDLE, 4);
    
    //Draw paddle2
    graphics(375, paddle2_y - 16, PADDLE, 2);
    graphics(375, paddle2_y, PADDLE + 1, 2);
    graphics(375, paddle2_y + 16, PADDLE, 6);
    
    
    
    //Draw ball
    byte ballspr = GD.spr; 
    graphics(ball_x, ball_y, BALL);
    
    GD.__end();
    
    GD.waitvblank();
    byte touching = (GD.rd(COLLISION + ballspr) != 0xff); 
 
    if (touching) {
      if (ball_x < 200 && x_speed < 0) {
        x_speed = -x_speed; 
        counter++;
        if (counter == 3){
          counter = 0; 
          x_speed += 1;
        }
        if (digitalRead(6))
          y_speed += 1;
        if (digitalRead(5))
          y_speed -= 1;
     }
      else if(ball_x > 200 && x_speed > 0){
        x_speed = -x_speed;
        counter++;
        if (counter == 3){
          counter = 0; 
          x_speed -= 1;
        }
        if (digitalRead(4))
          y_speed += 1;
        if (digitalRead(5))
          y_speed -= 1;
      }
    }
    
    //Draw score
    draw_score(atxy(3, 5), score1);
    draw_score(atxy(11, 5), score2);
    
    
    update();
    timer = 0;
  }  
}

void update()
{
    control();
    
    if (!readying) {
      ball_x += x_speed;
      ball_y += y_speed;
    }
    else if (ready_timer < 100) {
      ready_timer++;
    }
    else {
      ready_timer = 0;
      readying = false; 
    }
    
    if (ball_x > 416){
      score1++;
      reset();
    }
    else if (ball_x < -16) {
      score2++;
      reset();
    }

    if(ball_y >= 292 && y_speed > 0){
      ball_y = 291;
      y_speed = -y_speed;
    }
    
    if (ball_y <= 8 && y_speed < 0) {
      ball_y = 9;
      y_speed = -y_speed; 

    }
}

void control()
{
  if (digitalRead(5) && paddle2_y < 300)
    paddle2_y += 2;
  if (digitalRead(6) && paddle1_y > 0)
    paddle1_y -= 2;
  if (digitalRead(4) && paddle2_y > 0)
    paddle2_y -= 2;
  if (digitalRead(3) && paddle1_y < 300)
    paddle1_y += 2;
  
}

void reset()
{
  readying = true;
  ball_x = 200;
  ball_y = 150;
  
  int x = rand() % 2;
  int y = rand() % 2;
  
  if (x)
    x_speed = 1;
  else
    x_speed = -1;
  
   if (y)
    y_speed = 1;
  else
    y_speed = -1;
}

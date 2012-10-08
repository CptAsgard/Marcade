#define GRAPHICS_FRAMES 30
static void draw_graphics(int x, int y, byte anim, byte rot, byte jk = 0) {
  switch (anim) {
  case 0:
    GD.xsprite(x, y, -8, -8, 0, 0, rot, jk);
    break;
  case 1:
    GD.xsprite(x, y, -8, -8, 1, 0, rot, jk);
    break;
  case 2:
    GD.xsprite(x, y, -8, -8, 2, 0, rot, jk);
    break;
  case 6:
    GD.xsprite(x, y, -8, -8, 3, 0, rot, jk);
    break;
  case 7:
    GD.xsprite(x, y, -8, -8, 4, 0, rot, jk);
    break;
  case 8:
    GD.xsprite(x, y, -8, -8, 5, 0, rot, jk);
    break;
  case 9:
    GD.xsprite(x, y, -8, -8, 6, 0, rot, jk);
    break;
  case 10:
    GD.xsprite(x, y, -8, -8, 7, 0, rot, jk);
    break;
  case 11:
    GD.xsprite(x, y, -8, -8, 8, 0, rot, jk);
    break;
  case 12:
    GD.xsprite(x, y, -8, -8, 9, 0, rot, jk);
    break;
  case 13:
    GD.xsprite(x, y, -8, -8, 10, 0, rot, jk);
    break;
  case 14:
    GD.xsprite(x, y, -8, -8, 11, 0, rot, jk);
    break;
  case 15:
    GD.xsprite(x, y, -8, -8, 12, 0, rot, jk);
    break;
  }
}

static PROGMEM prog_uchar graphics_sprimg[] = {

0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 

0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 

0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 

0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 

0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 

0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 

0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 

0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 

0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 

0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 

0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 

0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 

0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff, 
0xff,  0xff,  0xff,  0xff,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xff,  0xff, 
};
static PROGMEM prog_uchar graphics_sprpal[] = {

0xe0,  0x03,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 

0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x80, 
};

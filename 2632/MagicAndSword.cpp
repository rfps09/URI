#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

float raio (int x, int y, int cx, int cy) {
  float transform = 1.00;
  return sqrt(pow(x*transform-cx*transform, 2) + pow(y*transform-cy*transform, 2));
}

bool colisao (int w, int h, int x, int y, int cx, int cy, float r) {
  float pitagoras = 0;
  if (cx >= x && cx <= x + w) {
    if (cy + r >= y && cy - r <= y+h) {
      return 1;
    }
  }
  else if (cy >= y && cy <= y + h) {
    if (cx + r >= x && cx - r <= x + w) {
      return 1;
    }
  }
  else {
    if(cx < x && cy > y + h) {
      pitagoras = raio(x, cy, cx, y+h);
      if (pitagoras <= r) {
        return 1;
      }
    }
    else if(cx < x && cy < y) {
      pitagoras = raio(x, y, cx, cy);
      if (pitagoras <= r) {
        return 1;
      }
    }
    else if(cx > x + w && cy > y + h) {
      pitagoras = raio(cx, cy, x+w, y+h);
      if (pitagoras <= r) {
        return 1;
      }
    }
    else if(cx > x + w && cy < y) {
      pitagoras = raio(cx, y, x+w, cy);
      if (pitagoras <= r) {
        return 1;
      }
    }
  }
  return 0;
}

int main() {
  int t = 0, w = 0, h = 0, x = 0, y = 0, n = 0, cx = 0, cy = 0, dano = 0;
  float r = 0;
  char id[6];
  int i = 0;
  bool teste;

  scanf("%d", &t);

  for (i = 0; i < t; i++) {
    scanf("%d%*c%d%*c%d%*c%d", &w, &h, &x, &y);
    setbuf(stdin, NULL);
    scanf("%s%*c%d%*c%d%*c%d", id, &n, &cx, &cy);
    setbuf(stdin, NULL);

    if (strcmp(id, "fire") == 0) {
      dano = 200;
      switch (n) {
      case 1:
        r = 20;
        break;
      
      case 2:
        r = 30;
        break;

      case 3:
        r = 50;
        break;
      }
    }
    
    if (strcmp(id, "water") == 0) {
      dano = 300;
      switch (n) {
      case 1:
        r = 10;
        break;
      
      case 2:
        r = 25;
        break;

      case 3:
        r = 40;
        break;
      }
    }

    if (strcmp(id, "earth") == 0) {
      dano = 400;
      switch (n) {
      case 1:
        r = 25;
        break;
      
      case 2:
        r = 55;
        break;

      case 3:
        r = 70;
        break;
      }
    }

    if (strcmp(id, "air") == 0) {
      dano = 100;
      switch (n) {
      case 1:
        r = 18;
        break;
      
      case 2:
        r = 38;
        break;

      case 3:
        r = 60;
        break;
      }
    }

    teste = colisao(w,h,x,y,cx,cy,r);

    if(teste == true) {
      printf("%d\n", dano);
    }
    else {
      printf("0\n");
    }
  }

  return 0;
}
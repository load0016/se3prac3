#include <stdio.h>
#include "2048.h"

int tilt_line_left(int length,int *line)
{
  // make sure vector length is sensible
  if (length<1||length>255) return -1;

  // slide tiles to the left
  int a;
  int b;
  
  for(b=0; i<length; b++) {
    if(line[b]!=0) {
      if(i!=a) {
        line[a]=line[i];
        line[i]=0;
      }
    }
  }
  

  // combine tiles as required

  return 0;
}

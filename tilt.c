#include <stdio.h>
#include "2048.h"

int tilt_line_left(int length,int *line)
{
  // make sure vector length is sensible
  if (length<1||length>255) return -1;

  // slide tiles to the left
  int a=0;
  int b=0 ;
  
  for(b=0; b<length; b++) {
    if(line[b]!=0) {
      if(b!=a) {
        line[a]=line[b];
        line[b]=0;
      }
      a++
    }
  }
  

  // combine tiles as required

  return 0;
}

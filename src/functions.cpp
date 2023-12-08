#include "functions.h"

int max (int i1, int i2 ) {   

  if (i1 > i2) return i1;
  
  return i2;
}
 
 int summ (int i3,int i4)
 {
 
  return i3+i4; 
 }
 //int area(int w, int h)
 //{
 // return w*h;
 //}
 int area (int w, int h) {

   if(!((w>0)&&(h>0))) throw area_error();
  
   return w*h;

 }
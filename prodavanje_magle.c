#include <stdio.h>
#include <math.h>

int main() {
   int x;
   double y;
   
   printf("Koliko zelis magle? x=");
   
   scanf("%d", &x);
   
   y = cos(x);
   
   printf("Upravo smo ti prodali maglu, a y je %f.", y);
   
   return 0;
}

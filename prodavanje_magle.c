#include <stdio.h>
#include <math.h>

int main() {
   int x;
   double y;
   
   printf("Koliko zelis magle? x=\n");
   
   scanf("%d", &x);
   
   y = cos(x);
   
   printf("Upravo smo ti prodali maglu, a y=%f.", y);
   
   return 0;
}

#include <stdio.h>

int main(){
   int h, m, s, n;
   scanf("%d %d %d", &h, &m, &s);
   scanf("%d", &n);

   s += n;
   m += (s / 60);
   s %= 60;
   h += (m / 60);
   m %= 60;
   h %= 24;

   printf("%d %d %d\n", h, m, s);
   return 0;
}
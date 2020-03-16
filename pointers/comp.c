#include <stdio.h>
 
struct complex
{
   int real, img;
};
 
int main()
{
   struct complex a, b;
   int c,d;
   printf("Enter a and b where a + ib is the first complex number.\n");
   scanf("%d%d", &a.real, &a.img);
   printf("Enter c and d where c + id is the second complex number.\n");
   scanf("%d%d", &b.real, &b.img);
 
   c = a.real + b.real;
   d = a.img + b.img;
 
   printf("Sum of the complex numbers: (%d) + (%di)\n", c,d);
 
   return 0;
}


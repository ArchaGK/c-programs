#include <stdio.h>

int main()
{
   int a=3;
   int *p;
   p = &a;
   printf("size of interger is %d\n",sizeof(int));
   printf("Address - %d, value - %d\n",p,*p);
   char *p0;
   p0 = (char*)p; //typecasting
   printf("size of character is %d\n",sizeof(char));
   printf("Address - %d, value - %d\n",p0,*p0);
   
 
}
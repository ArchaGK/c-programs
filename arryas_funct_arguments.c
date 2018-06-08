#include <stdio.h>
int Double(int *p,int size)
{
    int i;
    for(i=0;i<size;i++)
    p[i] = 2 * p[i];
}

int main()
{
    int a[] = {1,2,3,4};
    int size,i;
    size = sizeof(a)/sizeof(a[0]);
    Double(a,size);
    
    for(i =0;i<size;i++)
    {
    
    printf("%d\n",a[i]);
    
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int a=10,b=20;
    a=a^b;
    b=b^a;
    a=a^b;
    printf("%d,%d",a,b);
}
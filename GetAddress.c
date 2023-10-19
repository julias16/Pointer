#include<stdio.h>
int main()
{
    int *p;
    int i;
    int v[5]= {12, 16, 45, 65, 75};
    p= &v[0];
    for(i=0; i<5; i++)
    {
        printf("v[%d]: value is %d, address is %d\n", i, *p, p);
        p++;
    }
}

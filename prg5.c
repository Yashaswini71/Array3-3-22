#include<stdio.h>

#define n 10

void array_print(int a[])
{
    for(int i=0;i<n;i++) 
    {
        printf("\nelement %d\t:%d",i+1,a[i]);
    }
}

void array_rev(int a[])
{
    int b[n];
    int i=0,j=n-1;
    while(i<n&&j>-1)
    {
        b[i]=a[j];
        i++;j--;
    }
    printf("\n\nafter reversal");
    array_print(b);
}

int main()
{
    int a[n],b=0;
    for(int i=0;i<n;i++) 
    {
        printf("\nenter element %d\t",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n\nbefore reversal");
    array_print(a);
    array_rev(a);
    return 0;
}
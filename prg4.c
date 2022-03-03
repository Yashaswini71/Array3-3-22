#include<stdio.h>

#define n 10

void array_print(int a[])
{
    for(int i=0;i<n;i++) 
    {
        printf("\nelement %d\t:%d",i+1,a[i]);
    }
}

void array_sec_largest(int a[])
{
    for(int i=0;i<n;i++) 
    {
        for(int j=i+1;j<n;j++) 
        {
            if (a[i]<a[j]) 
            {
                int t;
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    // printf("\n\nafter sorting");
    // array_print(a);
    printf("\n\nsecond largest number is %d",a[1]);
}

int main()
{
    int a[n],b=0;
    for(int i=0;i<n;i++) 
    {
        printf("\nenter element %d\t",i+1);
        scanf("%d",&a[i]);
    }
    // printf("\n\nbefore sorting");
    // array_print(a);
    array_sec_largest(a);
    return 0;
}
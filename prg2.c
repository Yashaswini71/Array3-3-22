#include<stdio.h>

#define n 10

int check_vowels(char a)
{
    switch(a)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':return 1;
        default:return 0;
    }
}
int main()
{
    char a[n];
    for(int i=0;i<n;i++) 
    {
        printf("enter element %d\t",i+1);
        scanf(" %c",&a[i]);
        printf("\n");
    }
    
    for(int i=0;i<n;i++) 
    {
        if(check_vowels(a[i]))
        {
            printf("\naddress: %p",&a[i]);
            printf("\nposition: %d",i);
            printf("\ndata: %c",a[i]);
        }
    }
    return 0;
}
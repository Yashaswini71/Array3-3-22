#include <stdio.h>
#include<string.h>

void str_rev(char a[]) 
{
    printf("\nEntered string: %s",a);
    int i=0,l=strlen(a),j=l-1;
    printf("\nEntered string length is : %d",l);
    char b[l];
    while(i<l&&j>-1)
    {
        b[i]=a[j];
        i++;j--;
    }
    b[i]='\0';
    printf("\nreversed string: %s",b);
}

int main() 
{
    char a1[100];
    printf("\nEnter a string\t");
    scanf("%s",a1);
    printf("\n\n");
    str_rev(a1);
    return 0;
}
#include <stdio.h>
#include<string.h>

void str_cpy(char a[]) 
{
    printf("\nEntered string: %s",a);
    int i,l=strlen(a);
    printf("\nEntered string length is : %d",l);
    char b[l];
    for (i=0;a[i]!='\0';i++) {
        b[i]=a[i];
    }
    b[i]='\0';
    printf("\nCopied string: %s",b);
}

int main() 
{
    char a1[100];
    printf("\nEnter a string\t");
    scanf("%s",a1);
    printf("\n\n");
    str_cpy(a1);
    return 0;
}
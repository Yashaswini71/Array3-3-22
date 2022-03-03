#include<stdio.h>
#include<string.h>

int own_func(char str1[])
{
int i=0,n=0;
for(i=0;str1[i]!='\0';i++)
        n++;
return n;
}

int main()
{
char str[50]="yashaswini";
int i=0,r=0;
for(i=0;str[i]!='\0';i++)
{
    printf("\ncharactor=%c\t",str[i]);
    printf("\naddress=%p\n",&str[i]);
}
printf("\nthe string is:%s\n",str);
printf("\naddress of the string is:%p\n",&str);
printf("\nlength of strlen %ld\n",strlen(str));
printf("\nown_len strlen is %d\n",own_func(str));
}
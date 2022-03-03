#include<stdio.h>
int main()
{
    char a1[5]={'1','2','3','4','5'}; //array declared using method 1
    char a2[5]={'6','7','8','9','0'}; //array declared using method 2
    char a3[5]; //array declared using method 3
    a3[0]='a';
    a3[1]='b';
    a3[2]='c';
    a3[3]='d';
    a3[4]='e';
    char a4[5]; //array declared using method 4
    for(int i=0;i<5;i++) 
    {
        printf("enter element %d\t",i+1);
        scanf(" %c",&a4[i]);
        printf("\n");
    }

    //printing base address
    printf("\n\n\n");
    printf("\nbase address of a1 is %p using &",&a1); //printing using &
    char *p1=a1;  //using pointer to array
    printf("\nbase address of a1 is %p using pointer to array",p1);  //%p is used to print ++++++++++++++++
    
    //printing address without loops using &
    int j=0;
    printf("\n\n\n");
    label1: printf("\naddress of a2[%d] = %p using &",j,&a2[j]);
    j++;
    if(j<5)
        goto label1;
    
    //printing address without loops using pointer to array
    int k=0;
    char *p2=a2;
    printf("\n\n\n");
    label2: printf("\naddress of a2[%d] = %p using pointer to array",j,p2+k);
    k++;
    if(k<5)
        goto label2;
    
    //printing using while loop
    int l=0;
    printf("\n\n\n");
    while(l<5)
    {
        printf("\na4[%d]:%c\t",l+1,a4[l]);
        l++;
    }
    return 0;
}
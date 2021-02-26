#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int i,j,k=0,l,len,count=1,start,space;
    char str[100];
    printf("Enter the string to print the pattern\n");
    gets(str);
    start = strlen(str)/2;
    len = strlen(str);
    space = len-1; 
    for(i=0;i<len;i++)
    {
        for(l=0;l<space;l++)
        {
            printf(" ");
        }
        space--;
        j=start;
        k=0;
        while(k<count)
        {
           printf("%c",str[j]);
           k++;
           j = (j+1)%len;
        }
        count++;
        printf("\n");
    }    
}

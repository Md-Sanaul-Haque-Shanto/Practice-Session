#include<stdio.h>
main()
{int ara[]={10,20,30,40,50,60,70,80,90,100};
int i,j;
for(i=0,j=9,i<10,i++,j--)
{ara[j]=ara[i];
}
for(i=0;i<10;i++)
{ara[i]=ara2[i];
}
for(i=0;i<10;i++)
{
printf("%d The Element Is:%d\n",ara[i]);
return 0;
}

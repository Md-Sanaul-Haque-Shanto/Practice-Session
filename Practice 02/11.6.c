#include<stdio.h>
#include<string.h>
main()
{
int ara1[5][5]={{1,2,3,4,5},{10,20,30,40,50},{100,200,300,400,500},{1000,2000,3000,4000,5000},{10000,20000,30000,40000,50000}};
int ara2[5][5];
int r,c;
printf("Content Of First Aray(ara1):\n");
for(r=0;r<5;r++)
{
for(c=0;c<5;c++)
{
printf("%d",ara1[r][c]);
}
printf("\n");
}
printf("\n");
//now start copy
for(r=0;r<5;r++)
{
for(c=0;c<5;c++)
{
ara2[r][c]=ara1[r][c];
}
}
printf("Content of Second array (ara2):\n");
for(r=0;r<5;r++)
{
for(c=0;c<5;c++)
{
printf("%d",ara2[r][c]);
}
printf("\n");
}
return 0;

}
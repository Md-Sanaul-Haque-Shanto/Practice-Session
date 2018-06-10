#include<stdio.h>
#include<string.h>
main()
{
char saarc[7][100]={"Bangladesh","India","Pakistan","Bhutan","Sri Lanka","Maldives","Nepal"};
int row,col,name_lenght;
for(row=0;row<7;row++)
{
name_lenght=strlen(saarc[row]);
for(col=0;col<name_lenght;col++)
{
printf("%c",saarc[row][col]);
}
printf("\n");
}
return 0;
}

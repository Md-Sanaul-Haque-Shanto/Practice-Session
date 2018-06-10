#include<stdio.h>
int main()
{
FILE *fp_out;
char *output_file="fileExtra.txt";
int T,a,b,sum;

fp_out=fopen(output_file,"w");
while(T--)
{
scanf("%d %d",&a,&b);
sum=a+b;
printf("Summation Value Is:%d\n",sum);
fprintf(fp_out,"Summation Value Is:%d\n",sum);
}
return 0;
}

#include<stdio.h>
main()
{
int n;
printf("Enter The Value Of N:");
scanf("%d",&n);
if(n<0){
printf("The Number iS Negative");
}
else if(n>0){
printf("The Number Is Posative");
}
else if(n==0){
printf("The Number Is Zero");
}
return 0;
}

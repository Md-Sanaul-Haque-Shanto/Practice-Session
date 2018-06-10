#include<stdio.h>
main()
{
int num,fact,count;
fact=1;
count=1;
printf("Enter The Number:");
scanf("%d",&num);
while(count<=num){
fact=fact*count;
count=count+1;
}
printf("%d=%d",num,fact);
return 0;


}

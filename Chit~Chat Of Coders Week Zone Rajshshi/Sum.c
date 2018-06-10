#include<stdio.h>

int main()
{
int T,i,j,N,k;
scanf("%d",&T);
while(T--){
scanf("%d",&N);
k=1;
for(i=1; i<=N; i++){
if(i!=1)
printf("+ (");
for(j=1; j<=i; j++){
if(i==1)
printf("%d ",k);
else
printf("%d",k);
if(j!=i)
printf(" ");
if(j!=i)
printf("+");
if(j!=i)
printf(" ");
k++;
}
if(i!=1)
printf(") ");
}
printf("\n");
}
return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
     int L,R,i,j,sum;
     printf("Enter L and R : ");
     scanf("%d%d",&L,&R);
     
     for(i=L;i<=R;i++)
     {
                      sum=0;
                      j=1;
                      for(;;)
                      {
                             sum=sum+j+j+1;
                             if(sum==i)
                             {
                                       printf("%d=%d+%d\n",i,j,j+1);
                                       break;
                                       }
                                       if(sum>i) break;
                                       j=j+1;
                                       sum=0;
                                       }
                                       }
                                       getch();
                                       return 0;
                                       }

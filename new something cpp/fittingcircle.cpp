#include<stdio.h>
#include<math.h>
int main(){
    int R,n,T;
    double m,a,b,r;
    scanf("%d",&T);
    if(1 <= T && T <= 20){
        while(T--){
            scanf("%d %d",&R,&n);
            if(1<=R && R<=1000 && 3<=n && n<= 100)
                m=n;
                a=sin(3.1416/m);
                b=1+a;
                r=a*R/b;
                printf("%0.2lf\n",r);
        }
    }
return 0;
}

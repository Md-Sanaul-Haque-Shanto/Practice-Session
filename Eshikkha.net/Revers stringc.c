#include <stdio.h>
#include <string.h>
int main()
{
    int t;
scanf("%d",&t);
while(t--)
{
    int i,T;
    char s[10002],word[10002];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf(" %[^\n",s);
        printf("%s\n",s);
    }
}
    return 0;

}

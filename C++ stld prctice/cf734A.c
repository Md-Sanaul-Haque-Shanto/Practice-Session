#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int n,i,anton=0,danik=0;

    scanf("%d",&n);
     getchar();
    gets(str);

    for(i=0; i<n; i++)
    {
        if(str[i]=='A' )
            anton++;
        else if(str[i]=='D')
            danik++;
    }
    if(anton>danik)
        printf("Anton");
    else if(anton<danik)
        printf("Danik");
    else if(anton==danik)
        printf("Friendship");
    return 0;

}

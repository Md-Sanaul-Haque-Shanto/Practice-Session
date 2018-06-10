#include <stdio.h>
#include<string.h>
int main()
{
    char line[1000];
    int i, vowels=0;
    scanf("%[^\n]", line);

    for(i=0; line[i]!='\0'; ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++vowels;
        }
    }

if ((line-vowels)>0)
{
    printf("No");
}
    else{
        printf("Yes");
    }

    return 0;
}

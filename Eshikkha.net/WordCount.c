#include <stdio.h>
#include <string.h>

int main()
{
int t;
char s[200];
    int count = 0, i;
scanf("%d",&t);
while(t--)
    {

    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;
    }
    printf("%d\n", count + 1);
    }
    return 0;
}

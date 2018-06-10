#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(islower(a[i]))
        {
            printf("%c",toupper(a[i]));
        }
        else
        {
            printf("%c",tolower(a[i]));
        }
    }
    return 0;
}

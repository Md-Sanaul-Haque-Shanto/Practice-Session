#include <stdio.h>

int main()
{
    char line[150];
    int i, consonants;
   consonants =0;

    printf("Enter a line of string: ");
    scanf("%[^\n]", line);

    for(i=0; line[i]!='\0'; ++i)
    {

    if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        {
            ++consonants;
        }

    }
    if ((line-consonants)>0)
{
    printf("Yes");
}
    else{
        printf("No");
    }


    return 0;
}

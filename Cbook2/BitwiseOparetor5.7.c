#include<stdio.h>
char to_uper(char ch)
{
return ch & 95;
}
char to_lower(char ch)
{
return ch|32;
}
int main()
{

char *str="AbCdEfGhIjKlMnOpQrStUvWxYz";
for (int i=0;i<26;i++)
{
printf("Uper Case:%c,",to_uper(str[i]));
printf("Lower Case:%c\n",to_lowe(str[i]));
}
return 0;
}

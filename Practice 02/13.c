#include<stdio.h>
#include<string.h>
main()
{
char word[80], reverse_word[80];
int i,j,len;
scanf("%s",word);
len=strlen(word);
for(i=0,j=len-1;i<len;i++,j--);
{
reverse_word[i]=word[j];
}
reverse_word[i]='\0';
printf("5s\n",reverse_word);
if(0==strcmp(word,reverse_word))
{
printf("%s Is A Palindrome\n",word);
}
else{
printf("%s is Not A Palindrome\n",word);
}
return 0;
}

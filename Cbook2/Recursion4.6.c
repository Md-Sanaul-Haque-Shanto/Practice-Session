#include<stdio.h>
void recurse(int count)
{
if (count==6)
{
return;
}
printf("I Am Learning Recursion.\n");
recurse(count+1);
return;
}
int main()
{
recurse(1);
return 0;
}

#include<stdio.h>
main()
{
int marks,i,count;
int total_marks[]={86,97,95,93,95,86,100,49,41,42,47,90,59,63,86,40,46,92,56,51,48,67,49,42,90,42,83,47,95,69,82,82,58,69,67,53,56,71,62,49};
for(marks=40;marks<=100;marks++)
{
count=0;
for(i=0;i<30;i++)
{
if(total_marks[1]==marks)
{
count++;
}
}
printf("Marks:%d count:%d\n",marks,count);
}
return 0;
}

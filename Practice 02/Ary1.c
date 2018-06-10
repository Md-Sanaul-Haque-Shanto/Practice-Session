#include<stdio.h>
main()
{
int st_marks,ft_marks,final_marks;
double total_marks;
printf("\5Enter The Value Of St_Marks:");
scanf("%d",&st_marks);
printf("\5Enter The Value Of St_Marks:");
scanf("%d",&ft_marks);
final_marks=st_marks+ft_marks;
printf("\Enter The Value Of St_Marks:%d",final_marks);
total_marks=st_marks/4.0+ft_marks/4.0+final_marks/2.0;
printf("%s\n",total_marks);
return 0;
}


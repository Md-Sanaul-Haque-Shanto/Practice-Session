#include<stdio.h>
int main()
{
FILE *fp;
char filename[]="file3.3.doc";
fp=fopen(filename,"w");
fprintf(fp,"This Is My File It Is Created By C Programs!\n");
fclose(fp);
fp=fopen(filename,"a");
fprintf(fp,"Scond line.\n");
fclose(fp);
return 0;
}

#include<stdio.h>

char * transtoupper(char str[]) {
    int i=0;
    while(str[i]) {
        int asciival = (int)(str[i]);
        if(asciival <= 122 && asciival >= 97) {
            str[i] = (char)(asciival-32);
        }
        i++;
    }
    return str;
}

int main() {
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++) {
        char str[100];
        gets(str);
        printf("Case %d: %s\n",i+1,transtoupper(str));
    }
    return 0;
}

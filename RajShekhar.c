#include<stdio.h>
#include<string.h>
int main() {
    char str[100000];
    while(1) {
        printf("Enter a string (type /'quit'/) to exit \n");
        gets(str);
        if(str=="quit") {
            break;
        }
        int b=0;
        int n=strlen(str);
        while(b<n) {
            while(b<n && !((str[b]>='A' && str[b]<='Z') || (str[b]>='a' && str[b]<='z'))) {
                b++;
            }
            int e=b+1;
            while(e<n && ((str[b]>='A' && str[b]<='Z') || (str[b]>='a' && str[b]<='z'))) {
                e++;
            }
            if(e-b == 4) {
                if(str[b]>='A' && str[b]<='Z') {
                    str[b]='*';
                    str[b+1]='*';
                    for(int i=b+2; str[i+2] != '\0'; i++) {
                        str[i]=str[i+2];
                    }
                }
                else {
                    str[b]='*';
                    str[b+1]='*';
                    for(int i=b+2; str[i+2] != '\0'; i++) {
                        str[i]=str[i+2];
                    }
                    b=e;
                }
            }
        }
        printf("Censored: \n");
        printf("%s \n\n", str);
    }
    return 0;
}
#include<stdio.h>
void rev(char* str) {
    int len=0;
    for(int i=0; str[i] != '\0'; i++) len++;
    int start=0;
    len--;
    while(start<=len) {
        char temp=str[start];
        str[start]=str[len];
        str[len]=temp;
        start++;
        len--;
    }
}
int main() {
    char str[100], reverse[100];
    gets(str);
    char ch;
    scanf("%c", &ch);
    int flag=0, k=0;
    for(int i=0; str[i] != '\0'; i++) {
        if(str[i]==ch) {
            flag=1;
            i++;
        }
        if(flag==1) {
            printf("%c", str[i]);
            reverse[k++]=str[i];
        }
    }
    reverse[k++]='\0';
    printf("\n");
    if(flag==0) {
        printf("Character %c doesn't occur in the string\n",ch);
        return 0;
    }
    rev(reverse);
    printf("%s", reverse);
    return 0;
}
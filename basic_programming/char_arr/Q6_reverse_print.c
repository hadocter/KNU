#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mystrlen(const char* p) //Q. const char* 로 정의하는 이유가 따로 있나요?
{
    for(int i = 0; ;i++)
    {
        if(p[i]=='\0')
        {
            return i;
        }
    }
}

void reverse_print(char* str)
{
    int len = mystrlen(str);
    for(int i = 0; len-i; i++)
    {
        printf("%c",str[len-i-1]);
    }
}

int main()
{
    char* str;
    str = malloc(sizeof(char)*100);
    printf("한 단어를 입력하세요. -> ");
    scanf("%s", str);
    printf("입력한 단어를 반대로 출력합니다. -> ");
    reverse_print(str);
    return 0;
}
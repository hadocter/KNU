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

int main()
{
    char* str_p;
    str_p = (char*)calloc(sizeof(char),100);
    gets(str_p);
    int len_lib = strlen(str_p); int len_my = mystrlen(str_p);
    printf("  strlen: %d \nmystrlen: %d\n", len_lib, len_my);
    return 0;

}
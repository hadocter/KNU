#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mystrlen(const char* p) 
{
    for(int i = 0; ;i++)
    {
        if(p[i]=='\0')
        {
            return i;
        }
    }
}

char* mystrcat(char s1[], const char s2[]) //const char을 s2에만 사용한 이유가 있나요?
{
    int size_s1 = mystrlen(s1);
    int size_s2 = mystrlen(s2);

    for(int i = 0; i!=size_s2; i++)
    {
        s1[size_s1 + i] = s2[i];
    }
    return s1;
}

int main()
{
    char s1[50] = "C ";
    mystrcat(s1, "programming language");
    printf("%s\n", s1);
    return 0;
}
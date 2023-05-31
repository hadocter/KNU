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


void delchar(char str[], const char ch) //why const??
{
    int len = mystrlen(str);
    int sel = 0;
    char temp;
    for(int k = 0; k != len; k++)
    {
        if(str[k]==ch) str[k] = '\0';
    }

    for(sel=0; sel<len; sel++)
    {
        if(!str[sel])
        {
            int null_ct;
            for(null_ct=0; (!str[null_ct+sel])&&(null_ct+sel<len); null_ct++);
            int char_ct;
            for(char_ct=0; (str[null_ct+sel+char_ct])&&(null_ct+sel+char_ct<len); char_ct++);
            for(int movt_count = 0; movt_count < char_ct; movt_count++)
            {
                int first_char = sel+null_ct;
                str[sel + movt_count] = str[first_char + movt_count];
                str[first_char + movt_count] = '\0';
                
            }
        }
    }
}

int main()
{
    char* str;
    str = (char*)malloc(sizeof(char)*100);
    gets(str);

    char ch;
    scanf("%c", &ch);

    delchar(str, ch);
    printf("%s", str);
    return 0;
}
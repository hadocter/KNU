#include <stdio.h>

int ppow(int n, int tothe_p_of)
{

    int k = 1;
    for(int i=0; i<tothe_p_of; i++)
    {
        k *= n;
    }
    return k;
}

int main()
{
    //int arr[] =  {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1};
    int arr[] = { 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 
0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 
1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1};

    int arrlen = sizeof(arr)/4;
    int char_n = arrlen/7;

    int tempnum = 0;
    int current_sel = 0;
    for(int selchar=0; selchar<char_n; selchar++)
    {
        tempnum = 0;
        for(int sel=0; sel<7; sel++)
        {
            current_sel = selchar*7 + sel;
            tempnum += ppow(2, 6-sel)*arr[current_sel];
        }
        printf("%d ", tempnum);
    }

    return 0;
}
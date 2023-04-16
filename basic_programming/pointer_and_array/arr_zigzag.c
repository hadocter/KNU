#include <stdio.h>


int pos1d(int *pos, int base)
{
    return pos[0]*base+pos[1];
}

int main()
{
    int base = 8;
    int min_sum = 0;
    int max_sum = 2*(base-1);
    int exchange = 0;

    int arr1D[64] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 
19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 
36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 
53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64 };

    int arrlen = sizeof(arr1D)/4;

    int pos[2] = {0,0};

    int xory = 1;
    int csum =0;
    int i = 0;

    while(i<arrlen)
    {
        printf("%d %d %d\n", i, pos[0],pos[1]);
        if((pos[(xory+1)%2])==0 || (pos[(xory+1)%2])==7 )
        {
            pos[xory%2]++;
            csum++;
            xory++;
            printf("%d %d %d\n", i, pos[0],pos[1]);
            i++;
        }

        pos[xory%2]++;
        pos[(xory+1)%2] = csum - pos[xory%2];

        i++;
    }




    return 0;
}


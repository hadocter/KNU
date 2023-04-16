/*
#include <stdio.h>

int main()
{

    return 0;
}
*/

#include <stdio.h>
#include <math.h>

int main()
{

    int image[8][8] = { {0, 10, 50, 70, 128, 128, 110, 110},
    {10, 22, 50, 71, 150, 120, 120, 110},
    {50, 50, 50, 150, 200, 200, 150, 70},
    {75, 72, 72, 150, 255, 200, 170, 70},
    {75, 74, 152, 181, 255, 200, 170, 70},
    {100, 101, 152, 200, 255, 200, 80, 40},
    {100, 152, 152, 180, 200, 170, 80, 30},
    {100, 128, 128, 128, 128, 100, 80, 0} };


    int len_image = sizeof(image)/4;
    int x_len_image = sizeof(image[0])/4;

    int freq[256] = {0,};
    int i, j;
    int x;

    for(int sel = 0; sel < len_image; sel++)
    {
        i = sel/x_len_image; j = sel%x_len_image;
        x = image[i][j];
        freq[x]++;
    }

    int digit_print=0;
    int n = len_image;
    while(n != 0)
    {
        n = n/10;
        digit_print++;
    }
    
    for(int p=0;p<256;p++){printf("%5d:", p);printf("%*d,",(digit_print+1),freq[p]);if(p%10==9){printf("\n");}}

    return 0;
}
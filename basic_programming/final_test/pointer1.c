/*basic form
#include <stdio.h>
int main()
{

    return 0;
}
*/

/* Q1
#include <stdio.h>
int main()
{
    char moj = '*';
    char* moj_p = &moj;
    printf("%d %c %p", *moj_p, *moj_p, moj_p);
    return 0;
}
*/
/* Q4
#include <stdio.h>
int main()
{
    int value[2] ={0x2f24263f,0x2f24263f} ;
    char* pc = &value;
    for(int i=0; i<8; i++)
    {
        int sel = i;
        printf("%c ", pc[sel] );
    }
    return 0;
}
*/
/* Q5
// 포인터 주소 가장 낮은 자리가 LSB(낮은 자리에 낮은 자리수 저장)
#include <stdio.h>
int main()
{
    int i = 0x324F3A24;
    char* p = &i;
    for(int i = 0; i < 4; i++)
    {
        int sel = 3-i;
        printf("%X",p[sel]);
    }
    return 0;
}
*/

/* Q7
#include <stdio.h>
int main()
{
    double intarr;
    int* arr = (int*)&intarr;
    for(int i = 0; i<2; i++)
    {
        scanf("%d", arr+i);
    }
    printf("%d %d %f %d", arr[0]+arr[1],arr[0]-arr[1],(float)arr[0]/arr[1],arr[0]*arr[1]);
    return 0;
}
*/
#include <stdio.h>
int main()
{
    int arr[3][3] = {0,1};
    for(int i = 0; i<3; i++)
    {
        printf("%d %d %d\n", arr[i][0],arr[i][1],arr[i][2]);
    }
    return 0;
}
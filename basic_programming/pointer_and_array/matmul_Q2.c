#include <stdio.h>
#include <string.h>

int temparr[3][3]; 

void addMat(int* matA, int* matB, int* routMat)
{
    int i, j;
    int resmat[3][3];
    for(int sel=0;sel<9;sel++)
    {
        i = sel/3; j = sel%3;
        resmat[i][j] = *(matA+sel) + *(matB+sel);
    }
    
    memcpy(routMat, resmat, 4*9);

}

void subMat(int* matA, int* matB, int* routMat)
{
    int i, j;
    int resmat[3][3];
    for(int sel=0;sel<9;sel++)
    {
        i = sel/3; j = sel%3;
        resmat[i][j] = *(matA+sel) - *(matB+sel);
    }
    
    memcpy(routMat, resmat, 4*9);

}

void multMat(int* matA, int* matB, int* routMat)
{
    int i, j;
    int resmat[3][3];
    int tempsum=0;
    int tmpx,tmpy;
    for(int sel=0;sel<9;sel++)
    {
        i = sel/3; j = sel%3;
        tempsum = 0;
        for(int k = 0; k<3; k++)
        {
            tmpy = matA[i*3 + k]; tmpx = matB[k*3+j];
            tempsum += (tmpy) * (tmpx);
        }

        resmat[i][j] = tempsum;

    }
    
    memcpy(routMat, resmat, 4*9);

}


int main()
{
    int A[3][3] = {{10,20,10},{4,5,6},{2,3,5}};
    int B[3][3] = {{3,2,4},{3,3,9},{4,4,2}};

    int res[3][3];

    int opsel;
    printf("1) 행렬 덧셈 함수 (addMat)\n");
    printf("2) 행렬 뻴셈 함수 (subMat)\n");
    printf("3) 행렬 곱셈 함수 (mhltMat)\n");
    printf("Select an operation[1-3]: ");
    scanf("%d", &opsel);

    switch(opsel)
    {
        case 1: 
            addMat(&A[0][0] , &B[0][0], &res[0][0]);
            break;
        
        case 2:
            subMat(&A[0][0] , &B[0][0], &res[0][0]);
            break;
        
        case 3:
            multMat(&A[0][0] , &B[0][0], &res[0][0]);
            break;
        
    }



    int i,j;
    for(int sel=0;sel<9;sel++){
        i = sel/3; j = sel%3;
        printf("%3d ", res[i][j]);
        if(j==2){printf("\n");}
    }
    return 0;
}

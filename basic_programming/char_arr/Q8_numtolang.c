#include <stdio.h>

void num_to_han(int in)
{
    switch(in){
        case 1:
            break;
        case 2:
            printf("이");
            break;
        case 3:
            printf("삼");
            break;
        case 4:
            printf("사");
            break;
        case 5:
            printf("오");
            break;
        case 6:
            printf("육");
            break;
        case 7:
            printf("칠");
            break;
        case 8:
            printf("팔");
            break;
        case 9:
            printf("구");
            break;
    }
}

void printnum(int num)
{
    int thou = num/1000;
    num %= 1000;
    int hund = num/100;
    num %= 100;
    int tenn = num/10;
    num %= 10;
    int onee = num;

    if(thou)
    {
        num_to_han(thou);
        printf("천 ");
    }
    if(hund)
    {
        num_to_han(hund);
        printf("백 ");
    }
    if(tenn)
    {
        num_to_han(tenn);
        printf("십 ");
    }
    if(onee)
    {
        (onee==1)? printf("일") : num_to_han(onee);
    }
}

int main()
{
    int input;
    printf("10000보다 작은 정수 하나를 입력하세요. -> ");
    scanf("%d", &input);
    printf("입력한 정수는 [");
    printnum(input);
    printf("]입니다.");
    return 0;
}

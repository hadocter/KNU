#include <stdio.h>
#include <math.h>

float avg(int *vals, int elm_n)
{
    int sum = 0;
    for(int i=0; i<elm_n; i++)
    {
        sum += vals[i];
    }
    float res = (float)sum / (float)elm_n;
    return res;
}


float std_dev(int *vals, int elm_n)
{
    float tempval = 0;
    float sum = 0;
    float m = avg(vals, elm_n);
    tempval = 0;
    for(int i=0; i<elm_n; i++)
    {
        tempval = vals[i]-m;
        sum += tempval*tempval;
    }
    return sqrt(sum/elm_n);
}

int main()
{
    int values[] = {95, 90, 82, 86, 92, 100, 85, 88, 97, 94};
    printf("%.3f\n", avg(values, sizeof(values)/4));
    printf("%.3f\n", std_dev(values, sizeof(values)/4));
    return 0;
}
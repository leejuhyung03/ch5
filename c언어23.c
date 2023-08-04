#include <stdio.h>

int main(void)
{
    double num1, num2;
    printf("첫번째 실수: ");
    scanf("%lf", &num1);
    printf("두번째 실수: ");
    scanf("%lf", &num2);

    printf("더하기:%lf\n ", num1+num2);
    printf("빼기:%lf\n ", num1-num2);
    printf("곱하기:%d\n", num1*num2);
    printf("나누기:%d\n", num1/num2);

    return 0;
    

}
#include <stdio.h>

int main(void)
{
    int xpos1, ypos1;
    int xpos2, ypos2;
    int area;

    printf("첫번째 좌표의 x좌표를 입력하시오: ");
    scanf("%d", &xpos1);
    printf("첫번째 좌표의 y좌표를 입력하시오: ");
    scanf("%d", &ypos1);
    
    printf("두번째 좌표의 x좌표를 입력하시오: ");
    scanf("%d", &xpos2);
    printf("두번째 좌표의 y좌표를 입력하시오: ");
    scanf("%d", &ypos2);
    
    area=(xpos2-xpos1)*(ypos2-ypos1);

    printf("넓이:%d\n", area);
    
    return 0;



}

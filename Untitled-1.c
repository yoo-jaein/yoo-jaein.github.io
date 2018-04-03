#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int i;
    int num = 0;
    int input = 0;

    num = rand() % 101;

    for(i = 0; i < 10; i++)
    {
        printf("1~100까지의 숫자 중 하나를 입력해 주세요.")
        scanf("%d", &input);

        if(input < num)
        {
            printf("아닙니다. 더 높습니다.\n");
        }
        else if(input == num)
        {
            printf("축하합니다. %d번 만에 정답을 맞췄습니다.", i+1);
            break;
        }
        else if(input > num)
        {
            printf("아닙니다. 더 낮습니다.\n");
        }
    }
}
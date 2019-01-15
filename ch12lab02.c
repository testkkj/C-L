#include <stdio.h>

main()
{
    int a;

    printf("성적을 입력하시오: ");
    scanf(" %d", &a);

    if (90 <= a)
    {
        printf(" %c  학점입니다.", 'A');
    }
    else if (80 <= a)
    {
        printf(" %c  학점입니다.", 'B');
    }
    else if (70 <= a)
    {
        printf(" %c  학점입니다.", 'C');
    }
    else if (60 <= a)
    {
        printf(" %c  학점입니다.", 'D');
    }
    else
    {
        printf(" %c  학점입니다.", 'F');
    }
}

#include <stdio.h>

main()
{
    int a;

    printf("현재 시각을 입력하시오(24형식으로): ");
    scanf(" %d", &a);

    if (a < 10)
    {
        printf("Good morning");
    }
    else if (a < 20)
    {
        printf("Good day");
    }
    else
    {
        printf("Good evening");
    }

    return 0;
}

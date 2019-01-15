#include <stdio.h>
main()
{
    int a;
    int b;

    printf("첫 번째 정수 : ");
    scanf(" %d", &a);

    printf("두 번째 정수 : ");
    scanf(" %d", &b);

    printf("몫은 %d입니다.", a/b);
    printf("나머지는 %d입니다.", a%b);

    return 0;
}

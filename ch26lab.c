#include <stdio.h>

main()
{
    int count, i, n;
    int * p;

    printf("몇 개의 정수를 입력할 건가요? ");
    scanf(" %d", &count);

    p = (int *)malloc(count * sizeof(int));

    if (!p)
    {
        printf("메모리 할당이 실패하였습니다!");
        exit(1);
    }

    for(i = 0; i < count; i++)
    {
        printf("정수를 입력하시오: ");
        scanf("%d", &n);
        p[i] = n;
    }

    printf("입력된 정수는 [ ");

    for(i = 0; i < count; i++)
    {
        printf("%d",p[i]);
    }

    printf("] 입니다. ");

    return 0;
}

/*
#include <stdio.h>

main()
{
    int a, b, i;

    printf("몇 개의 정수를 입력할 건가요? ");
    scanf(" %d", &a);

    for (i = 0; i < a; i++)
    {
        b = a;

        printf("정수를 입력하시오: ");
        scanf(" %d", &b);

    }

    printf("입력된 정수는 [ %d ] 입니다.", &b);

    return 0;
}
*/

#include <stdio.h>

main()
{
    int a;

    printf("���� �ð��� �Է��Ͻÿ�(24��������): ");
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

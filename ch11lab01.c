#include <stdio.h>

main()
{
    int a;

    printf("������ �Է��Ͻÿ�: ");
    scanf(" %d", &a);
    if ((a % 2) == 0)
    {
        printf("%d�� ¦���Դϴ�.", a);
    }
    else
    {
        printf("%d�� Ȧ���Դϴ�.", a);
    }

    return 0;
}

#include <stdio.h>

main()
{
    int a;
    int b;
    int c;

    printf("���� 3���� �Է��Ͻÿ�: ");
    scanf(" %d %d %d", &a, &b, &c);

    if ((a < b) && (a < c))
    {
        printf("���� ���� ���� %d�Դϴ�.", a);
    }
    else if ((b < a) && (b < c))
    {
        printf("���� ���� ���� %d�Դϴ�.", b);
    }
    else
    {
        printf("���� ���� ���� %d�Դϴ�.", c);
    }

    return 0;
}

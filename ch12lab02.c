#include <stdio.h>

main()
{
    int a;

    printf("������ �Է��Ͻÿ�: ");
    scanf(" %d", &a);

    if (90 <= a)
    {
        printf(" %c  �����Դϴ�.", 'A');
    }
    else if (80 <= a)
    {
        printf(" %c  �����Դϴ�.", 'B');
    }
    else if (70 <= a)
    {
        printf(" %c  �����Դϴ�.", 'C');
    }
    else if (60 <= a)
    {
        printf(" %c  �����Դϴ�.", 'D');
    }
    else
    {
        printf(" %c  �����Դϴ�.", 'F');
    }
}

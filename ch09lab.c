#include <stdio.h>
main()
{
    int a;
    int b;

    printf("ù ��° ���� : ");
    scanf(" %d", &a);

    printf("�� ��° ���� : ");
    scanf(" %d", &b);

    printf("���� %d�Դϴ�.", a/b);
    printf("�������� %d�Դϴ�.", a%b);

    return 0;
}

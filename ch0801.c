// 8�� ���� #1
// ���� Chapter8ex1.c

/* ����ڿ��� �⺻���� �� ���� ������ �����ϰ�
�Էµ� �͵��� ȭ�鿡 ����Ѵ�. */

#include <stdio.h>

main()
{
    // scanf()�� ä��� �� �������� �����Ѵ�.
    char firstInitial;
    char lastInitial;
    int age;
    int favorite_number;

    printf("�̸�(�����)�� ���� ���ڷ� �����մϱ�?\n");
    scanf(" %c", &firstInitial);

    printf("��(�����)�� ���� ���ڷ� �����մϱ�?\n");
    scanf(" %c", &lastInitial);

    printf("���̴� �� ���ΰ���??\n");
    scanf(" %d", &age);

    printf("���� �����ϴ� ���ڴ�(������)?\n");
    scanf(" %d", &favorite_number);

    printf("\n����� �̴ϼ��� %c.%c. ���̴� %d�Դϴ�.",
           firstInitial, lastInitial, age);
    printf("\n���� �����ϴ� ���ڴ� %d�Դϴ�.\n\n", favorite_number);

    return 0;
}

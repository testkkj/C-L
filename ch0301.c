/*
ù ��° �ڵ� ������
1994����� �ʺ� ���α׷��ӵ��� �����ϰ� ����! */
/* �� �з�*/
/* ���� �̸� Chapter3ex1.c */

/* ���� ������ ���� ���� �հ� */
#include <stdio.h>
main()
{
    int gift1, gift2, gift3, gift4, gift5; /* ����� �����ϴ� ������ */
    int total; /* �հ踦 �����ϴ� ���� */

    /* �� ������ ����� ���´�. */
    printf("������ ���Ͽ� �󸶳� ���� �� ���ΰ���?");
    scanf(" %d", &gift1);
    printf("�ƺ��� ���Ͽ� �󸶳� ���� �� ���ΰ���?");
    scanf(" %d", &gift2);
    printf("������ ���Ͽ� �󸶳� ���� �� ���ΰ���?");
    scanf(" %d", &gift3);
    printf("���� ���Ͽ� �󸶳� ���� �� ���ΰ���?");
    scanf(" %d", &gift4);
    printf("���� �����ϴ� C ���α׷��� ���ڸ� ");
    printf("���Ͽ� �󸶳� ���� �� ���ΰ���?");
    scanf(" %d", &gift5);

    /* ������ ���̴� ����� �հ踦 ����Ѵ�. */
    total = gift1 + gift2 + gift3 + gift4 + gift5;

    printf("\n���� ����� �հ�� $%d�Դϴ�.", total);
    return 0; /* ���α׷��� �����Ѵ�. */
}
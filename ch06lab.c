#include <stdio.h>
#include <string.h>

main()
{
    char mov1[] = "�ȳ� ������";
    char mov2[] = "�ܿ� �ձ�";
    char mov3[] = "������ ǻ��";

    char der1[] = "���� ��";
    char der2[] = "������ ��";
    char der3[] = "�ι�Ʈ ����Ű��";

    //<string.h>
    //char der3[100];
    //strcpy(der3 = "��");

    printf("��ȭ \"%s\"�� ������ %s�Դϴ�.\n", mov1, der1);
    printf("��ȭ \"%s\"�� ������ %s�Դϴ�.\n", mov2, der2);
    printf("��ȭ \"%s\"�� ������ %s�Դϴ�.\n", mov3, der3);

    return 0;
}

#include <stdio.h>
main()
{
    char city[20];
    int day;
    float deg;

    printf("��� ��� ��ó���?");
    scanf(" %s", city);

    printf("\n������ ��ĥ�ΰ���?");
    scanf(" %d", &day);

    printf("\n ���� ����� ��ΰ���?(�Ǽ���)");
    scanf(" %f", &deg);

    printf("\n\n������ %d���̰� %s�̶�� ���� ���� ���� ��� ��ô±���!\n", day, city);
    printf("������ %.1f�� �̱���.", deg);

    return 0;
}

// 11�� ���� #1
// ���� Chapter11ex1.c

/* �� ���α׷��� ����ڿ��� ��� ������ �����Ͽ� ������ ���̸� ����Ѵ�.
�� ��¥�� �߸� �ԷµǾ �̷��� ��¥�� �Էµƴ����� �˻��Ѵ�.
����ڰ� ���⿡ �¾���� �̸� �˷��ش�. */

#include <stdio.h>
#define CURRENTYEAR 2019

main()
{
    int yearBorn, age;

    printf("�� �⿡ �¾�̽��ϱ�?\n");
    scanf(" %d", &yearBorn);

    // if ������ ������ ������ �ϴ� �� ���ȴ�.
    // ����ڰ� �Է��� ź�� ������ �ùٸ����� �˻��Ѵ�.
    // �� ������ yearBorn�� 2019�� ������ ��쿡�� ����ȴ�.

    if (yearBorn > CURRENTYEAR)
    {
        printf("��¥��? ���� �¾�� �����̴ٰ���?\n");
        printf("�ٸ� ������ �Է��Ͻðڽ��ϱ�?\n");
        printf("�� �⿡ �¾�̽��ϱ�?\n");
        scanf(" %d", &yearBorn);
    }

    age = CURRENTYEAR - yearBorn;

    printf("\n���� �ݳ� ������ ������ %d���� �ǽô±���!\n", age);

    // �� ��° if ������ ����ڰ� �¾ ������ ���������� �˻��Ѵ�.
    // ������ ��쿡�� if�� ��ü�� ����ȴ�.

    if ((yearBorn % 4) == 0)
    {
        printf("\n���⿡ �¾�̱���--���Ͻó׿�!\n");
    }

    return 0;
}
// 17�� ���� #1
// ���� Chapter17ex1.c

/* �� ���α׷��� ����ڿ��� �޴��� �����Ѵ�. ����ڷκ��� �Է��� �޾Ƽ� switch ���� �̿��ؼ� �ش�Ǵ�
�ڵ带 �����Ѵ�. (��� ����ڰ� �����ϱ⸦ ���ϴ� �ڵ�� �������� �ʾҴ�. �ٸ� �̰��� switch ���� ����ġ��
���Ͽ� ���� �������� ������ �ִ�.) */

#include <stdio.h>
#include <stdlib.h>

main()
{
    int choice;

    printf("������ �Ͻðڽ��ϱ�?\n");
    printf("1. ���ο� ����ó �߰�\n");
    printf("2. ���� ����ó ����\n");
    printf("3. ����ó ��ȭ \n");
    printf("4. ����ó ���� �޽��� \n");
    printf("5. ���� \n");

    do
    {
        printf("�������� ������ �����Դϱ�: ");
        scanf(" %d", &choice);

        switch (choice)
        {
            case (1) : printf("\n����ó�� �߰��ϱ� ���ؼ��� ");
            printf("����ó�� �̸��� ��ȭ��ȣ�� �ʿ��մϴ�. \n");
            break;
            case (2) : printf("\n������ ���ϴ� ");
            printf("����ó�� �̸��� �Է��Ͻÿ�. \n");
            break;
            case (3) : printf("\n� ����ó�� ");
            printf("��ȭ�ұ��?\n");
            break;
            case (4) : printf("\n� ����ó�� ���ڸ� ");
            printf("�������?\n");
            break;
            case (5) : exit(1); // ���α׷��� ���� �����Ѵ�.

            default : printf("\n%d�� �ùٸ� �޴� ���� �ƴմϴ�. \n", choice);
            printf("�ٽ� �Է��Ͻÿ�.\n");
            break;
        }
    }while ((choice < 1) || (choice > 5));

    return 0;
}

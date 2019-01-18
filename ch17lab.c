#include <stdio.h>

main()
{
    int month = 2;
    int year = 2019;
    int numDays = 0;

    printf("���� �Է��Ͻÿ�: ");
    scanf(" %d", &month);

    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        numDays = 31;
        break;
    case 4: case 6: case 9: case 11:
        numDays = 30;
        break;
    case 2:
        if (((year % 4 == 0) && !(year % 100 == 0)) || (year % 400 == 0))
        {
            numDays = 29;
        }
        else
        {
            numDays = 28;
        }
        break;
    default:
        printf("�߸��� ���Դϴ�. \n");
        break;
    }
    printf("%d���� %d���� �ֽ��ϴ�.\n", month, numDays);

    return 0;
}

/*#include <stdio.h>

main()
{
    int month;

    printf("���� �Է��Ͻÿ�: ");
    scanf(" %d", &month);

    do
    {
        switch (month)
        {
            case (1) : printf("%d���� 31�ϱ��� �ֽ��ϴ�.",month);
            break;
            case (2) : printf("%d���� 28�ϱ��� �ֽ��ϴ�.",month);
            break;
            case (3) : printf("%d���� 31�ϱ��� �ֽ��ϴ�.",month);
            break;
            case (4) : printf("%d���� 30�ϱ��� �ֽ��ϴ�.",month);
            break;
            case (5) : printf("%d���� 31�ϱ��� �ֽ��ϴ�.",month);
            break;
            case (6) : printf("%d���� 30�ϱ��� �ֽ��ϴ�.",month);
            break;
            case (7) : printf("%d���� 31�ϱ��� �ֽ��ϴ�.",month);
            break;
            case (8) : printf("%d���� 31�ϱ��� �ֽ��ϴ�.",month);
            break;
            case (9) : printf("%d���� 30�ϱ��� �ֽ��ϴ�.",month);
            break;
            case (10) : printf("%d���� 31�ϱ��� �ֽ��ϴ�.",month);
            break;
            case (11) : printf("%d���� 30�ϱ��� �ֽ��ϴ�.",month);
            break;
            case (12) : printf("%d���� 31�ϱ��� �ֽ��ϴ�.",month);
            break;

            default: printf("��Ȯ���� �ʽ��ϴ�.\n�ٽ� �Է��� �ּ���");
            break;
        }

    }while ((month > 0) || (month < 13));

    return 0;
}
*/

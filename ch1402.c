// 14�� ���� #2
// ���� Chapter14ex2.c

/* �� ���α׷��� 2���� ���ڸ� ���� �Ŀ� ����ڰ� ���ϸ� ����� ǥ���Ѵ�.
����ڰ� 'N'��� �ϸ� ������ Ż���Ѵ�. */

#include <stdio.h>

main()
{
    float num1, num2, result;
    char choice;

    do
    {
        printf("ù ��° ���ڸ� �Է��Ͻÿ�: ");
        scanf(" %f", &num1);

        printf("�� ��° ���ڸ� �Է��Ͻÿ�: ");
        scanf(" %f", &num2);

        result = num1 * num2;

        printf("%.2f ���ϱ� %.2f �� %.2f�̴�.\n\n", num1, num2, result);

        printf("�ٸ� ���ڸ� ���ϱ⸦ ���Ͻʴϱ�?(Y/N):");
        scanf(" %c", &choice);
        // ���� ����ڰ� �ҹ��� n�� �Է��ϸ�
        // if ������ �빮�� N���� �����Ѵ�.
        if (choice == 'n')
        {
            choice = 'N';
        }
    }while (choice != 'N');

    return 0;
}

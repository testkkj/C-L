// 5�� ���� #1
// ���� Chapter5ex1.c

/* �̰��� 3���� ���̿��� �ʿ��� �п�ǰ�� ����ϴ� ���α׷��̴�.
�п�ǰ�� ��� �� �ʿ��� �ݾ׵� �����Ѵ�.
�п�ǰ�� �̱����� �����Ѵٰ� ��������. */

#include <stdio.h>

main()
{
    //������ �����ϰ� �ʱ�ȭ�Ѵ�.
    char firstInitial, middleInitial;
    int number_of_pencils;
    int number_of_notebooks;
    float pencils = 0.23;
    float notebooks = 2.89;
    float lunchbox = 4.99;

    //ù ��° ������ ����
    firstInitial = 'J';
    middleInitial = 'R';

    number_of_pencils = 7;
    number_of_notebooks = 4;

    printf("%c%c���Դ� %d���� ���ʰ�, %d���� ��å, 1���� ���ö�.\n",
           firstInitial, middleInitial, number_of_pencils,
           number_of_notebooks);
    printf("�� �ݾ��� $%.2f\n\n", number_of_pencils
           + number_of_notebooks*notebooks + lunchbox);

    //�� ��° ������ ����
    firstInitial = 'A';
    middleInitial = 'J';

    number_of_pencils = 10;
    number_of_notebooks = 3;

    printf("%c%c���Դ� %d���� ���ʰ�, %d���� ��å, 1���� ���ö�.\n",
           firstInitial, middleInitial, number_of_pencils,
           number_of_notebooks);
    printf("�� �ݾ��� $%.2f\n\n", number_of_pencils
           + number_of_notebooks*notebooks + lunchbox);

    //�� ��° ������ ����
    firstInitial = 'M';
    middleInitial = 'T';

    number_of_pencils = 9;
    number_of_notebooks = 2;

    printf("%c%c���Դ� %d���� ���ʰ�, %d���� ��å, 1���� ���ö�.\n",
           firstInitial, middleInitial, number_of_pencils,
           number_of_notebooks);
    printf("�� �ݾ��� $%.2f\n\n", number_of_pencils
           + number_of_notebooks*notebooks + lunchbox);

    return 0;
}

// 9�� ���� #1
// ���� Chapter9ex1.c

/* �� ���� ���α׷��� ��� �����ڿ�
������ ������ ���� ���� ��츦 �����Ѵ�. */

#include <stdio.h>
main()
{
    //������ ������ �ε��Ҽ��� ������ ���� ������ �غ��Ѵ�.
    float a = 19.0;
    float b = 5.0;
    float floatAnswer;

    int x = 19;
    int y = 5;
    int intAnswer;

    //2���� float ������ ����ϸ� 3.8�� ���ȴ�.
    floatAnswer = a/b;
    printf("%.1f ������ %.1f �� %.1f\n", a, b, floatAnswer);

    floatAnswer = x/y;
    printf("%d ������ %d �� %.1f\n", x, y, floatAnswer);

    //�̰͵� 3�� �Ǵµ� �Ҽ��� ���ϴ� ��������.(�ݿø����� �ʴ´�.)
    intAnswer = a/b;
    printf("%.1f ������ %.1f �� %d\n", a, b, intAnswer);

    intAnswer = x%y; //������ 4�� ���ȴ�.
    printf("%d ��ⷯ�� (�� ������ ����) %d �� %d\n", x, y, intAnswer);

    return 0;
}

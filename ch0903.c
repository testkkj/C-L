// 9�� ���� #3
// ���� Chapter9ex3.c

/* ���� 4���� ����� ����ϰ� �ٸ� ��� ��굵 �Ѵ�. */

#include <stdio.h>

main()
{
    int grade1, grade2, grade3, grade4;
    float averageGrade, gradeDelta, percentDiff;

    /*�л��� ù ��°�� �� ��° ���迡�� 88���� �����.
    ���� ���� ���� ������ �����ϴ�. */
    grade1 = grade3 = 88;
    grade2 = 79;

    // ����ڰ� �� ��° ������ �Է��Ѵ�.
    printf("4��° ���迡�� �� ���� �������");
    printf("(0���� 100 ������ ������)?");
    scanf(" %d", &grade4);

    averageGrade = (grade1 + grade2 + grade3 + grade4)/4;

    printf("����� ��ռ����� %.1f\n", averageGrade);

    gradeDelta = 95 - averageGrade;
    percentDiff = 100 * ((95-averageGrade)/95);

    printf("Ŭ������ �ְ� ������ ���ϸ�(95)\n");
    printf("����� ������ %.1f�� �����ϴ�.\n", gradeDelta);
    printf("�� �ۼ�Ʈ�� ���ϸ�\n");
    printf("����� %.1f �ۼ�Ʈ �������ϴ�.\n", percentDiff);

    return 0;
}

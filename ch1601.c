// 16�� ���� #1
// ���� Chapter16ex1.c

/* �� ���α׷��� ����ڿ��� �л� 25���� ���� ������ �Է��ϰ� �Ѵ�.
���� ������ ����� ����Ѵ�.
���� 25���� ���� �л��� ������ �ôٸ� ����ڴ� �������� -1.0�� �Է��ϰ� �ݺ� �ݺ����� �����Ѵ�.
���ݱ��� �Էµ� ������ ������ ����� ����Ѵ�. */

#include <stdio.h>

main()
{
    int numTest;
    float stTest, avg, total = 0.0;

    // 25���� ������ �Է¹޴´�.
    for (numTest = 0; numTest < 25; numTest++)
    {
        // ���� ������ -1�� �ƴ����� �˻��Ѵ�.
        printf("\n���� �л��� ������? ");
        scanf(" %f", &stTest);

        if (stTest < 0.0)
        {
            break;
        }
        total += stTest;
    }

    avg = total / numTest;
    printf("\n����� %.1f%%�Դϴ�.\n", avg);

    return 0;
}

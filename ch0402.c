// 4�� ���� #2
// ���� Chapter4ex2.c

#include <stdio.h>

main()
{
    /* ���⼭�� printf(), �̽������� ������,
    ��ȯ���ڸ� �н��� ����. */

    printf("����\t�ܰ�\t�Ѿ�\n");
    printf("%d\t$%.2f\t$%.2f\n", 3, 9.99, 29.97);
    printf("�ʹ� ���� �����̽���         \b\b\b\b�� ���� ");
    printf("\\%c �̽������� ���ڷ� ������ �����ϴ�.\n",'b');

    printf("\n\a\n\a\n\a\n\a������ �ǳʶٰ� ��� ���带 ");
    printf("����Ѵ�.\n\n\n");
    printf("%c%s.",'C', "�� �����ϴ� ���̴�.");
    printf("�������� %d���� ���´�. �������� �̹� �� å�� ", 4);
    printf("%.1f%c�� �н��Ͽ���.\n", 12.500, '%');

    printf("\n\n����� ���� %.2f�� ���ų� ", 0.333333);
    printf("%.3f�� ���ų� %.4f�� ���ų� ", 0.333333, 0.333333);
    printf("%.5f�� ���ų� %.6f�� ����.\n\n\n", 0.333333, 0.333333);

    return 0;
}
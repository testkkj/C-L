// 8�� ���� #2
// ���� Chapter8ex2.c

/* ����ڿ��� �⺻���� ��� ������ �����ϰ�
������ �ԷµǾ����� ȭ�鿡 ����Ѵ�. */

#include <stdio.h>

main()
{
    char topping[24];
    int slices;
    int month, day, year;
    float cost;

    // ù ��° scanf()�� �ε��Ҽ������� ������ �������� �Է¹޴´�.
    // ����ڰ� ���� �տ� $�� �Է����� ������ ������ �߻��Ѵ�.
    printf("�������� ���������� ���ڰ� �󸶳� �ϳ���?");
    printf("($XX.XX�� ���� �Է��Ͻÿ�)\n");
    scanf(" $%f", &cost);

    //���� ������ ���ڿ��̴�. ���� scanf()�� ���ۻ��尡 ��� �ȴ�.
    printf("���� �����ϴ� ���� ������(�� �ܾ��)?\n");
    scanf(" %s", topping);

    printf("�󸶳� ���� %s ������ �����̽��� ���� �� �ֳ���?", topping);
    printf("�� �ڸ�����?\n");
    scanf(" %d", &slices);

    printf("������ ��¥�� �Է��Ͻÿ�. (MM/DD/YY ��������).\n");
    scanf(" %d/%d/%d", &month, &day, &year);

    printf("\n\n%d/%d/%d�� ���ῡ ", month, day, year);
    printf("\n%s ������ %d�� �����̽��� ������ ���!\n", topping, slices);
    printf("���ݵ� $%.2f�ۿ� ���ϴµ���!\n\n\n", cost);

    return (0);
}

// 9�� ���� #2
// ���� Chapter9ex2.c

/* �� ���α׷��� ����ڿ��� Ÿ�̾��� ������ ������ ���´�. ������ �ٿ��� ��ü ������ ����Ѵ� */

// ������ ����� �� �����Ƿ� #define�� �̿��Ͽ��� �� ������ �����ϴ� ���� ����.
#include <Stdio.h>
#define SALESTAX .07

main()
{
    int numTires;
    float tirePrice, beforeTax, netSales;

    /* ������ Ÿ�̾� ������ Ÿ�̾� ������ ��´�. */
    printf("Ÿ�̾ ��� �����Ͻðڽ��ϱ�? ");
    scanf(" %d", &numTires);
    printf("Ÿ�̾� �ϳ��� ������ ($XX.XX ��������)? ");
    scanf(" $%f", &tirePrice);

    /* ������ ����Ѵ�. */
    beforeTax = tirePrice * numTires;
    netSales = beforeTax + (beforeTax * SALESTAX);

    printf("Ÿ�̾� ��ü �ݾ����� $%.2f�� ����ϼž߰ڳ׿�.\n\n\n", netSales);

    return 0;
}

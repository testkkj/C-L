#include <stdio.h>

main()
{
    float a,c;
    int b,i;

    printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
    scanf(" %f", &a);
    printf("\n�ŵ�����Ƚ���� �Է��Ͻÿ�: ");
    scanf(" %d", &b);

    c=1.0;
    for (i=0; i<b; i++)
        c *= a;

    printf("������� %f", c);

    return 0;
}

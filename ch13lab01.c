#include <stdio.h>

main()
{
    int a,b;
    int la,sm;

    printf("���� 2���� �Է��Ͻÿ�: ");
    scanf(" %d %d", &a, &b);

    la = a > b ? a : b;
    sm = a > b ? b : a;

    printf("���� ���� %d", sm);
    printf("ū ���� %d", la);

    return 0;
}

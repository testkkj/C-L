#include <stdio.h>

main()
{
    int a;
    int b = 0;

    do
    {
     printf("������ �Է��Ͻÿ�: ");
     scanf(" %d", &a);
     b = a + b;
    }
    while (a != 0);

    printf("�հ� = %d", b);

    return 0;
}

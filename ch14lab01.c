#include <stdio.h>

main()
{
    int a,b;

    printf("������ �Է��Ͻÿ�: ");
    scanf(" %d", &a);

    b=1;
    while (a > 0)
    {
        b = b * a;
        --a;
    }

    printf("���丮��(n!)= %d", b);

    return 0;
}

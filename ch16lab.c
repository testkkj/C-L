#include <stdio.h>

main()
{
    float num, result;
    int i, n;

    result = 1.0;
    printf("�Է��� ���� : ");
    scanf(" %d", &n);

    for (i = 1; i <= n; ++i)
    {
        printf("%d��° ��: ", i);
        scanf("%f", &num);
        if (num < 0.0)
        {
            break;
        }
        if (num == 0.0)
        {
            continue;
        }
        result = result * num;
    }

    printf("��갪 = %.2f \n", result);

    return 0;
}

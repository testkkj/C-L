#include <stdio.h>

main()
{
    int tv,tb,sh;
    float tvp=1320.00,tbp=299.00,shp=129.00;

    tv=3;
    tb=2;
    sh=5;

    printf("%d���� TV��, %d���� �º�, %d���� �鵵��.\n", tv, tb, sh);
    printf("�� �ݾ��� $%.2f\n", tv*tvp+tb*tbp+sh*shp);

}

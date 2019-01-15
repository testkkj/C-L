#include <stdio.h>

main()
{
    int tv,tb,sh;
    float tvp=1320.00,tbp=299.00,shp=129.00;

    tv=3;
    tb=2;
    sh=5;

    printf("%d대의 TV와, %d개의 태블릿, %d개의 면도기.\n", tv, tb, sh);
    printf("총 금액은 $%.2f\n", tv*tvp+tb*tbp+sh*shp);

}

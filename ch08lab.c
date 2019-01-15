#include <stdio.h>
main()
{
    char city[20];
    int day;
    float deg;

    printf("어디에 살고 계시나요?");
    scanf(" %s", city);

    printf("\n오늘이 며칠인가요?");
    scanf(" %d", &day);

    printf("\n 오늘 기온은 몇도인가요?(실수로)");
    scanf(" %f", &deg);

    printf("\n\n오늘은 %d일이고 %s이라는 아주 좋은 곳에 살고 계시는군요!\n", day, city);
    printf("오늘은 %.1f도 이군요.", deg);

    return 0;
}

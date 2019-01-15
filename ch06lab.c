#include <stdio.h>
#include <string.h>

main()
{
    char mov1[] = "안녕 헤이즐";
    char mov2[] = "겨울 왕국";
    char mov3[] = "백투더 퓨쳐";

    char der1[] = "조쉬 분";
    char der2[] = "제니퍼 리";
    char der3[] = "로버트 제메키스";

    //<string.h>
    //char der3[100];
    //strcpy(der3 = "갓");

    printf("영화 \"%s\"의 감독은 %s입니다.\n", mov1, der1);
    printf("영화 \"%s\"의 감독은 %s입니다.\n", mov2, der2);
    printf("영화 \"%s\"의 감독은 %s입니다.\n", mov3, der3);

    return 0;
}

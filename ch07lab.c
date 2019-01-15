#include <stdio.h>
#define PI 3.141592
/*
define 형식
#define 원하는이름 값
#define a 10
#define zzz "ㅋㅋㅋ"
*/

main()
{
    double r = 5;
    double a;

    a= PI*r*r;

    printf("반지름이 %.1f인 원의 면적은 %.1f입니다.", r, a);

    return 0;
}

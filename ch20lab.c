#include <time.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
    /* 패스워드의 길이 */
    unsigned short int length = 8;

    /* rand()의 시드값 설정 */
    srand((unsigned int)time(NULL));

    /* 아스키 코드 33부터 126까지 생성 */
    while (length--)
    {
        putchar(rand() %94 + 33);
        srand(rand());
    }

    printf("\n");

    return 0;
}

/*
#include <stdio.h>
#include <time.h>

main()
{
    int otp;
    time_t t;

    srand(time(&t));

    otp = (rand() % 8);
    printf("%s", otp);

    return 0;
}
*/

#include <stdio.h>

main()
{
    int i, y = 0;

    printf("투자금을 입력하시오(만원 단위): ");
    scanf(" %d", &i);

    printf("%d년 뒤의 투자금은 %d만원 입니다.\n", ++y, i *= 1.12);
    printf("%d년 뒤의 투자금은 %d만원 입니다.\n", ++y, i *= 1.12);
    printf("%d년 뒤의 투자금은 %d만원 입니다.\n", ++y, i *= 1.12);
    printf("%d년 뒤의 투자금은 %d만원 입니다.\n", ++y, i *= 1.12);
    printf("%d년 뒤의 투자금은 %d만원 입니다.\n", ++y, i *= 1.12);

    return 0;
}

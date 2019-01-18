#include <stdio.h>

main()
{
    int month = 2;
    int year = 2019;
    int numDays = 0;

    printf("월을 입력하시오: ");
    scanf(" %d", &month);

    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        numDays = 31;
        break;
    case 4: case 6: case 9: case 11:
        numDays = 30;
        break;
    case 2:
        if (((year % 4 == 0) && !(year % 100 == 0)) || (year % 400 == 0))
        {
            numDays = 29;
        }
        else
        {
            numDays = 28;
        }
        break;
    default:
        printf("잘못된 월입니다. \n");
        break;
    }
    printf("%d월은 %d까지 있습니다.\n", month, numDays);

    return 0;
}

/*#include <stdio.h>

main()
{
    int month;

    printf("월을 입력하시오: ");
    scanf(" %d", &month);

    do
    {
        switch (month)
        {
            case (1) : printf("%d월은 31일까지 있습니다.",month);
            break;
            case (2) : printf("%d월은 28일까지 있습니다.",month);
            break;
            case (3) : printf("%d월은 31일까지 있습니다.",month);
            break;
            case (4) : printf("%d월은 30일까지 있습니다.",month);
            break;
            case (5) : printf("%d월은 31일까지 있습니다.",month);
            break;
            case (6) : printf("%d월은 30일까지 있습니다.",month);
            break;
            case (7) : printf("%d월은 31일까지 있습니다.",month);
            break;
            case (8) : printf("%d월은 31일까지 있습니다.",month);
            break;
            case (9) : printf("%d월은 30일까지 있습니다.",month);
            break;
            case (10) : printf("%d월은 31일까지 있습니다.",month);
            break;
            case (11) : printf("%d월은 30일까지 있습니다.",month);
            break;
            case (12) : printf("%d월은 31일까지 있습니다.",month);
            break;

            default: printf("정확하지 않습니다.\n다시 입력해 주세요");
            break;
        }

    }while ((month > 0) || (month < 13));

    return 0;
}
*/

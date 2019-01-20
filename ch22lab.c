#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

main()
{
    int values[SIZE];
    int i, max, min;

    srand((unsigned int)time(NULL));

    
    for (i = 0; i < SIZE; i++)
    {
        values[i] = rand() % 100;
        printf(" %d", values[i]);
    }
    printf("\n");

    max = values[0];
    min = values[0];

    
    for(i = 0; i < SIZE; i++)
    {
        if (values[i] > max)
        {
            max = values[i];
        }
        if (values[i] < min)
        {
            min = values[i];
        }
    }

    printf("최대값은 %d, 최소값은 %d입니다. \n", max, min);

    return 0;
}

/*
#include <stdio.h>

main()
{
    int ran[10];
    int i, max, min = 0;

    ran[i] = rand() % 100;

    for (i = 0; i < 10; i++)
    {
        if (ran[i] > max)
        {
            max = ran[i];
        }
        else (ran[i] < min);
        {
            min = ran[i];
        }
    }

    printf("최대값은 %d, 최소값은 %d입니다.", max, min);

    return 0;
}
*/

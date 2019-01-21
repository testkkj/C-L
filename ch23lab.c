#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int distances[10];
    int temp, inner, outer, didSwap, i; // 정렬을 위하여 필요하다.
    time_t t;

    // 실행할 때마다 달라지는 나수값을 만들기 위하여 필요하다.
    srand(time(&t));

    printf("distances[] = [");
    
    for(i = 0; i < 10; i++)
    {
        distances[i] = rand() % 100;
        printf(" %d", distances[i]);
    }
    printf(" ] ");

    
    for(outer = 0; outer < 9; outer++)
    {
        didSwap = 0; // 리스트가 아직 정렬되지 않았으면 1(true)
        
        for(inner = outer; inner < 10; inner++)
        {
            
            if (distances [inner] < distances[outer])
            {
                temp = distances[inner]; // 배열 요소 교환
                distances[inner] = distances[outer];
                distances[outer] = temp;
                didSwap = 1; // 교환이 발생하였음(true)
            }
            
        }
        
        if (didSwap == 0)
        {
            break;
        }
        
    }
    
    printf("shortest path=%d \n", distances[0]);
    return (0);
    
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int ctr, inner, outer, didSwap, temp;
    int nums[10];
    time_t t;

    srand(time(&t));


    for(ctr = 0; ctr < 10; ctr++)
    {
        nums[ctr] = (rand() % 100);
    }

    puts("거리:");


    for(ctr = 0; ctr < 10; ctr++)
    {
        printf(" %d ", nums[10]);
    }


    for(outer = 0; outer < 9; outer++)
    {
        didSwap = 0;

        for(inner = outer; inner < 10; inner++)
        {
            if (nums[inner] < nums[outer])
            {
                temp = nums[inner];
                nums[inner] = nums[outer];
                nums[outer] = temp;
                didSwap = 1;
            }
        }

        if (didSwap == 0)
        {
            break;
        }
    }

    puts("최단거리");


    for(ctr = 0; ctr < 1; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }

    return (0);
}
*/
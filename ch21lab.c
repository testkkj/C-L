#include <stdio.h>
#define SIZE 10

main()
{
  int values[SIZE];
  int i, sum;

  for (i = 0; i < SIZE; i++)
  {
    printf("정수값을 입력하시오:");
    scanf(" %d", &values[i]);
  }

  sum = 0;
  for (i = 0; i < SIZE; i++)
  {
    sum += values[i];
  }

  printf("합계는 %d입니다. \n", sum);
  printf("평균은 %d입니다. \n", sum / SIZE);

  return 0;
}

/*
#include <stdio.h>

main()
{
  int num[10];
  int sumnum = 0;
  int avenum = 0;
  int i;

  for (i = 0; i < 10; i++)
  {
    printf("정수값을 입력하시오.");
    scanf(" %d", &num);
  }

  for (i = 0; i < 10; i++)
  {
    sumnum += num[i];
  }

  avenum = ((int)sumnum / 10);

  printf("합계는 %d입니다.\n", sumnum);
  printf("평균은 %d입니다.\n", avenum);
}
*/

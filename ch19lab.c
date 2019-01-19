#include <stdio.h>
#include <string.h>

main()
{
  char name[100];
  char input[100];
  char output[100];

  printf("이름은 무엇인가요? ");
  scanf("%s\n", name);
  fflush(stdin);

  while (1)
  {
    printf(">");
    gets(input);
    if (strcmp(input, "quit") == 0)
    {
      break;
    }
    strcpy(output, "");
    strcat(output, name);
    strcat(output, "씨, ");
    strcat(output, input);

    printf("%s라구요. \n", output);
    printf("재미있네요! 더 이야기 해 보세요\n");
  }

  return 0;
}

/*
#include <stdio.h>
#include <string.h>

main()
{
    char name[20];
    char word[50];
    char fin[100];

    puts("이름은 무엇인가요?");
    gets(name);
    for (;;)
    {
        puts(">");
        gets(word);

        strcat(fin, name);
        strcat(fin, ", ");
        strcat(fin, word);
        strcat(fin, "라구요.");

        puts(fin);

        if (word == "quit")
        {
            break;
        }
    }

    return 0;
}
*/

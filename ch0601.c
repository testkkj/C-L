// 6�� ���� #1
// ���� Chapter6ex1.c

// �� ���α׷��� 3���� ���̵��� ���� �����ϴ� ���� ����θ� ����Ѵ�.

#include <stdio.h>
#include <string.h>

main()
{
    // Kid1�� 11���ڱ��� ������ �� �ִ�.
    char Kid1[12];

    // Kid2�� 7 ���ڰ� �ȴ�. (Maddie�� NULL ����)
    char Kid2[] = "Maddie";

    // Kid3�� 7 ���ڰ� �ȴ�.
    char Kid3[7] = "Andrew";

    // Hero1�� 7 ���ڰ� �ȴ�.
    char Hero1[] = "Batman";

    // Hero2�� ������ ������ ������.
    char Hero2[34] = "Spiderman";
    char Hero3[25];

    Kid1[0] = 'K'; //Kid1�� �� ���ھ� ���ǵȴ�.
    Kid1[1] = 'a'; //ȿ�������� ������ �۵��Ѵ�.
    Kid1[2] = 't';
    Kid1[3] = 'i';
    Kid1[4] = 'e';
    Kid1[5] = '\0'; // NULL ���ڸ� �ݵ�� �߰��Ͽ��� �Ѵ�.
    // �׷��� C�� ���ڿ��� ���� �� �� �ִ�.

    strcpy(Hero3, "The Incredible Hulk");

    printf("%s�� �����ϴ� ��������δ� %s.\n", Kid1, Hero1);
    printf("%s�� �����ϴ� ��������δ� %s.\n", Kid2, Hero2);
    printf("%s�� �����ϴ� ��������δ� %s.\n", Kid3, Hero3);

    return 0;

}

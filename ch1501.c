// 15�� ���� #1
// ���� Chapter15ex1.c

/* �� ���α׷��� �ݳ⿡ ���Ҵ� ��ȭ�� ������ �����Ѵ�. �׸��� �� ��ȭ�� �̸�, 1���� 10������ ������ ����
�ݺ����� �����Ѵ�. ���� ��ȣ ��ȭ�� ���� ��ȣ���� �ʴ� ��ȭ�� ����Ѵ�. */

#include <stdio.h>
#include <string.h>

main()
{
    int ctr, numMovies, rating, favRating, leastRating;
    char movieName[40], favorite[40], least[40];

    // favRating�� 0���� �����Ѵ�.
    // ���� � ��ȭ�̵��� 1�̻��� �����̸� �̰��� ��ü�� ���̴�.
    // leastRating�� 10���� �ʱ�ȭ�ȴ�. ���� 9������ ������ ���� ��ȭ��
    // �̰��� ��ü�� ���̴�.
    favRating = 0;
    leastRating = 10;

    // ����ڰ� ��ȭ�� �󸶳� ���Ҵ����� �˾Ƴ���.
    // �ݺ� �ݺ����� 0�̻��� ���� �Է��ϸ� ��ӵȴ�.
    do
    {
        printf("�ݳ⿡ ��ȭ�� �� ���̳� ���ҽ��ϱ�? ");
        scanf(" %d", &numMovies);

        // ���� ����ڰ� 0�̳� ������ �Է��ϸ�
        // ���α׷��� ����� �Է��϶�� ����ϰ� �ٽ� �����Ѵ�.
        if (numMovies < 1)
        {
            printf("��ȭ���� 0�Դϴ�. \n�ٽ� �Է��Ͻÿ�!\n\n");
        }
    }
    while (numMovies < 1);

    for (ctr =1; ctr <= numMovies; ctr++)
    {
        // ��ȭ �̸��� ������ ��´�.
        printf("\n��ȭ�� �̸���? ");
        printf("(�Ѵܾ� ����!)");
        scanf(" %s", movieName);

        printf("1���� 10���� ������ �شٸ�? ");
        scanf(" %d", &rating);

        // �ְ� ��ȭ������ �˻��Ѵ�.
        if (rating > favRating)
        {
            strcpy(favorite, movieName);
            favRating = rating;
        }
        // �־��� ��ȭ������ �˻��Ѵ�.
        if (rating < leastRating)
        {
            strcpy(least, movieName);
            leastRating = rating;
        }
    }

    printf("\n����� �ְ��� ��ȭ�� %s.\n", favorite);
    printf("\n����� �־��� ��ȭ�� %s.\n", least);

    return 0;
}

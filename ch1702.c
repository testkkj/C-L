// 17�� ���� #2
// ���� Chapter17ex2.c

/* �� ���α׷��� ���� �޴��� ǥ���ϰ�(3���� �ô� ���� �ϳ�) ������� �Է��� �޴´�.
�ι�° �޴��� ǥ���Ѵ�. (������, �������θ�Ʈ, ��ġ)
����ڰ� �� ��° ������ �ϸ� ������ �ô��� ������ �о��� �ٽ����� �������� ����Ѵ�. */

#include <stdio.h>
#include <stdlib.h> // exit()�� ����Ҹ� �� ��� ������ �ʿ��ϴ�.

main()
{
    // ���α׷��� ������ ������ 2������ �ʿ��ϴ�.
    // �ϳ��� ù ��° �޴� ���ÿ� ���ǰ� �� �ϳ��� �� ��° �޴� ���ÿ� ���ȴ�.
    int choice1;
    int choice2;

    // �ô븦 �����Ѵ�.
    printf("� �ô븦 ���� �ͳ���? \n");
    printf("1. 1980��� \n");
    printf("2. 1990��� \n");
    printf("3. 2000��� \n");
    printf("4. ����\n");

    // ž �޴� ���ð� �ش�Ǵ� switch �����̴�.
    // do-while ������ ����Ͽ��� 4�� ���� �ϳ��� ���õǵ��� �Ѵ�.
    do
    {
        printf("�ϳ��� �����Ͻÿ�: ");
        scanf(" %d", &choice1);
        switch (choice1)
        {
            // ù ��° ��쿡�� ����ڰ� 1980��븦 �����Ͽ���.
            // �̹����� ������ �����Ѵ�.
        case (1) :
            {
                printf("\n\n� �о߸� ���� �����Ű���?\n");
                printf("1. �߱�\n");
                printf("2. ��ȭ\n");
                printf("3. �̱� �����\n");
                printf("4. ����\n");
                printf("�ϳ��� �����Ͻÿ�: ");
                scanf(" %d", &choice2);
                if (choice2 == 1)
                {
                    printf("\n\n���� �ø��� è�ǿ� ");
                    printf("1980���:\n");
                    printf("1980: Philadelphia Phillies\n");
                    printf("1981: Los Angeles Dodgers\n");
                    printf("1982: St. Louis Cardinals\n");
                    printf("1983: Baltimore Orioles\n");
                    printf("1984: Detroit Tigers\n");
                    printf("1985: Kansas City Royals\n");
                    printf("1986: New York Mets\n");
                    printf("1987: Minnesota Twins\n");
                    printf("1988: Los Angeles Dodger\n");
                    printf("1989: Oakland A's\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 2)
                {
                    printf("\n\n1980����� ��ī���� ������:\n");
                    printf("1980: Ordinary People\n");
                    printf("1981: Chariots of Fire\n");
                    printf("1982: Gandhi\n");
                    printf("1983: Terms of Endearment\n");
                    printf("1984: Amadeus\n1985: Out of Africa\n");
                    printf("1986: Platoon\n");
                    printf("1987: The Last Emperor\n");
                    printf("1988: Rain Man\n");
                    printf("1989: Driving Miss Daisy\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 3)
                {
                    printf("\n\nUS 1980����� �̱� �����:\n");
                    printf("1980: Jimmy Carter\n");
                    printf("1981-1988: Ronald Reagan\n");
                    printf("1989: George Bush\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 4)
                {
                    exit(1);
                }
                else
                {
                    printf("�̾������� �ùٸ� ������ �ƴϱ���!\n");
                    break;
                }
            }

            // 1990��븦 ���� �ڵ�
            // ��� �޴��ʹ� �ٸ��� �����͸� �������� �ʴ´�.
        case (2) :
            {
                printf("\n\n� �о߸� ���� �����Ű���?\n");
                printf("1. �߱�\n");
                printf("2. ��ȭ\n");
                printf("3. �̱� �����\n");
                printf("4. ����\n");
                printf("�ϳ��� �����Ͻÿ�: ");
                scanf(" %d", &choice2);
                if (choice2 == 1)
                {
                    printf("\n\n���� �ø��� è�ǿ� ");
                    printf("1990���:\n");
                    printf("1990: Cincinnati Reds\n");
                    printf("1991: Minnesota Twins\n");
                    printf("1992: Toronto Blue Jays\n");
                    printf("1993: Toronto Blue Jays\n");
                    printf("1994: No World Series\n");
                    printf("1995: Atlanta Braves\n");
                    printf("1996: New York Yankees\n");
                    printf("1997: Florida Marlins\n");
                    printf("1998: New York Yankees\n");
                    printf("1999: New York Yankees\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 2)
                {
                    printf("\n\n��ī���� ������ ");
                    printf("1990���:\n");
                    printf("1990: Dances with Wolves\n");
                    printf("1991: The Silence of the Lambs\n");
                    printf("1992: Unforgiven\n");
                    printf("1993: Schindler's List\n");
                    printf("1996: The English Patient\n");
                    printf("1997: Titanic\n");
                    printf("1998: Shakespear in Love\n");
                    printf("1999: Amerian Beauty\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 3)
                {
                    printf("\n\n1990����� �̱� �����:\n");
                    printf("1990-1992: George Bush\n");
                    printf("1993-1999: Bill Clinton\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 4)
                {
                    exit(1);
                }
                else
                {
                    printf("�̾�������, �ùٸ� ������ �ƴϱ���!\n");
                    break;
                }
            }
            // 2000��븦 ���� �ڵ�
        case (3) :
            {
                printf("\n\n� �о߸� ���� �����Ű���?\n");
                printf("1. �߱�\n");
                printf("2. ��ȭ\n");
                printf("3. �̱� �����\n");
                printf("4. ����\n");
                printf("�ϳ��� �����Ͻÿ�: ");
                scanf(" %d", &choice2);
                if (choice2 == 1)
                {
                    printf("\n\n���� �ø��� è�ǿ� ");
                    printf("2000���: \n");
                    printf("2000: New York Yankees\n");
                    printf("2001: Arizona Diamondbacks\n");
                    printf("2002: Anaheim Angels\n");
                    printf("2003: Florida Marlins\n");
                    printf("2004: Boston Red Sox\n");
                    printf("2005: Chicago White Sox\n");
                    printf("2006: St. Louis Cardinals\n");
                    printf("2007: Boston Red Sox\n");
                    printf("2008: Philadelphia Phillies\n");
                    printf("2009: New York Yankees\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 2)
                {
                    printf("\n\n��ī���� ������");
                    printf("2000���:\n");
                    printf("2000: Gladiator\n");
                    printf("2001: A Beautiful Mind\n");
                    printf("2002: Chicago\n2003: The");
                    printf("Lord of the Rings: The");
                    printf("Return of the King\n");
                    printf("2004: million Dollar Baby\n");
                    printf("2005: Crash\n");
                    printf("2006: The Departed\n");
                    printf("2007: No Country for Old Men\n");
                    printf("2008: Slumdog Millionaire\n");
                    printf("2009: The Hurt Locker\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 3)
                {
                    printf("\n\n2000����� �̱� �����:\n");
                    printf("2000: Bill Clinton\n");
                    printf("2001-2008: George Bush\n");
                    printf("2009: Barrack Obama\n");
                    printf("\n\n\n");
                    break;
                }
                else if (choice2 == 4)
                {
                    exit(1);
                }
                else
                {
                    printf("�̾�������, �ùٸ� ������ �ƴϱ���!\n");
                    break;
                }
            }
        case (4) :
            exit(1);
        default:
            printf("\n%d�� �ùٸ� ������ �ƴմϴ�. \n", choice1);
            printf("�ٽ� �Է��Ͻÿ�.\n");
            break;
        }
    }while ((choice1 < 1) || (choice1 > 4));

    return 0;
}

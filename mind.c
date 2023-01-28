#include <stdio.h>
#include <time.h>
#include <windows.h>

int main()
{

    int randNum1, randNum2, randNum3, randNum4, randNum5;
    int resp1, resp2, resp3, resp4, resp5;
    int currentTime, elaspedTime;
    int level = 0;

    srand(time(NULL));

    while (level != 4)
    {
        printf("\nMind Game\n");
        printf("\n1\tEasy\n");
        printf("\n2\tIntermidiate\n");
        printf("\n3\tDifficult\n");
        printf("\n4\tQuit\n");
        printf("\nEnter level: ");
        scanf("%d", &level);

        currentTime = time(NULL);

        if (level == 1)
        {

            randNum1 = rand() % 20 + 1;
            randNum2 = rand() % 10 + 1;
            randNum3 = rand() % 100 + 1;

            printf("\nConcentrate on the following number: ");
            printf("%d\t%d\t%d\n", randNum1, randNum2, randNum3);

            do
            {

                elaspedTime = time(NULL);
            } while (elaspedTime - currentTime < 3); // end do while loop

            system("clear");

            printf("Enter each figure seperated by one space: ");
            scanf("%d%d%d\n", resp1, resp2, resp3);

            if (resp1 == randNum1 && resp2 == randNum2 && resp3 == randNum3)
            {

                printf("\nCongratulations, you got them right\n");
            }
            else
            {

                printf("\nSorry, correct figures are %d %d %d\n", randNum1, randNum2, randNum3);
            }
        } // end easy if

        else if (level == 2)
        {

            randNum1 = rand() % 20 + 1;
            randNum2 = rand() % 10 + 1;
            randNum3 = rand() % 100 + 1;
            randNum4 = rand() % 50 + 1;
            randNum5 = rand() % 500 + 1;

            printf("\nConcentrate on the following number: ");
            printf("%d\t%d\t%d\t%d\t%d\n", randNum1, randNum2, randNum3, randNum4, randNum5);

            do
            {

                elaspedTime = time(NULL);
            } while (elaspedTime - currentTime < 5); // end do while loop

            system("clear");

            printf("Enter each figure seperated by one space: ");
            scanf("%d%d%d%d%d\n", resp1, resp2, resp3, resp4, resp5);

            if (resp1 == randNum1 && resp2 == randNum2 && resp3 == randNum3 && resp4 == randNum4 && resp5 == randNum5)
            {

                printf("\nCongratulations, you got them right\n");
            }
            else
            {

                printf("\nSorry, correct figures are %d %d %d %d %d\n", randNum1, randNum2, randNum3, randNum4, randNum5);
            }
        } // end intermidiate if

        else if (level == 3)
        {

            randNum1 = rand() % 20 + 1;
            randNum2 = rand() % 10 + 1;
            randNum3 = rand() % 100 + 1;
            randNum4 = rand() % 50 + 1;
            randNum5 = rand() % 500 + 1;

            printf("\nConcentrate on the following number: ");
            printf("%d\t%d\t%d\t%d\t%d\n", randNum1, randNum2, randNum3, randNum4, randNum5);

            do
            {

                elaspedTime = time(NULL);
            } while (elaspedTime - currentTime < 3); // end do while loop

            system("clear");

            printf("Enter each figure seperated by one space: ");
            scanf("%d%d%d%d%d\n", resp1, resp2, resp3, resp4, resp5);

            if (resp1 == randNum1 && resp2 == randNum2 && resp3 == randNum3 && resp4 == randNum4 && resp5 == randNum5)
            {

                printf("\nCongratulations, you got them right\n");
            }
            else
            {

                printf("\nSorry, correct figures are %d %d %d %d %d\n", randNum1, randNum2, randNum3, randNum4, randNum5);
            }
        } // end Difficulte if
        else
        {

            printf("\nEnter a valid level\n");
        }
    } // end loop
    printf("\nThank You!\n");
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess;
    char input[10]; // Մուտքագրված տողի համար
    int isRunning = 1; // Խաղի վիճակը

    // Պատահական թվի գեներացում
    srand(time(0)); // Պատահական սերմը
    secretNumber = rand() % 101; // 0-100 միջակայքում պատահական թիվ

    printf("Բարի գալուստ «Գուշակիր թիվը» խաղին!\n");
    printf("Ծրագիրը 0-100 միջակայքի մի թիվ է մտապահել: Փորձեք գուշակել այն:\n");
    printf("Եթե ցանկանում եք դուրս գալ, մուտքագրեք 'q'.\n");

    // Խաղի ցիկլ
    while (isRunning) {
        printf("Մուտքագրեք ձեր գուշակը (կամ 'q'՝ դուրս գալու համար): ");
        scanf("%s", input);

        // Ստուգում ենք, արդյոք օգտագործողը ցանկանում է դուրս գալ
        if (input[0] == 'q' || input[0] == 'Q') {
            printf("Խաղից դուրս եկաք: Մտապահված թիվը %d էր։\n", secretNumber);
            break;
        }

        // Թվային մուտքագրումը ստուգում և վերածում ենք ամբողջ թվի
        if (sscanf(input, "%d", &guess) != 1) {
            printf("Խնդրում ենք մուտքագրել ամբողջ թիվ կամ 'q'.\n");
            continue;
        }

        // Համեմատում ենք գուշակված թիվը և մտապահված թիվը
        if (guess < secretNumber) {
            printf("Փոքր է։ Փորձեք նորից։\n");
        } else if (guess > secretNumber) {
            printf("Մեծ է։ Փորձեք նորից։\n");
        } else {
            printf("Շնորհավորում ենք! Դուք գուշակեցիք թիվը: Դա %d էր։\n", secretNumber);
            isRunning = 0; // Խաղն ավարտված է
        }
    }

    printf("Շնորհակալություն խաղալու համար։\n");
    return 0;
}


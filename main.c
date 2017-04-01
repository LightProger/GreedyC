#include <stdio.h>
#include <math.h>


int main(void) {

    //Константы
    #define QUARTER 25
    #define DIME 10
    #define NICKEL 5
    #define PENNY 1

    // Переменные
    float owed = 0;
    int centCount = 0;
    int quarterCount = 0;
    int dimeCount = 0;
    int nickelCount = 0;
    int pennyCount = 0;
    int rest = 0;
    int sum = 0;

    printf("Привет! Сколько я должен Вам сдачи?");
    printf("\n");

    // ???? ??????
    scanf("%f", &owed);

    if (owed <= 0) {
        printf("Я ничего вам не должен!\n");
    } else {
        // Переводим доллары в центы
        centCount = (int) round (owed * 100);

        // Считаем сколько нужно монеток номиналом 25 центов
        quarterCount = centCount / QUARTER;
        rest = centCount % QUARTER;

        // Считаем сколько нужно монеток номиналом 10 центов
        dimeCount = rest / DIME;
        rest = rest % DIME;

        // Считаем сколько нужно монеток номиналом 5 центов
        nickelCount = rest / NICKEL;
        rest = rest % NICKEL;

        //  Считаем сколько нужно монеток номиналом 1 цент
        pennyCount = rest / PENNY;
        rest = rest % PENNY;

        // Складываем и выводим в консоль
        sum = quarterCount + dimeCount + nickelCount + pennyCount + rest;
        printf("%i", sum);
        printf("\n");
    }
    return 0;
}





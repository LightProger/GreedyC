#include <stdio.h>
#include <math.h>

/*
 *  Дано: монетки номиналом 25, 10, 5, 1 цент
 *  Программа должна:
 *  Спросить пользователя, сколько сдачи нужно выдать
 *  Посчитать минимальное количество монет, с помощью которых можно это сделать
 */


int main(void) {

    //Константы
    #define QUARTER 25
    #define DIME 10
    #define NICKEL 5
    #define PENNY 1

    // Переменные
    float owed;
    int centCount;
    int quarterCount;
    int dimeCount;
    int nickelCount;
    int pennyCount;
    int rest;

    printf("Привет! Сколько я должен Вам сдачи?");
    printf("\n");

    // Ввод данных
    scanf("%f", &owed);

    if (owed <= 0) {
        printf("Я Вам ничего не должен!\n");
    }
    else if(owed > 0){
        // Переводим доллары в центы
        centCount = (int) round (owed * 100);

        // Считаем сколько нужно монеток номиналом 25 центов
        quarterCount = centCount / QUARTER;

        // Считаем сколько нужно монеток номиналом 10 центов
        dimeCount = quarterCount / DIME;

        // Считаем сколько нужно монеток номиналом 5 центов
        nickelCount = dimeCount / NICKEL;

        // Считаем сколько нужно монеток номиналом 1 цент
        pennyCount = nickelCount / PENNY;

        // Складываем и выводим на печать
        rest = quarterCount + dimeCount + nickelCount + pennyCount;
        printf("%i", rest);
        printf("\n");
    }
    return 0;
}



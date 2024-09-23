#include <stdio.h>
#include <stdlib.h>

//Квартира стоит-13.000.000
//Alice 
//  взнос 1.000.000, 17% годовых, 30 ипотека
//  зарплата 200.000
//  траты в месяц 50.000
//Bob
//  30.000 аренда
//  Траты в месяц -50.000
//  зарплата 200.000
//  откладываение денег в банк под депозит 20%
//inflation- 9%

//Сделать индексацию зарплаты (увелечение)
//Структурировать структурировать


int main() {
//Начало эксперемента:
    int year = 2024;
    int month = 9;
//Общие пременные:
    int years = 30;
    float infl = 0.09;
    int dom = 13e6; //Цена дома
    float years_pr = 17; //Годовой процент
    float deposit = 20; //процент депозита
//Alice
    int Alice_capital= 0; 
    int Alice_zp = 2e5; //Зарплата
    int Alice_r = 50000;//Расходы
    int Alice_pay = 15e4;//Ежемесячные платежи
    long long int Alice_status = 0;//Денежное состояние
    float Alice_money = 0;//Оставшиеся деньги
//Bob
    int Bob_capital = 0; 
    int Bob_r = 80000; //Расходы
    int Bob_zp = 2e5; //Зарплата
    int Bob_pay = 15e4; //Ежемесячные платежи
    long long int Bob_status = 0; //Денежное состояние
    float Bob_money = 0; //Оставшиеся деньги
    float Bob_vklad = 0; //Вклад в банк

    while (!(year == 2054 && month == 9)){
        //Money status
        //Alice
        Alice_money += (Alice_zp - Alice_pay - Alice_r);
        Alice_status += (Alice_money + dom);
        //Bob
        Bob_vklad *= ((deposit/12)*0.01+1);
        Bob_money += (Bob_zp - Bob_pay - Bob_r);
        Bob_status += (Bob_vklad + Bob_money);
        
        //Inflation
        month++;
        if (month == 13){
            month = 1;
            year ++;
            //General
            dom *= 1.09;
            //ALICE
            Alice_zp *= 1.09;
            Alice_r *= 1.09;
            //Bob
            Bob_zp *= 1.09;
            Bob_r *= 1.09;
        }
    }

    if (Bob_status==Alice_status){
        printf ("Alice and Bob have the same money status\n");
    }

    if (Alice_status > Bob_status){
        printf ("Alice has more money than Bob on %lld\n",Alice_status - Bob_status);
    }
    if (Alice_status < Bob_status){
        printf ("Bob has more money than Alice on %lld\n", Bob_status - Alice_status);
    }
    printf ("Money status Alice: %lld\n", Alice_status);
    printf ("Money status Bob: %lld\n", Bob_status);
return 0;
}

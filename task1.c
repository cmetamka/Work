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


int main() {
//Начало эксперемента:
    int year = 2024;
    int month = 9;
//Общие пременные:
    int years = 30;
    float infl = 9;
    int dom = 13e6;
    float years_pr = 17; 
    float deposit = 20;
//Alice
    int Alice_capital= 1e6;
    int Alice_zp = 2e5;
    int Alice_r = 50000;
    int Alice_pay = 15e4;
    int Alice_status = 0;
    float Alice_money = 0;
//Bob
    int Bob_capital = 1e6;
    int Bob_r = 80000;
    int Bob_zp = 2e5;
    int Bob_pay = 15e4;
    int Bob_status = 0;
    float Bob_money = 0;

    while (year != 2054){
        month ++;
        if (year == 2054 && month == 9) {
            break;
        {
            //Money status
            //Alice
            
        }
        
        }
        //Inflation
        if (month == 13){
            month = 1;
            year ++;
            //ALICE
            
        }
    }

    
    
}
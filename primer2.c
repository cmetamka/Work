#include <stdio.h>

int main() {
    float Alice_capital, Bob_capital, Alice_deposit, Bob_deposit, Alice_mortgage,pay, years, profit, Bob_rent, inflation,
    deposit_month, deposit, apartment, mortgage;
    mortgage = 17;
    apartment = 13e6;
    Alice_deposit = 0;
    Bob_deposit = 0;
    deposit = 20;
    deposit_month = deposit/100/12;
    Alice_capital = 1e6;
    Bob_capital = 1e6;
    Bob_rent = 3e4;
    inflation = 1;
    Alice_mortgage = apartment * (1 + mortgage/100);
    profit  = 2e5;
    years = 30;
    Bob_deposit = Bob_capital;
    Bob_capital = 0;
    Alice_mortgage-= Alice_capital;
    Alice_capital = 0;
    pay = Alice_mortgage/(years* 12);
    for( int i = 1; i <= years*12; ++i) {
        if( i % 12 == 0) {
            inflation += 0.08;
            profit = profit/(inflation-0.08) * inflation;
            Bob_rent = Bob_rent/(inflation-0.08) * inflation;
            apartment = apartment/(inflation- 0.08) * inflation;
        }

        Bob_deposit*= 1 + deposit_month;
        Alice_deposit*= 1+ deposit_month;
        Bob_deposit+= profit - Bob_rent;
        Alice_deposit+= profit - pay;


    }
    if ( apartment + Alice_deposit >Bob_deposit) printf("Alice");
    else printf("Bob");
}
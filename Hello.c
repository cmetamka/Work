#include <stdio.h>
#include <stdlib.h>
int main(void) {
      
      short x = 2, y = 3, res;
      x *=5;
      res = x + y;

    printf(" %d + %d = %d\n", x, y, res);
    system("pause");

    return 0;
}

// d - если цифры
// short - как int(В int -2млн - 2млн), но можно использовать числа в деапозоне -32 768 - 32 768. Использовать что бы меньше занимать места
// unsignet short - как short, только без отрицательных чисел 64 000
// unsignet int - 4 млн без отр.
// long - в 2 раза больше чем int
// float - переменные с точкой
// double

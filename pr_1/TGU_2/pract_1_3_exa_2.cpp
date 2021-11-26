/*
Найти среднее арифметическое таких значений функции, которые имеют дробную часть, меньшую 0.5.
Написал программу построения таблицы значений функции. Нужно дописать: Среднее арифметическое 
таких значений функции, которые имеют дробную часть, меньшую 0.5.

как-то так (если дробную часть считаем всегда положительной)
*/

#include <stdio.h>
#include <math.h>
#include <conio.h>
 
#define L -5.0
#define R 5.0
#define H 0.1

int main()
{
    double x,y;
    double sum = 0; int k = 0;
    double drob = 0; double temp=0;
    for (x = L; x <= R; x += H)
    {
        y=F(x);
        printf("%10.4f %10.4f\n",x,y);
        drob = abs(modf(y, &temp));
        if (drob<0.5){
            k=k+1;
            sum=sum+y;
        }
    }
 
    printf("Needed average: %10.4f\n", sum/k);
 
    getch();
    return 0;
}
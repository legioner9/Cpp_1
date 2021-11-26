#include <iostream>
using namespace std;

int main()
{
    int n;
    n = 532;
    cout << "int n = " << n << endl;

    short int sh_n;
    sh_n = -4443;
    cout << "short int sh_n = " << sh_n << endl;

    long int ln_n;
    ln_n = 9999;
    cout << "long int ln_n = " << ln_n << endl;

    unsigned long int us_ln_n;
    us_ln_n = 2701131775;
    cout << "us_ln_n = " << us_ln_n << endl;
    // us_ln_n = 999999999999999999999999;
    // "message": "unsigned conversion from 'long long int' to 'long unsigned int' changes value from '2003764205206896639' to '2701131775' [-Woverflow]",

    bool boolean_true = 25; // переменная типа bool с именем boolean_true = true от 1 до 256
    cout << "boolean_true = " << boolean_true << endl;
    bool boolean_false = 0; // переменная типа bool с именем boolean_false = false = 0
    cout << "boolean_false = " << boolean_false << endl;

    char symbol = 'a';                     // объявление переменной типа char и инициализация её символом 'a'
    cout << "symbol = " << symbol << endl; // печать символа, содержащегося в переменной symbol
    char string[] = "cppstudio.com";       // объявление символьного массива (строки)
    cout << "string = " << string << endl; // печать строки
    system("pause");

    
    cout << ""; 
} 
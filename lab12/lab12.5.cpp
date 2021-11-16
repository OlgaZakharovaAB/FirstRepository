#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    string col[5] {"зелен", "красн", "желт", "бел", "черн"};
    string an[12] {"крысы", "коровы", "тигра", "зайца", "дракона", "змеи", "лошади", "овцы", "обезьяны", "курицы", "собаки", "свиньи"};
    int year, k;
    double d;
    cin >> year;
    year=year+56; // это, чтобы вести отсчёт он нуля и иметь возможность посчитать любой год нашей эры
    
    d = year%60%10/2;
    k = floor(d);
    
    if ( (year%12 < 2) or (year%12 > 4) ) {
        cout << "год " << col[k] << "ой " << an[year%12];
    }
    else{
        cout << "год " << col[k] << "ого " << an[year%12];
    }

    return 0;
}

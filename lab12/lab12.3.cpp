#include <iostream>
using namespace std;

int main()
{
    int n, k; string m;
    cin >> n;
    string name[9]{"одно", "два", "три", "четыр", "пят", "шест", "сем", "восем", "девят"};
    
    if (n<20){
        if (n<13){
            if (n==10){
                m="десять";
            }
            else{
                if (n==11){
                    m="одиннадцать";
                }
                else{
                    m="двенадцать";
                }
            }
        }
        else{
            m=name[n%10-1]+"надцать";
        }
    }
    
    else{
        if (n<40){
            m=name[n/10-1]+"дцать";
            if (n%10 < 4){
                m=m+" "+name[n%10-1];
            }
            else{
                if (n%10==4){
                    m=m+" четыре";
                }
                else{
                    m=m+" "+name[n%10-1]+"ь";
                }
            }
        }
        else{
            m="сорок";
        }
    }
    
    cout << m;
    
    if ( (n>9 and n<21) or (n>21 and n<31) or (n>31 and n<41)) {
        cout << " учебных";
        if ( (n>9 and n<21) or (n>24 and n<31) or (n>34 and n<41)){
            cout << " заданий";
        }
        else {
            cout << " задания";
        }
    }
    else{
        cout << " учебное задание";
    }

    return 0;
}

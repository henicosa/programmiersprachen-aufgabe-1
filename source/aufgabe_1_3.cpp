#include <iostream> // Ein - / Ausgabe
// C ++ Programme beginnen mit der Ausfuehrung
// der Funktion main

int ggT(int a,int b){
    if (a%b == 0) {
        return b;
    } else
    {
        return ggT(b, a%b);   
    }
};

int leastCommon(double a) {
    int number = 3;
    for(int i = 2; i < a; ++i)
    {
        number = ((number * i)/ggT(number,i));
    }
    return number;
};


int main () {
std::cout << leastCommon(20) ;
return 0;
}


#include <iostream> // Ein - / Ausgabe
#include <math.h>   //Wurzelfunktion
#include <array>
#include <cmath>
// C ++ Programme beginnen mit der Ausfuehrung
// der Funktion main

double volumeCylinder(double radius, double height) {
    return M_PI*radius*radius*height;
}

double surfaceCylinder(double radius, double height) {
    return 2*M_PI*radius*radius + 2*M_PI*radius*height;
}

//Übung Übungsblatt
int ggT(int a,int b){
    if (a == 0 or b == 0) {
        return 0;
    }
    if (a%b == 0) {
        return b;
    } else
    {
        return ggT(b, a%b);   
    }
};

int checkSum(int number){
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number = number / 10;
    }
    return sum;
};

int sum_multiples(int bound) {
    int sum = 0;
    for(int i = 1; i <= bound; ++i) {
        if(i % 3 == 0 or i % 5 == 0) {
            sum= sum +i;
        }
    }
    return sum;
};

double fract(double number) {

    return number - int(number);

}

int leastCommon(double a) {
    int number = 3;
    for(int i = 2; i < a; ++i)
    {
        number = ((number * i)/ggT(number,i));
    }
    return number;
};

int least(int a) {
    bool notFound = true;
    int number = a;
    while(notFound) {
        notFound = false;
        number++;
        for(int i = 2; i <= a; i++) {
            if (number % i != 0) {
                notFound = true;
            }
        }
    }
    return number;
};
/*
int least2(int a) {
    while(notFound) {
        notFound = false;
        number++;
        for(int i = 2; i <= 20; i++) {
            if (number % i != 0) {
                notFound = true;
            }
        }
    }
    return number;
};
*/


//Übungen Einführungsblatt

int zweizwei() {
    int c = 1;
    for(int i = 2; i <= 50; i++) {
        c+= i;
    }
    return c;
};

int fract(float zahl);
//int floor(float zahl);
bool is_prime(int zahl);
long factorial(int zahl);
int binomial(int a, int ueber_b);
void print_100_primes();

bool is_prime(int zahl) {
    if (zahl <= 1) {
        return false;
    }
    int divisor = 2;
    while(divisor <= sqrt(zahl)) {
        if(zahl % divisor == 0) {
            return false;
        }
        divisor++;
    }
    return true; 
};

long factorial(int zahl) {
    if (zahl <= 0) {
        return 1;
    }
    else
    {
        return zahl * factorial(zahl-1);
    }   
}

std::array<int, 3> tripel() {
    int a = 1;
    int b = 1;
    while(a<1000){
       while(b<1000){
           if(a+b < 1000) {
               int c = 1000-(a+b);
               if(a*a + b*b == c*c) {
                   return {a,b,c};
               }
           }
           b+= 1;
       }
       b = 1;
       a+=1;
    }
    
}


void func_a(int arr);

/*int main () {
std::cout << leastCommon(20) << "\n";
std::cout << zweizwei() << "\n";
std::cout << is_prime(79) << "\n";
std::cout << factorial(10) << "\n";
std::array<int, 3> arr = tripel();
std::cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
return 0;
}*/
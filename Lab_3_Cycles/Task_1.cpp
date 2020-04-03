#include <iostream>
#include <math.h>
#define pi 3.14

using namespace std;

int main()
{
    // task 1

    float a, b, sum = 0;

    for (int i = 1; i <= 30; i ++){

        if (i % 2 == 0){
            a = i /2.0;
            b = pow(i, 3);
        }
        else{
            a = i;
            b = pow(i,2);
        }
        sum += pow(a - b, 2);
    }
    cout << "sum is: " << sum << endl;

/*
    // task 2

    double E = 1e-3, d, sum = 0;
    int n = 1;
    do{

        d = pow(1.0/2, n) + pow(1.0/3, n);
        sum += d;
        n++;
    }
    while(d>E);
    cout << "d: " << d << endl;
    cout << "sum: " << sum << endl;



    //task 3

    float A = 0, B = pi/2, H, y;
    int M = 20;
    H = (float) (B - A) / M;
    float X = A;

    for (int i = 1; X < B; i++){
        X = A + i*H;
        y = sin(X) - cos(X);

        cout << "x" << i << " = "<< X << "\ty(x" << i << ") = "<< y << endl;
    }
*/
    return 0;
}

#include <iostream>
#include <math.h>
#define pi 3.14
using namespace std;

int fact(int n){
    if (n == 1 || n == 0){
        return 1;
    }
    else{
        return n * fact(n-1);
    }

}

int main()
{

    //task 1

    int n, times;
    double x, y, s;

    cout << "Enter n: "; cin >> n;
    cout << "How much times you want to calculate a function: "; cin >> times;

    for(int i = 0; i < times; i ++){
        s = 1;
here:
        cout << "Enter x(from 0.1 to 1) : "; cin >> x;

        if (x > 1 || x < 0){
            goto here;
        }

        for (int count = 1; count <= n; count ++){
            s += ( (cos(count * (pi/4))) / fact(count) ) * pow(x, count);
        }

        y = exp(x * cos(pi/4)) * cos(x*sin(pi/4));

        cout << "x = " << x << endl;
        cout << "S(x) = " << s << "\ty(x) = " << y << endl;

    }


    // task 2
/*
    int part;
    float step, x, min;
    float y = abs( (float) asin(1) - 1 + 1 - 1 ) ;
    cout << "First y(1) is : " << y << endl;
    x = 1;
    min = y;
    cout << "Enter number of parts searching the argument: "; cin >> part;

    step = (float) 1 / part;

    for(float fakex = 0; fakex < 1; fakex += step ){
       y = (float) abs( asin(fakex) - fakex + fakex*fakex - 1 );
       if (min - y > 0){
          min = y;
          x = fakex;
          // cout << "min function now:" << min;
          // cout << "\tx:" << x << endl;
       }

    }

    cout << "Root x: " << x << endl;
/*
    //task 3

    float x, y, h = 0.5;
    for (x = 0; x <= 2; x += h){
        y = exp(x+3) * sin(x);
        cout << "x: " << x << "\ty: " << y << endl;
    }
*/
    return 0;
}

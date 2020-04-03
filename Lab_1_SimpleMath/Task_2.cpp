//
//  main.cpp
//  2
//
//  Created by Vladislav Kremenevskiy on 9/10/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

// #pragma hdrstop как работает?
#include <iostream>
#include <math.h>
// #iclude <conio.h>
using namespace std;


int main(int argc, const char * argv[]) {
    
    /*
    
    int a, b;
    
    // Deviding int
    
    cout << "// int deviding\n";
    
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    
    int y = a/b;
    cout << "y = " << y;
    
    // Float Deviding
    
    cout << "\n// float deviding\n";
    
    float a2,b2;
    
    cout << "a = ";
    cin >> a2;
    cout << "b = ";
    cin >> b2;
    
    float y2 = a2/b2;
    cout << "y = " << y2;
    
    // Задание 4
    cout << "\nTask 4\n";
    
    int x, c;
    
    cout << "x = ";
    cin >> x;
    
    cout << "c = ";
    cin >> c;
    
    x += c;
    cout << "1. x = " << x << " c = " << c << "\n";
    
    c = x - c;
    cout << "2. x = " << x << " c = " << c << "\n";
    
    x -= c;
    cout << "2. x = " << x << " c = " << c << "\n";
    
    
     
    // дополнительное
    float d, r;
    
    d = 0.5;
    r = asin(d) * 180 / 3.14;
    
    cout << "result is " << (int)r << "\n";
    cout << cos(60*3.14/180);
    
     */
    
    // 8 вариант
    
    double x, A, B, C, K, Y;
    
    cout << "x = ";
    cin >> x;
    
    A = log10(x);
    B = x + exp(x);
    
    cout << "A = " << A << " B = " << B << "\n";
    
    cout << "C = ";
    cin >> C;
    
    cout << "K = ";
    cin >> K;
    
    Y = (A + B) - pow(C, 2)/K;
    
    cout << "result Y = " << Y;
    
    cout << "\n";
    return 0;
}

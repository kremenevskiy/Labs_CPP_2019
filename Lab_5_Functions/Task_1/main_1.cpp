//
//  main.cpp
//  LB5
//
//  Created by Vladislav Kremenevskiy on 11/18/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
#include "Header.h"
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {

// First
    cout << "First task\n";
    
    int nn;
    cout << "Enter size of array: ";
    cin >> nn;
    
    int **a = new int *[nn];
    int **b = new int *[nn];
    
    buildMatrix(nn, a, b);
    
    showMartix(nn, a, b);
    
    sumInPerimeter(nn, a, b);
    
    double solveintegral(int a, int b, int n, int (*f)(double x));
    
// Second
    cout << "\nSecond task\n";
    
    const int N = 3;
    int array[N];
    
    srand(time(0));
    
    cout << "Array B: ";
    
    for(int i = 0; i < N; i++){
        array[i] = rand() % 10 + 1;
        cout << array[i] << ' ';
    }
    
    cout << endl;
    
    cout << "result: " <<  multuplication(N, 0, array) << endl;
 
    // task 3
    cout << "\nThird task\n";
    
    
    int n = 50000;
    
    double a1 = 0.8, b1 = 1.8, a2 = 0.4, b2 = 1.0, a3 = 1, b3 = 2, a4 = 0.2, b4 = 1, h1, h2, h3, h4;
    //int i;
    
    h1 = (b1 - a1) / n;
    h2 = (b2 - a2) / n;
    h3 = (b3 - a3) / n;
    h4 = (b4 - a4) / n;
    
    
    
    double f1 = 0;
    for(int i = 0; i < n; i ++){
        double x = a1 + i * h1;
        f1 += (sqrt(0.8 * x * x + 1)) / (x + sqrt(1.5 * x * x + 2));
    }
    
    double integral_1 = h1 * f1;
    
    double f2 = 0;
    for(int i = 0; i < n; i ++){
        double x = a2 + i * h2;
        f2 += sin(x + 1.4) / (0.8 + cos((2 * x * x + 0.5)));
    }
    
    double integral_2 = h2 * f2;
    
    double f3 = 0;
    for(int i = 0; i < n; i ++){
        double x = a3 + i * h3;
        f3 += 1 / sqrt(2 * x * x + 1.3);
    }
    
    double integral_3 = h3 * f3;
    
    double f4 = 0;
    for(int i = 0; i < n; i ++){
        double x = a4 + i * h4;
        f4+= tan(x * x) / (x * x + 1);
    }
    
    double integral_4 = h4 * f4;
    
    
    
    cout << "Value of integrals: " << endl;
    cout << "1: " << integral_1 << endl;
    cout << "2: " << integral_2 << endl;
    cout << "3: " << integral_3 << endl;
    cout << "4: " << integral_4 << endl;

    
  
    return 0;
}

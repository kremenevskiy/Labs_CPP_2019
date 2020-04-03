//
//  main.cpp
//  ште
//
//  Created by Vladislav Kremenevskiy on 11/24/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <cmath>
#include <iostream>
double solveintegral(double a, double b, int n, double (*f)(double x)){
    double h = (b - a) / n;
    double integral = 0;
    for(int i = 0; i < n; i++){
        double x = a + i * h;
        integral += (*f)(x);
    }
    
    
    return integral * h;
}

double f1(double x){
    return (sqrt(0.8 * x * x + 1)) / (x + sqrt(1.5 * x * x + 2));
}


double f2(double x){
    return tan(x * x) / (x * x + 1);
}

double f3(double x){
    return 1 / sqrt(2 * x * x + 1.3);
}

double f4(double x){
    return tan(x * x) / (x * x + 1);
}

int main(int argc, const char * argv[]) {
    int n = 5000;
    std :: cout << solveintegral(0.8, 1.8, n, f1) << '\n';
    std :: cout << solveintegral(0.4, 1, n, f2) << '\n';
    std :: cout << solveintegral(0.2, 1, n, f3) << '\n';
    std :: cout << solveintegral(0.2, 1, n, f4) << '\n';
}

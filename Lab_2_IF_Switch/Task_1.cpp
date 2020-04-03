//
//  main.cpp
//  LB2
//
//  Created by Vladislav Kremenevskiy on 9/26/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {

    // task 1
    
/*
    int x,y;
    cout << "Enter Y and X: ";
    cin >> y >> x;
    
    if (x - y > 0){
        y = 0;
    }
    else if (x == y){
        y = 0;
        x = 0;
    }
    else {
        x = 0;
    }
    
    cout << "y = " << y << " x = " << x << endl;
    
    
    double a, b , c;
    
here:
    cout <<"Enter A, B, C: ";
    cin >> a >> b >> c;

    if (a>b && a>c){
        a -= 0.3;
    }
    else if (b>a && b>c){
        b -= 0.3;
    }
    else  if (c>a && c>b){
        c -= 0.3;
    }
    else {
        cout << "There isn't biggest number. Try again";
        goto here;
    }

    cout << "A = " << a << " B = " << b << " C = " << c << endl;
    

    // task 2
 */
/*
    char zn;
    int x2, y2, d = 0;
    
    cout << "Enter x and y: ";
    cin >> x2 >> y2;
    
here2:
    cout << "Enter sign: ";
    cin >> zn;

    switch(zn){
        case '*': d = x2 * y2; break;
        case '/': d = (float) x2 / y2; break;
        case '-': d = x2 - y2; break;
        case '+': d = x2 + y2; break;
        case '%': d = x2 % y2; break;
        default: cout << "Wrong input. Enter Y to repeat." << endl;
            cin >> zn;
            if (zn == 'y'){
                goto here2;
            }
            else break;
            
    }
    cout << "d = " << d << endl;
    
*/
/*
    // task 3
    
    double a3, b3, max;
    cout << "Enter a and b: ";
    cin >> a3 >> b3;
    
    bool Comparison = a3 > b3;
    
    max = Comparison? a3 : b3;
    
    cout << "max: " << max << endl;
    

    // task 4
    
    float x1, x2, k, L;
    
    
    cout << "Enter x1, x2: ";
    cin >> x1 >> x2;
    
    int m;
    cout << "Enter m: ";
    cin >> m;
    
    k = pow(cos(x1*x1),3) + pow(sin(x2*x2*x2), 3);
    
    if (k<1){
        L = pow(k,3) + pow(m, 0.2);
    }
    else {
        L = pow(k, 2) - exp(m);
    }
    
    cout << "L = " << L << endl;

    // task 5
    
    float  a, b, c, d, Z;
    
    cout << "Enter a, b, c, d: ";
    cin >> a >> b >> c >> d;
    
    if  (c >= d  && a < d){
        Z = a + b/c;
    }
    else if(c < d && a >= d){
        Z = a - b/c;
    }
    else {
        Z = 0;
    }
    cout << "Z = " << Z << endl;

 */
    
/*
    // task 6
    
    float a, b, c, Y;
    int N;
    
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    
    cout << "Enter N: ";
    cin >> N;
    
    switch (N) {
        case 2:
            Y = b*c - a*a;
            break;
        case 56:
            Y = b*c;
            break;
        case 7:
            Y = a*a + c;
            break;
        case 3:
            Y = a - b*c;
            break;
        default: Y = pow(a+b, 3);
            
    }
    cout << "Y = " << Y << endl;
    
*/
/*
    // task 7
    // int 4 roots: 1 -10 9
    float a, b, c, x1, x2, x3, x4, t1, t2;
    int D;
    
    cout << "Current equation: a(x^4) + b(x^2) + c = 0" << endl;
    
    cout << "Enter a , b, c: ";
    cin >> a >> b >> c;
    
    cout << "New is: "<< a <<"(x^4) + " << b << "(x^2) + " << c << " = 0"<< endl;
    cout << "x^2 = t >>> \t" << a << "(t^2) + " << b << " + "<< c << " = 0"<< endl;
    
    D = b*b - 4*a*c;
    cout << "D is: " << D << endl;
    
    if (D >= 0) {
        t1 = (-b + sqrt(D)) / (2 * a);
        t2 = (-b - sqrt(D)) / (2 * a);
        cout << "t1 = " << t1 << "\nt2 = " << t2 << endl;
        cout << "x^2 =t >>> " << endl;
        x1 = sqrt(t1);
        x2 = -sqrt(t1);
        x3 = sqrt(t2);
        x4 = sqrt(t2);
        cout << "x1 = " << x1 << "\nx2 = " << x2 << "\nx3 = " << x3 << "\nx4 = " << x4 << endl;
    }
    else {
        cout << "\nNo roots. Enter another a, b, c" << endl;
    }
*/
/*
    //task 8
    
    int N, k;
    string naim;
    
    cout << "Введите N < 20: ";
    cin >> N;
here:
    if ((N % 100) > 9 && (N % 100) < 21){
        naim = "рублей";
    }
    else{
        switch(N % 10){
            case 1:
                naim = "рубль";
                break;
            case 2:
            case 3:
            case 4:
                naim = "рубля";
                break;
            default:
                naim = "рублей";
                break;
    }
    
    }
    cout << "У вас "  << N << ' ' << naim << endl;
    
    cout << "Сколько вы хотите добавить (k<80, k = 81 - выход) k: ";
    cin >> k;
    if (k == 81)
    {
        return 0;
    }
    N += k;
    
    goto here;
    
    
*/
   int G, year, age;
    string naim;
    
    cout << "Введите год рождения: ";
    cin >> G;
    cout << "Введите текущий год: ";
    cin >> year;
    age = year - G;
    if ((age % 100) > 9 && (age % 100) < 21){
        naim = "лет";
    }
    else{
        switch(age % 10){
            case 1:
                naim = "год";
                break;
            case 2:
            case 3:
            case 4:
                naim = "года";
                break;
            default:
                naim = "лет";
                break;
        }
    }
    cout << "Возраст: " << age << " " << naim << endl;
        
 
    return 0;
}

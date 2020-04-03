//
//  main.cpp
//  LB2.sp
//
//  Created by Vladislav Kremenevskiy on 9/29/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    
/*
    
    float z, x, g, a, b, y;
    int count;
    string name;
    
    cout << "Enter a, b: ";
    cin >> a >> b;
    
    cout << "Enter z: ";
    cin >> z;
    
    if (z < 1)
        x = 2 + z;
    else
        x = pow(sin(z), 2);
    
    cout << "x = " << x << endl;
here:
    cout << "Chose a function:\n1. g = 2x\n2. g = x*x\n3. g = x/3\nMake a choise: ";
    cin >> count;
    
    switch (count) {
        case 1:
            g = 2*x;
            name = "2*x";
            break;
        case 2:
            g = x*x;
            name = "x*x";
            break;
        case 3:
            g = x/3;
            name = "x/3";
            break;
        default:
            cout << "Chose the function again.";
            goto here;
    }
    
    y = ( 2 * a * g + b * cos(sqrt(abs(x))) ) / (x*x + 5);
    
    cout << "Result with g = " << name << " >>> y = " << y << endl;
    */
    
    // task 2
    float x, y, s;
    
    cout << "Enter x, y: ";
    cin >> x >> y;
    string choice;
    
    if (x - y == 0)
    {
        s = x*x + pow(y, 1.0/3) + sin(y);
        choice = "x - y == 0";
    }
    else if (x - y > 0)
    {
        s = pow(x-y,2) + log(abs(x));
        choice = "x - y > 0";
    }
    else {
        s = pow(y-x ,2) + tan(y);
        choice = "x - y < 0";
    }
    
    cout << "Value " << choice << " then s: " << s << endl;
    
    return 0;
}

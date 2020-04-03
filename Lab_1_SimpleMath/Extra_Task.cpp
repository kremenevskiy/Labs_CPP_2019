//
//  main.cpp
//  Optional
//
//  Created by Vladislav Kremenevskiy on 9/10/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // task 1
    
    int h1, m1, h2, m2, time1, time2, spent, spentMins, spentHours;
    
    cout << "began at (h__m) :  ";
    cin >> h1 >> m1;
    
    cout << "finished at (h__m): ";
    cin >> h2 >> m2;
    
    h1 = h1 * 60;
    time1 = h1 + m1;
    
    h2 = h2 * 60;
    time2 = h2 + m2;
    
    if (time1 > time2) {
        time2 += 24*60;
        spent = time2 - time1;
    }
    else {
        spent = time2 - time1;
    }
    
    cout << "Total time spent: " << spent << " mins";
    spentMins = spent % 60;
    spentHours = spent / 60;
    
    cout << "\nSpent time: " << spentHours << " Hours " << spentMins << " mins";
    
    cout << "\n";
    
    // task 2
    
    cout << endl;
    int a2 = 3, a4 = 5;
    int c2 = max(a2, a4);
    
    cout << "большее " << c2 << endl;
    
    // task 6
    
    cout <<   "Введите координаты вершин: ";
    
    int a, b, a1, b1, a3, b3;
    
    cin >> a >> b >> a1 >> b1 >> a3 >> b3;
    
    cout << a << " " << b << " " << a1 << " " << b1 << " "<< a3 << " " << b3 << endl;
    
    float st1, st2, st3;
    
    st1 = sqrt(pow(abs(a-a1),2) + pow(abs(b-b1),2));
    st2 = sqrt(pow(abs(a3-a1),2) + pow(abs(b3-b1),2));
    st3 = sqrt(pow(abs(a3-a),2) + pow(abs(b3-b),2));
               
    cout << "st1 = " << st1 << " st2 = " << st2 << " st3 = " << st3;
    
    int perimetr = st1 + st2 + st3;

    cout << "\nperimeter = " << perimetr << endl;

    return 0;
}





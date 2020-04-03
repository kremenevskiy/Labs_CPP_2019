//
//  main.cpp
//  Additional
//
//  Created by Vladislav Kremenevskiy on 10/2/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // task 1
/*
    double x, y , z;
    
    cout << "Enter x, y, z: ";
    cin >> x >> y >> z;
    
    if (x>1 && x<3){
        cout << "x = " << x << " belongs to (1,3)" << endl;
    }
    if (y>1 && y<3){
        cout << "y = " << y << " belongs to (1,3)" << endl;
    }
    if (z>1 && z<3){
        cout << "z = " << z << " belongs to (1,3)" << endl;
    }
     
*/
    
    // task 2
    
    double a, b, c, x, y;
    int count = 0;
    
    cout << "Enter brick's size a, b, c: ";
    cin >> a >> b >> c;
    cout << "Enter hole size: ";
    cin >> x >> y;
   
    if (a <= x )
    {
        if (b <= y || c <= y)
        {
            count ++;
            
        }
    }
    
    if (b <= x )
    {
        if (a <= y || c <= y)
        {
            count ++;
            
        }
    }
    if (c <= x )
    {
        if (b <= y || a <= y)
        {
            count ++;
        }
    }
    
    if (count > 0){
        cout << "Yes, it's possible" << endl;
    }
    else{
        cout << "No, it's inpossible" << endl;
    }
    


    
    
    return 0;
}


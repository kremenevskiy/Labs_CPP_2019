//
//  main.cpp
//  Additional task 2.2
//
//  Created by Vladislav Kremenevskiy on 11/11/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <ctime>
#define sp(x) setprecision(x) << fixed

using namespace std;


int main(int argc, const char * argv[]) {
    
    const int size = 10;
    
    int array[size][size];
    
    
    int counter = 1;
    
    for(int spiral = 1; spiral <= size/2; spiral++)
    {
        for(int i = spiral - 1, j = spiral - 1; j <= size - spiral; j++)
        {
            array[i][j] = counter++;
        }
        for(int i = spiral, j = size - spiral; i <= size - spiral; i++)
        {
            array[i][j] = counter++;
        }
        for(int i = size - spiral, j = size - spiral - 1; j >= spiral - 1; j--)
        {
            array[i][j] = counter++;
        }
        for(int i = size - spiral - 1, j = spiral - 1; i >= spiral ; i--)
        {
            array[i][j] = counter++;
        }
    }
    
    if(size % 2)
    {
        array[size/2][size/2] = counter;
    }
    
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }
    
   
   cerr << sp(2) << "\nTime execute: " << clock() / (double)CLOCKS_PER_SEC << " sec" << endl;
    
    return 0;
}

//
//  main.cpp
//  additional task 2.5
//
//  Created by Vladislav Kremenevskiy on 11/14/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
using namespace std;
#include <ctime>


int main(int argc, const char * argv[]) {
    int const N = 6;
    int const M = 5;
    int max;
    int max2;
    
    int arr[N][M];
    int arr2[N][M];
    
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    
    cout << endl;
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            max = arr[i][j];
            
            for(int j2 = 0; j2 < j; j2++)
            {
                if(arr[i][j] < arr[i][j2] || arr[i][j] < arr2[i][j2])
                {
                    max = arr[i][j2];
                    max2 = arr2[i][j2];
                    max = (max2 > max)? max2 : max;
                }
            }
            for(int i2 = 0; i2 < i; i2++)
            {
                if(arr[i2][j] > max || arr2[i2][j] > max)
                {
                    if(arr[i][j] < arr[i2][j] || arr[i][j] < arr2[i2][j])
                    {
                        max = arr[i2][j];
                        max2 = arr2[i2][j];
                        max = (max2 > max)? max2 : max;
                    }
                }
            }
            arr2[i][j] = max;
            cout << arr2[i][j] << ' ';
        }
        cout << endl;
    }
    
    
    
    
    
    return 0;
}

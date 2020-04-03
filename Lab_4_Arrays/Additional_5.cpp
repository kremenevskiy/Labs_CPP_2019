//
//  main.cpp
//  Additional task 2.4
//
//  Created by Vladislav Kremenevskiy on 11/13/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
using namespace std;
#include <ctime>

int main(int argc, const char * argv[]) {
    const int n  = 4;
    const int m = 5;
    
    int chest;
    int numbers = (n*n - 4) / 2 + n;
    cout << "numbers: " << numbers << endl;
    
    int arr[n][m];
    
    srand(time(0));
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << ' ';
        }
        cout << endl;
            
    }
    cout << endl;
    
    for(int k = 0; k < numbers; k ++)
    {
        for(int i = 0, nj = n; i < n; i++, nj--)
        {
            for(int j = 0; j < nj; j++){
                if(j == nj - 1){
                    if (arr[i][j] > arr[i+1][0] && i + 1 < n)
                    {
                        chest = arr[i+1][0];
                        arr[i+1][0] = arr[i][j];
                        arr[i][j] = chest;
                        
                    }
                    continue;
                }
                if (arr[i][j] > arr[i][j+1])
                {
                    chest = arr[i][j+1];
                    arr[i][j+1] = arr[i][j];
                    arr[i][j] = chest;
                    
                }
            }
        }
    }
    
    cout << endl;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {

            cout << arr[i][j] << ' ';
        }
        cout << endl;

    }
        
    
    return 0;
}

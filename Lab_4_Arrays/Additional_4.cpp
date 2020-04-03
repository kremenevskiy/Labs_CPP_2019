//
//  main.cpp
//  Additional task 2.3
//
//  Created by Vladislav Kremenevskiy on 11/13/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
using namespace std;
#include <iomanip>

int main(int argc, const char * argv[]) {
    
    const int N = 11;
    
    int square[N][N];
    //int numbers = N*N;
    int start = N / 2;

    // Заполнение нулями
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            square[i][j] = 0;
            //cout << square[i][j] << ' ';

        }
            cout << endl;
    }
    
    // cout << endl;
    
    for(int numbers = 1,i = 0, j = start; numbers <= N*N; numbers ++)
    {
        if (i == -1 && j < N)
        {
            i = N - 1;
            numbers --;
            continue;
        }
        if(i > -1 && j == N)
        {
            j = 0;
            numbers --;
            continue;
        }
        if(square[i][j] > 0)
        {
            if(i== N - 1)
            {
                i = 0;
            }
            else if(i == 0 && j == N - 1)
            {
                i++;
                
                
            }
            else
            {
                i++;
                j--;
                i++;
            }
            

            if( square[i][j] == 0)
            {
                
                
                numbers --;
                continue;
            }
        }
        
        if (i  == -1 && j == N)
        {
            if (square[N-1][0] > 0)
            {
                i ++;
                j --;
                numbers--;
                continue;
            }
            i = N - 1;
            j = 0;
            numbers --;
            continue;
        }
        square[i][j] = numbers;
        j++;
        i--;
        
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << setw(3) << square[i][j] << ' ';

        }
            cout << endl;
    }
    
    
    
    return 0;
}

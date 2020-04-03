//
//  main.cpp
//  Additional task
//
//  Created by Vladislav Kremenevskiy on 11/11/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int rows = 6;
    int cols = 5;
    int counter = 0;
    
    int **arr = new int *[rows];
    for(int i = 0; i < rows; i++){
        arr[i] = new int [cols];
    }
    
    srand(time(0));
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if (i == 0 || j == 0 || i == rows - 1 || j == cols -1)
                arr[i][j] = 1000;
            else {
                arr[i][j] = rand() % 100;
            }
    
             // cout << arr[i][j] << ' ';
        }
         // cout << endl;
    }
    
    
    for(int i = 1; i < rows -1; i++){
        for(int j = 1; j < cols -1; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
    
    for(int i = 1; i < rows -1; i++)
        for(int j = 1; j < cols -1; j++)
            if (arr[i][j] < arr[i-1][j-1] && arr[i][j] < arr[i-1][j] && arr[i][j] < arr[i-1][j+1] && arr[i][j] < arr[i][j-1] && arr[i][j] < arr[i][j+1] && arr[i][j] < arr[i+1][j-1] && arr[i][j] < arr[i+1][j] && arr[i][j] < arr[i+1][j-1])
                counter++;
    
    cout << "Number of local mins: " << counter << endl;
    
    for (int i = 0; i < rows; i++)
        delete [] arr [i];
    delete [] arr;

    
    
    return 0;
}

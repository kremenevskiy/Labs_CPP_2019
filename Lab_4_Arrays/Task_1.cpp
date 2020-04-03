//
//  main.cpp
//  LB4
//
//  Created by Vladislav Kremenevskiy on 11/10/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    // First special
    cout << "First: " << endl;
    
    const int k = 7;
    
    int arr[k] = {42,12,5,2,6,23,635};
    
    for(int i = 0; i < k; i++)
    {
        cout << arr[i] << ' ';
    }
    
    int min = arr[0], max = arr[0];
    
    for(int i = 0; i < k; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    
    for(int i = 0; i < k; i++)
    {
        if (arr[i] == max)
        {
            arr[i] = min;
        }
        else if (arr[i] == min)
        {
            arr[i] = max;
        }
    }
    cout << endl;
    
    for(int i = 0; i < k; i++)
    {
        cout <<  arr[i] << ' ';
    }
    
    cout << endl;
    
    
    // Second special
    cout << "\n\n";
    cout << "Second: " << endl;
    
    
    const int N = 3;
    const int M = 6;
    
    int array[N][M] = {{0,-1,2,-3,-4,5},{-7,-2,3,-4,5,6},{2,-3,4,-5,-6,7}};
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
            cout << array[i][j] << ' ';
        cout << endl;
    }
    
    int sum = 0;
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N - i - 1; j ++ )
        {
            if(array[i][j] < 0)
                sum += array[i][j];
        }
    }
    
    cout << "sum: " << sum << endl;
    
    
    // Special 3
    cout << "\n\n";
    cout << "Third: " << endl;
    srand(time(0));
    
    int rows = 3;
    int cols = 6;
    int rowCounter;
    int colCounter;
    
    int **matrix = new int *[rows];
    int MAX;
    
    for(int i = 0; i < rows; i++)
    {
        matrix[i] = new int [cols];
    }
    
    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            
            matrix[i][j] = rand() % 100;
            
            if (i == 0 && j == 0)
            {
                MAX = matrix[i][j];
            }
            else if (matrix[i][j] > MAX)
            {
                MAX = matrix[i][j];
                rowCounter = i;
                colCounter = j;
            }
            
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    
    
    int *row = new int [cols];
    int *col = new int [rows];
    
    
    // Замена местами строк одна за другой // попробовать заменой указателей!
    
    for(int m = 0; m < rowCounter; m ++ )
    {

        for (int i = 0; i < rows - 1; i ++)
        {
            for (int j = 0; j < cols; j++)
            {
                row[j] = matrix[i+1][j];
                matrix[i+1][j] = matrix[i][j];
                matrix[i][j] = row[j];
            }

        }
    }
    
    
    // Замена местами столбцов один за другим
    
    for(int m = 0; m < colCounter; m ++)
    {
        for (int j = 0; j < cols - 1; j++)
        {
            for (int i = 0; i < rows; i++)
            {
                col[i] = matrix[i][j+1];
                // cout << "col[" << i << "] = " << col[i] << ' ';
                matrix[i][j+1] = matrix[i][j];
                matrix[i][j] = col[i];
                
            }
            // cout << endl;

        }
    }
    
    cout << endl;
    
    
    // Вывод конечной матрицы
    
    cout << "\nchanged: \n\n";
    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            
            cout << matrix[i][j] << ' ';
            
        }
        cout << endl;
        delete [] matrix[i];
    }
    
    delete [] matrix;
    
    delete [] row;
    delete [] col;

    
    return 0;
}

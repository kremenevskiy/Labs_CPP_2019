//
//  main.cpp
//  Additional task 2
//
//  Created by Vladislav Kremenevskiy on 11/11/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, const char * argv[]) {
    
    const int N = 5;
    const int M = 10;
    int counter = 0;
    
    
    int A[N][M];
    int **B = new int *[N];
    int repeat = 0;
    
    
    srand(time(0));
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            A[i][j] = rand() % 10;
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }
    
   
    
    for(int i = 0; i < N; i++){
        counter = 0;
        for(int j = 0; j < M; j++){
            repeat = 0;
            for(int stroka = j+1; stroka < M; stroka ++){
                if (A[i][j] == A[i][stroka]){
                    if (!repeat)
                        repeat ++;
                    repeat++;
                    }
                }
            counter += repeat;
            }
        B[i] = new int [counter];
        }
    
    cout << "\n\n";
    
    int j_B;
    
    for(int i = 0; i < N; i++){
        j_B = 0;
        for(int j = 0; j < M; j++){
            repeat = 0;

            for(int stroka = j+1; stroka < M; stroka ++){
                if (A[i][j] == A[i][stroka]){
                    if(!repeat){
                        B[i][j_B] = A[i][j];
                        cout << B[i][j_B] << ' ';

                        repeat++;
                        j_B++;
                    }
                    B[i][j_B] = A[i][stroka];
                    cout << B[i][j_B] << ' ';

                    repeat++;
                    j_B++;
                    }
                }
            }
        cout << endl;
        }
    
    for(int i = 0; i < N; i++){
        delete [] B[i];
        //delete []B2[i];
    }
    
    delete [] B;
    
    
    return 0;
}

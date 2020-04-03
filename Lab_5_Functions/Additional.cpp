//
//  main.cpp
//  Additional
//
//  Created by Vladislav Kremenevskiy on 11/20/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
using namespace std;
#include <ctime>
#include "iomanip"

int* createArray(int* massiv, int num);
int* addElement(int* massiv, int num, int value);
void printArray(int* massiv, int num);

int main(int argc, const char * argv[]) {
    
    int n, k;
    cout << "Enter n and k: ";
    cin >> n >> k;
    cout << endl;
    int **b = new int *[n];
    
    for(int i = 0; i < n; i++){
        b[i] = new int[k];
    }
    
    srand(time(0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            b[i][j] = rand() % 10;
            cout << b[i][j] << ' ';
        }
        cout << endl;
    }
    
    int* newMassiv = nullptr;
    newMassiv = createArray(newMassiv, 1);
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            if (j % 2 == 0 && b[i][j] % 2 == 1){
                count ++;
                //cout << endl << b[i][j] << endl;
                newMassiv = addElement(newMassiv, count, b[i][j]);
                //printArray(newMassiv, count);

            }
        }
    }
//    newMassiv = createArray(newMassiv, 1);
//    //newMassiv[0] = 1;
//    printArray(newMassiv, 1);
//    newMassiv = addElement(newMassiv, 1, 4);
//    newMassiv = addElement(newMassiv, 2, 6);
//    printArray(newMassiv, 2);

    cout << "New array: ";
    printArray(newMassiv, count);
    
    return 0;
}


int* createArray(int* massiv, int num){
    return massiv = new int [num];
}


int* addElement(int* massiv, int num, int value){
    int* temp = new int [num+1];
    
    for(int i = 0; i < num; i++)
        temp[i] = massiv[i];
    temp[num-1] = value;
    delete[] massiv;
    return temp;
}


void printArray(int* massiv, int num){
    cout << endl;
    for(int i = 0; i < num; i++){
        cout << massiv[i] << ' ';
    }
    cout << "\n\n";
}

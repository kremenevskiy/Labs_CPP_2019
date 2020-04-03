//
//  main.cpp
//  task_2
//
//  Created by Vladislav Kremenevskiy on 12/17/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
using namespace std;

int reverse(char * array);
// Как написать NOT побитово
int main(int argc, const char * argv[]) {
   
    char array[20];
    
    cout << "Enter a number in revese code (1.XXXX) : ";
    cin >> array;
    
    
    if (!reverse(array))
        cout << "Natural form : " << array << '\n';
    else
        cout << "Uncorrect input ot that reverse code doesn't exist !!!\n";
    return 0;
}

int reverse(char * array){
    if (array[0] == '1'){
        int count = strlen(array) - 2;
        for (int j = 2; j < strlen(array); j++){
            if (array[j] == '1'){
                count --;
            }
        }
        if (count == 0){
            // cout << "Uncorrect code!!\n";
            array = "ERROR";
            return 9;
        }
        
        for (int j = (int) strlen(array); j >= 2; j --){
            array[j] = array[j-1];
        }
        array[0] = '-';
        array[1] = '0';
       
        for (int i = 3; i < strlen(array); i++){
            if (array[i] == '0')
                array[i] = '1';
            else
                array[i] = '0';
        }
    }
    return 0;
}

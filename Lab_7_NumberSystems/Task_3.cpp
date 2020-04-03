//
//  main.cpp
//  task_3
//
//  Created by Vladislav Kremenevskiy on 12/17/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
using namespace std;

void reverse(char * array);
void reverse_ad(char * result);
char* add(char *a, char *b, char *result);


int counter = 0;


int main(int argc, const char * argv[]) {
    
    char array[20];
    char array_2[20];
    
    cout << "Enter 1 and 2nd number in natural code (0.XXXX) :\n1. ";
    cin >> array;
    cout << "2. ";
    cin >> array_2;
    
    reverse(array);
    reverse(array_2);
    
    cout << "Reverse form of 1st : " << array << '\n';
    cout << "Reverse form of 2nd : " << array_2 << '\n';

    char result[20] = {0};
    
    cout << "Addition result: " << add(array, array_2, result) << " in reverse code\n";
    
    reverse_ad(result);
    
    cout << "Additional code: " << result << '\n';
    return 0;
}

void reverse(char * array){
    if (array[0] == '-'){
        array[0] = '1';
        array[1] = '.';
        for (int j = 3; j <= strlen(array); j ++){
            array[j-1] = array[j];
        }
        for (int i = 2; i < strlen(array); i++){
            if (array[i] == '0')
                array[i] = '1';
            else
                array[i] = '0';
        }
    }
}

void reverse_ad(char * result){
    int i = (int) strlen(result) - 1;
    while (result[i] + 1 > '1'){
        
        if(result[i] == '.'){
            continue;
        }
        
        switch(result[i] - '0' + 1){
            case 1: result[i] = 1 + '0'; break;
            case 2: result[i] = 0 + '0';
            case 3: result[i] = 0 + '0'; break;
            //case 2: result[i] = 0 + '0'; break;

        }
        if (result[i-1] != '.')
            result[i-1] += 1;
        else
            result[i-2] += 1;
        
        if (result[i-1] + 1 == '2')
            break;
        i--;
    }
}


char * add(char *a, char *b, char * result){
    for(int i = (int) strlen(a) - 1; i >= 0; i --){
        
        if(a[i] == '.'){
            result[i] = '.';
            continue;
        }
        // int counter = 0;
        
        counter += abs(a[i] - '0' + b[i] - '0');
        
        switch(counter){
            case 0: result[i] = counter + '0'; counter = 0; break;
            case 1: result[i] = counter + '0'; counter = 0; break;
            case 2: result[i] = 0 + '0'; counter = 1; break;
            case 3: result[i] = 1 + '0'; counter = 1; break;
                
        }
    
    }
    cout << "\\ Counter: " << counter << " \\ \n";
    
    if (counter){
        int i = (int) strlen(result) - 1;
        
        if (result[i] == '0'){
            result[i] ++;
            return result;
        }
        while (result[i] + 1 > '1'){
           
            switch(result[i] - '0' + 1){
                case 1: result[i] = 1 + '0'; break;
                case 2: result[i] = 0 + '0'; break;
                    
            }
            
            result[i-1] += 1;
            
            if (result[i-1] + 1 == '2')
                break;
            i--;
        }
    }
    
    return result;
}



//
//  main.cpp
//  additional_3
//
//  Created by Vladislav Kremenevskiy on 12/12/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <cstring>

#include <iostream>
using namespace std;

int factorial(int n);

int main(int argc, const char * argv[]) {
    
    char str[14];
    
    cout << "Enter a word: ";
    cin >> str;

    int number_Anagrams = factorial(strlen(str));
    
    for(int i = 0, len = strlen(str); i < len; i++){
        
        if  (i > 0){
            int counter = 0;
            for (int k = 0; k < i; k++){
                
                if ( str[i] == str[k]){
                    counter ++;
                }
            }
            if(counter > 0){
                continue;
            }
        }
        
        int repit = 1;
        
        for(int j = i + 1; j < len; j++){
            
            if ( str[i] == str[j] ){
                repit ++;
            }
        }
        number_Anagrams = number_Anagrams / factorial(repit);
    }
    

    cout << "Number of anagrmas: " << number_Anagrams << '\n';
    return 0;
}


int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
    
}
//abba

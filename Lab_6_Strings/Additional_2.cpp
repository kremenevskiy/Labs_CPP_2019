//
//  main.cpp
//  additional_2
//
//  Created by Vladislav Kremenevskiy on 12/11/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
using namespace std;

#include <cstdio>
#include <cstring>
#include <sstream>
#include <cmath>

int main(int argc, const char * argv[]) {
    
    int number_tests;
    cin >> number_tests;
    long long resuslts[100];
    long long L, m;
    int len_s;
    int len_p;
    int free_positions;
    int result;
    char suffix[200];
    char prefix[200];
    
    for(int i = 0; i < number_tests; i++){
    
        cin >> L >> m;
        
        cin >> prefix;
        cin >> suffix;
        
        len_s = strlen(suffix);
        len_p = strlen(prefix);
        
        
        free_positions = L - len_s - len_p;
        
        if (free_positions >= 0){
    
//      cout << L << ' ' << len_s << ' ' <<  len_p << ' ' << free_positions << '\n';
        result = pow(26, free_positions) * 2;
            
        }
        else {
            
            free_positions = -free_positions;
            int count = 0;
            int count_2 = 0;
            for(int i = 0; i < free_positions; i ++){
                if(prefix[strlen(prefix) - free_positions + i] != suffix[i]){
                    count --;
                }
                if(suffix[strlen(suffix) - free_positions + i] != prefix[i]){
                    count_2 --;
                }
            }
            
            if (count < 0){
                result = 0;
            }
            if (count == 0 || count_2 == 0){
                result = 1;
            }
        }
        
        resuslts[i] = result % m;
    
    }
    
    cout << "\nOutput:\n";
    
    for(int i = 0; i < number_tests; i++){
        cout << resuslts[i] << '\n';
    }
    
    cout << '\n';
    
}

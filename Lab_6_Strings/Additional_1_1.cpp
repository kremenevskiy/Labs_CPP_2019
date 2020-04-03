//
//  main.cpp
//  additional
//
//  Created by Vladislav Kremenevskiy on 12/11/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
using namespace std;
#include <cstdio>
#include <cctype>

int main(int argc, const char * argv[]) {
    

    
    char str[200];
    cout << "Enter a text: ";
    gets(str);
    
    int counter = 0;
    char str_copy[200];
    
    for(int i = 0; i < strlen(str); i++){
        str_copy[i] = str[i];
    }
    
    while(counter < strlen(str_copy)){
        
        for(int i = 0; i < strlen(str); i++){
            if (str[i] == str[i+1] || str[i] == str[i+1] + 32 || str[i] == str[i+1] - 32){
                for(int j = i, len = strlen(str) - 1; j <= len; j++){
                    if (isupper(str[j])){
                        str[j] = toupper(str[j+1]);
                    }
                    else {
                        str[j] = str[j+1];
                    }
                    
                }
                continue;
            }
        }
        
        counter++;
        
    }
    
    for(int i = 0; i < strlen(str); i++){
        
        int cntr = 0;
        
        if (isupper(str[i])){
            cntr = 1;
        }
        
        if (str[i] == 'c' || str[i] == 'C'){
            if (str[i + 1] == 'e' || str[i + 1] == 'i' || str[i + 1] == 'y' || str[i + 1] == 'Y' || str[i + 1] == 'I' || str[i + 1] == 'E'){
                str[i] = 's';
            }
            else{
                str[i] = 'k';
            }
        }
        
        if ((str[i] == 'q' && str[i + 1] == 'u') || (str[i] == 'Q' && str[i + 1] == 'u') || (str[i] == 'Q' && str[i + 1] == 'U')){
            str[i] = 'k';
            str[i + 1] = 'v';
                
            
            //i++;
        }
        
        if (str[i] == 'q' || str[i] == 'Q'){
            str[i] = 'k';
        }
        
        
        
        if (str [i] == 'x' || str [i] == 'X'){
            str[strlen(str) + 1] = '\0';
            for(int len = strlen(str) - 1; len > i; len --){
                str[len + 1] = str[len];
                
            
            }
            
            
            str[i] = 'k';
            str[i+1] = 's';
            
            
        }
        
        if (str[i] == 'w' || str[i] == 'W'){
            str[i] = 'v';
        }
        
        if ((str[i] == 'p' && str[i+1] == 'h') || (str[i] == 'P' && str[i+1] == 'h') || (str[i] == 'P' && str[i+1] == 'H')){
            for(int j = i, len = strlen(str) - 1; j <= len; j++){
                str[j] = str[j+1];
                
            }
            
            str[i] = 'f';

        }
        if ((str[i] == 'y' && str[i+1] == 'o' && str[i+2] == 'u') || (str[i] == 'Y' && str[i+1] == 'o' && str[i+2] == 'u')){
            for(int j = i, len = strlen(str) - 1; j < len; j++){
                str[j+1] = str[j+2];
                str[j] = str[j+1];
            }
            str[i] = 'u';

        }
        
        if ((str[i] == 'o' && str[i+1] == 'o') || (str[i] == 'O' && str[i+1] == 'o')){
            for(int j = i, len = strlen(str) - 1; j <= len; j++){
                str[j] = str[j+1];
                
            }
            
            str[i] = 'u';

        }
        if ((str[i] == 'e' && str[i+1] == 'e') || (str[i] == 'E' && str[i+1] == 'e')){
            for(int j = i, len = strlen(str) - 1; j <= len; j++){
                str[j] = str[j+1];
                
            }
            
            str[i] = 'i';

        }
        if ((str[i] == 't' && str[i+1] == 'h') || (str[i] == 'T' && str[i+1] == 'h')){
            for(int j = i, len = strlen(str) - 1; j <= len; j++){
                str[j] = str[j+1];
                
            }
            
            str[i] = 'z';

        }
        
        if (cntr == 1 && islower(str[i])){
            str[i] = str[i] - 32;
        }
        
        
    }
// Ceo city Cyprus cat query quarter xiaomi wizard phone you too teeth
// Xx Qu
    cout << "\nChanged text:\n" << str << '\n';
    
//    for (int i = 0; i < strlen(str); i++){
//        putchar(str[i]);
//    }
}


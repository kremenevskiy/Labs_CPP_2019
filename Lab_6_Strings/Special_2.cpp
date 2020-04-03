//
//  main.cpp
//  individual_2
//
//  Created by Vladislav Kremenevskiy on 12/9/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <cctype>
#include <cstdio>

#include <iostream>
using namespace std;

int lenght(char *str);


int main(int argc, const char * argv[]) {
    
    char str[80];
    cout << "Enter yout text here: ";
    gets(str);

    for(int i = 0; i < lenght(str); i++){
        if (isupper(str[i])){
            cout << str[i] << " - " << int(str[i]) - 64 << '\n';
        }
        if (islower(str[i])){
            cout << str[i] << " - " << int(str[i]) - 96 << '\n';
        }
    }
    
    
    for(int i = 0; i < lenght(str); i++){
        if (isupper(str[i])){
            cout << int(str[i]) - 64;
        }
        else if (islower(str[i])){
            cout << int(str[i]) - 96;
        }
        else{
            cout << str[i];
        }
    }
    
    
    cout << '\n';
    
}


int lenght(char *str){
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++){
        counter ++;
    }
    return counter;
}

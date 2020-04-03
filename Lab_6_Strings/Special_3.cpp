//
//  main.cpp
//  individual_3
//
//  Created by Vladislav Kremenevskiy on 12/9/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <cstdio>

#include <iostream>
using namespace std;

int lenght(char *str);
int compare(char *str, char *str2);
int lenght(char **str);

int main(int argc, const char * argv[]) {
    
    setlocale(LC_CTYPE, "rus");
    
    char str[10][80];

// Enteting strings
    
    int i = 0;
    while(true){
        cout << "Enter " << i + 1 << " word(\"stop\" to break): ";
        gets(str[i]);
        
        if (!compare(str[i], "stop")){
            break;
        }
        
        
        i++;
    }
    
    for(int j = 0; j < i; j++){
       // cout << "Letter: " << str[j][lenght(str[j]) - 1] << '\n';

        if(str[j][lenght(str[j]) - 1] == 'a'){
            cout << str[j] << " is women gender!" << '\n';
        }
        if(str[j][lenght(str[j]) - 1] == 'o' || str[j][lenght(str[j]) - 1] == 'e'){
            cout << str[j] << " is sridniy gender!" << '\n';
        }
        if(str[j][lenght(str[j]) - 1] != 'a' && str[j][lenght(str[j]) - 1] != 'o' && str[j][lenght(str[j]) - 1] != 'e'){
            cout << str[j] << " is man gender!" << '\n';
        }
        cout << '\n';
        
    }
    
}


int lenght(char *str){
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++){
        counter ++;
    }
    return counter;
}

int lenght(char **str){
    int counter = 0;
    for(int i = 0; *str[i] != '\0'; i++){
        counter ++;
    }
    return counter;
}

int compare(char *str, char *str_2){
    for(int i = 0; str[i]; i++){
        if (str[i] == str_2[i]){
            continue;
        }
        else{
            return 1;
        }
        
    }
    return 0;
}

//
//  main.cpp
//  LB6
//
//  Created by Vladislav Kremenevskiy on 12/9/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <cstdio>

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

// Entering and checking string
    
    char str[80];
   
    cout << "Enter a string consisting of 0s and 1s: ";
    
    gets(str);
    cout << "lenght: " << strlen(str) << '\n';
    
    int i = 0;
    
    while(i < strlen(str)){
        if (str[i] != '1' && str[i] != '0'){
            cout << "Wrong input, try again!\n";
            gets(str);
            cout << "lenght: " << strlen(str) << '\n';
            i = 0;
            continue;
        }
        i++;
    }
    
    
// Counting characters
    
    i = 1;
    int counter = 1;
    int counter_2 = 1;
    
    while(i < strlen(str)){
        if (str[i] == str[i-1]){
            counter_2 ++;
            counter = (counter < counter_2) ? counter_2 : counter;
        }
        else{
            counter_2 = 1;
        }
        i++;
    }
    
    
    cout << "The biggest group contains " << counter << " elements.\n";

    return 0;
}

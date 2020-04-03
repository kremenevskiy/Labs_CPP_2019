//
//  main.cpp
//  task_4
//
//  Created by Vladislav Kremenevskiy on 12/16/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
using namespace std;

#include <cstring>
#include <cstdlib>


void assign_arr(char *to, char *from);
void swap_arr(char *a, char *b);
void compare(char * a, char * b);

int convert(char ch);
char convert(int num);

void check_sub(char * a, int i);
void check_add(char * a, int i);
void check_rez(char *rez, char *a);

char * subtraction(char * a, char * b);
char * addition(char* a, char *b);

void zero_fix(char *a);

char* processing(char *a, char *operation, char *b);
void moveArr_left(char *a);
int compare_noSwap(char * a, char * b);


int main(){
    
    char a[10];
    char b[10];
    char operation[2];
    char ans[10];
    
    cout << "Enter first number in 13 ns : ";
    cin >> a;
    cout << "Enter an operation ( +/- ) : ";
    cin >> operation;
    cout << "Enter second number in 13 ns : ";
    cin >> b;
    
    assign_arr(ans, processing(a, operation, b));
    
    cout << "Answer : " << ans << '\n';
    
    return 0;
}

char * subtraction(char * a, char * b){
    
    char *result = new char[10];
    
    compare(a, b);
    
    for(int i_a = (int) strlen(a) - 1, i_b = (int) strlen(b) - 1; i_a >= 0; i_a--, i_b --){
        if (i_b >= 0){
            int a_new = convert(a[i_a]);
            int b_new = convert(b[i_b]);
            int subtract = a_new - b_new;
            
            if (subtract >= 0)
                result[i_a] = convert(subtract);
                
            else{
                check_sub(a,i_a);
                result[i_a] = convert(subtract+13);
            }
        }
        else
            result[i_a] = a[i_a];
        
    }
    
    zero_fix(result);
    
    return result;
}

char * addition(char* a, char *b){
    char * result = new char[10];
    
    compare(a, b);
    
    for(int i_a = (int) strlen(a) - 1, i_b = (int) strlen(b) - 1; i_a >= 0; i_b --, i_a --){
        if (i_b >= 0){
            int a_new = convert(a[i_a]);
            int b_new = convert(b[i_b]);
            
            int add = a_new + b_new;
            
            if(add <= 12)
                result[i_a] = convert(add);
            else{
                check_add(a, i_a);
                result[i_a] = convert(add - 13);
                
            }
        }
        else
            result[i_a] = a[i_a];
    }
    
    check_rez(result, a);
    
    return result;
}


int convert(char ch){
    int num = 0;
    switch(ch){
        case '0': num = 0; break;
        case '1': num = 1; break;
        case '2': num = 2; break;
        case '3': num = 3; break;
        case '4': num = 4; break;
        case '5': num = 5; break;
        case '6': num = 6; break;
        case '7': num = 7; break;
        case '8': num = 8; break;
        case '9': num = 9; break;
        case 'A': num = 10; break;
        case 'B': num = 11; break;
        case 'C': num = 12; break;
    }
    return num;
}

char convert(int num){
    char ch = '0';
    switch(num){
        case 0: ch = '0'; break;
        case 1: ch = '1'; break;
        case 2: ch = '2'; break;
        case 3: ch = '3'; break;
        case 4: ch = '4'; break;
        case 5: ch = '5'; break;
        case 6: ch = '6'; break;
        case 7: ch = '7'; break;
        case 8: ch = '8'; break;
        case 9: ch = '9'; break;
        case 10: ch = 'A'; break;
        case 11: ch = 'B'; break;
        case 12: ch = 'C'; break;
    }
    return ch;
}


void compare(char * a, char * b){
    if (strlen(a) > strlen(b))
        return;
    else if (strlen(a) < strlen(b)){
        swap_arr(a, b);
    }
    else{
        for(int i = 0; i < strlen(a); i++){
            if (a[i] > b[i])
                break;
            else if (a[i] < b[i]){
                swap_arr(a, b);
                break;
            }
            else
                continue;
            
        }
    }
}

void assign_arr(char *to, char *from){
    for(int i = 0; i <= strlen(from); i++)
        to[i] = from[i];
}

void swap_arr(char *a, char *b){
    char chest[ strlen(a)>strlen(b) ? strlen(a): strlen(b) ];
    assign_arr(chest, a);
    assign_arr(a, b);
    assign_arr(b, chest);
}

void check_sub(char * a, int i){
    if (a[i-1] == '0'){
        while(a[i-1] == '0'){
            a[i-1] = 'C';
            a[i-2] --;
            i--;
        }
    
    if (a[i-1] == 'A')
        a[i-1] = '9';
    }
    else
        a[i-1]--;
}

void check_add(char * a, int i){
    
    if (a[i-1] == 'C'){
        while(a[i-1] == 'C'){
            a[i-1] = '0';
            a[i-2] ++;
            i--;
        }
    
    if (a[i-1] == '9')
        a[i-1] = 'A';
    }
    else
        a[i-1]++;
}

void zero_fix(char *a){
    
    for(int i = 0; i < (int) strlen(a); i++){
       
        while(a[i] == '0'){
            for(int j = 1; j < strlen(a); j++){
                a[j-1] = a[j];
            }
            a[strlen(a) - 1] = '\0';
        }
    }
    if (a[strlen(a) - 1] == '\0')
        a[strlen(a)] = '0';
}

void check_rez(char *rez, char *a){
    
    if (strlen(rez) == strlen(a) && compare_noSwap(a, rez)){
        for(int i = (int) strlen(a); i > 0; i--)
            rez[i] = rez[i-1];
        
            rez[0] = '1';
        
    }
}

void moveArr_left(char *a){
    for(int i = 0; i < strlen(a); i++){
        a[i] = a[i+1];
    }
}

void add_minus(char *a){
    for(int i = (int) strlen(a) + 1; i >= 0; i--){
        a[i] = a[i-1];
    }
    a[0] = '-';
}


int compare_noSwap(char * a, char * b){
    if (strlen(a) > strlen(b))
        return 1;
    else if (strlen(a) < strlen(b)){
        return 0;
    }
    else{
        for(int i = 0; i < strlen(a); i++){
            if (a[i] > b[i])
                break;
            else if (a[i] < b[i]){
                return 0;
            }
            else
                continue;
            
        }
    }
    return 2;
}


char* processing(char *a, char *operation, char *b){
    
    char *result = new char[20];
    // char *a_save = new char[20];
    // char *b_save = new char[20];
    
    if (operation[0] == '+' && a[0] != '-' && b[0] != '-'){
        result = addition(a, b);
        return result;
    }
    
    if (operation[0] == '+' && a[0] != '-' && b[0] == '-'){
        moveArr_left(b);
        if (compare_noSwap(a, b))
            result = subtraction(a, b);
        else{
            result = subtraction(a, b);
            add_minus(result);
        }
    }
    
    if (operation[0] == '+' && a[0] == '-' && b[0] != '-'){
        moveArr_left(a);
        if (compare_noSwap(a, b)){
            result = subtraction(a, b);
            add_minus(result);
        }
        else
            result = subtraction(a, b);
    }
        
    if (operation[0] == '+' && a[0] == '-' && b[0] == '-'){
        moveArr_left(a);
        moveArr_left(b);
        result = addition(a, b);
        add_minus(result);
    }
        
    if (operation[0] == '-' && a[0] != '-' && b[0] != '-'){
        if (compare_noSwap(a, b))
            result = subtraction(a, b);
        else{
            result = subtraction(a, b);
            add_minus(result);
        }
    }
        
    
    if (operation[0] == '-' && a[0] != '-' && b[0] == '-'){
        moveArr_left(b);
        result = addition(a, b);
    }
    
    if (operation[0] == '-' && a[0] == '-' && b[0] != '-'){
        moveArr_left(a);
        result = addition(a, b);
        add_minus(result);
    }
    
    if (operation[0] == '-' && a[0] == '-' && b[0] == '-'){
        moveArr_left(a);
        moveArr_left(b);
        if (compare_noSwap(a, b)){
            result = subtraction(a, b);
            add_minus(result);
        }
        else
            result = subtraction(a, b);
       
    }

    return result;
}

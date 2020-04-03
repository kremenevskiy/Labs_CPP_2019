//
//  main.cpp
//  LB7
//
//  Created by Vladislav Kremenevskiy on 12/15/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//
#include <cmath>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;


int main(int argc, const char * argv[]) {

    float decimal = 0;
    char number[10];
    cout << "Enter a number in 13 ns: ";
    cin >> number;
    int position;
    float quaternary = 0;
    
    // converting to decimal
    
    
    for(int i = 0; i < strlen(number); i++){
        if (number[i] == '.'){
            position = i;
            break;
        }
        else{
            position = strlen(number);
        }
    }
    
    
    for(int i = 0; i < position; i++){
        switch(number[i]){
            case 'A':
                decimal += 10 * pow(13, position - i - 1);
                break;
            case 'B':
                decimal += 11 * pow(13, position - i - 1);
                break;
            case 'C':
                decimal += 12 * pow(13, position - i - 1);
                break;
            default:
                decimal += (number[i] - '0') * pow(13, position - i - 1);
        }

    }
    
    for(int i = position + 1; i < strlen(number); i++){
        switch(number[i]){
            case 'A':
                decimal += 10 * pow(13, -(i - position));
                break;
            case 'B':
                decimal += 11 * pow(13, -(i - position));
                break;
            case 'C':
                decimal += 12 * pow(13, -(i - position));
                break;
            default:
                decimal += (number[i] - '0') * pow(13, -(i - position));
        }

    }
    
    cout << "This number in decimal ns: " << decimal;;
    
    float decimal_fract = decimal - int(decimal);
    
    
    // converting to quaternary
    
    
    for(int r = 1; decimal >= 5; r *= 10){
        quaternary += ( (int) decimal % 5 ) * r;
        decimal = (int) decimal /  5;
        if (decimal < 5){
            r *= 10;
            quaternary += ( (int) decimal % 5 ) * r;
        }
    }
    
    float quaternary_f = 0;
    
    for(float r = 0.1, i = 1; i < 5; i++, r /= 10){
        quaternary_f += int(decimal_fract * 5) * r;
        decimal_fract = decimal_fract * 5 - int(decimal_fract * 5);
    }
    
    quaternary += quaternary_f;
    
    
    cout << "\nThis number in 5 ns: " << quaternary << '\n' << "\nUsing arrays!\n";
   
    // Converting to decimal
    
    
    decimal = 0;
    cout << "Enter a number in 13 ns: ";
    cin >> number;
    quaternary = 0;
    int array[10];
    
    for(int i = 0; i < position; i++){
        switch(number[i]){
            case 'A':
                decimal += 10 * pow(13, position - i - 1);
                break;
            case 'B':
                decimal += 11 * pow(13, position - i - 1);
                break;
            case 'C':
                decimal += 12 * pow(13, position - i - 1);
                break;
            default:
                decimal += (number[i] - '0') * pow(13, position - i - 1);
        }

    }
    
    for(int i = position + 1; i < strlen(number); i++){
        switch(number[i]){
            case 'A':
                decimal += 10 * pow(13, -(i - position));
                break;
            case 'B':
                decimal += 11 * pow(13, -(i - position));
                break;
            case 'C':
                decimal += 12 * pow(13, -(i - position));
                break;
            default:
                decimal += (number[i] - '0') * pow(13, -(i - position));
        }

    }
    
    
    cout << "This number in decimal ns: " << decimal;;
    
    decimal_fract = decimal - int(decimal);
    
    
    // converting to quaternary
    
    int i = 0;
    
    for(int r = 1; decimal >= 5; r *= 10, i++){
        // quaternary += ( (int) decimal % 5 ) * r;
        array[i] = (int) decimal % 5;
        decimal = (int) decimal /  5;
        if (decimal < 5){
            i++;
            r *= 10;
            //quaternary += ( (int) decimal % 5 ) * r;
            array[i] = (int) decimal % 5;
        }
    }
    
    
    cout << "\nThis number in 5 ns: ";
    for(int j = i - 1; j >= 0; j--){
        cout << array[j];
    }
    
    cout << '.';
    
    int pointer = i;
    array[i] = '46';
    i++;
    quaternary_f = 0;
    
    for(float r = 0.1, m = 0; m < 5; m++, r /= 10, i ++){
        // quaternary_f += int(decimal_fract * 5) * r;
        array[i] = int(decimal_fract * 5);
        decimal_fract = decimal_fract * 5 - int(decimal_fract * 5);
    }
    
    for(int j = pointer + 1; j < i; j++){
        cout << array[j];
    }
    
    
//    cout << "\nThis number in 5 ns: ";
//    for(int j = 0; j < i + 1; j++){
//        cout << array[i-j];
//    }
    
    cout << '\n';
       
       
    
    
    
    
    
    
    
    
    
    
    
    
    
//    double number;
//    double decimal = 0;
//    int array[100] {0};
//
//    // cin >> number;
//    number = 26.5;
//    int number_int = number;
//
//    double number_d = number - number_int;
//
//    for(int r = 1; number_int > 0; r *= 13){
//        decimal += ( (int) number_int % 10) * r;
//        number_int /= 10;
//    }
//
//
//
//    for(double r = 1.0/13, comparison = 0, d = 0.1; comparison < number_d; r /= 13, d /= 10){
//
//        decimal += (int(number_d / d) % 10 ) * r;
//        comparison += (int(number_d / d) % 10) * d;
//    }
//
// cout << decimal << '\n';
    
    
    
    
    

    
//    for(int i = 0; number < 13; i++){
//        array[i] = (int) number % 13;
//        number = number / 13;
//        decimal += number * pow(10, i);
//
//        if (number < 13) {
//            array[i+1] = number;
//            decimal += number * pow(10, i);
//        }
//    }
    

    return 0;
}

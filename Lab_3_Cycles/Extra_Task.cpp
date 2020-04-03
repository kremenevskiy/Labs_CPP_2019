#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int lenght(int n)
{
    int count = 0;
    while(n != 0)
    {

        n /= 10;
        count += 1;
    }
    return count;
}

int main()
{

/*
    // task 1
    int x = 0, i = 10, firstDigit, secondDigit;

    for(i = 10; i < 100; i++){
        firstDigit = i / 10;
        secondDigit = i % 10;

        if(pow(firstDigit + secondDigit, 3) == pow(i, 2)){
            x = i;
            cout << "That number: " << x << endl;
        }

    }
*/



    int k;
    int number;
    int number_on_position_k;



    cout << "What number do you want to ptint: ";
    cin >> k;
    int entered = k;


    for(number = 1; lenght(number) <= k; k = k - lenght(number), number ++)
    {
        cout << "number : " << number << endl; // optional
        cout << "current k: " << k << endl; // optional

        if (lenght(number) >= k)
        {
            break;
        }

    }

    //  now find number which stay on the k position from left


    cout << "last number: " << number << endl; // optional


    // delete right part of our number

    while( k != lenght(number))
    {
       number = number / 10;

    }

    number_on_position_k = number % 10;

    cout << "Number = " << number_on_position_k << " is staying on the " << entered << " positon in" << endl;
    cout << "row : ";
    for (int i = 1; i <= entered; i++)
    {
        cout << i;
        if (i == entered)
        {
            cout << endl;
        }

    }





    return 0;
}

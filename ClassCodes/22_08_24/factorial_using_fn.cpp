/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int factorial(int num) {
    if (num == 0 || num == 1){
        return 1;
    }else{
        return (num*factorial(num-1));    
    }
}

int main()
{
    int number;
    cin>> number;
    cout << factorial(number);
    return 0;
}
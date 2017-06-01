//
//  main.cpp
//  Review7
//
//  Created by Mauricio Matsubara on 30/05/17.
//  Copyright © 2017 Mauricio Matsubara. All rights reserved.
//

/*
 
 1. Create a function that calculates the factorial of the number 5
 
 2. Create a function that calculates the factorial of any number

 https://www.youtube.com/watch?v=_OmRGjbyzno&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO
 */

#include <iostream>

/*
 
 Function: factorial
 Parameters: int, bool (optional)
 Return: int
 Description: returns the factorial of a number (passed as parameter). If a second parameter is passed as true, additional debug info goes to the output
 
 */

// global variable! Caution! Use wisely!
//bool bDebug;

int factorial (int b, bool debug = false) {
    if (b==0){
        return 1;
    }
    else {
        int c;
        if (debug) {
            std::cout << "Entrou em factorial b=" << b << "\n";
        }
        c = b * factorial(b-1, debug);
        if (debug){
            std::cout << "Retornando c=" << c << "\n";
        }
        return c;
    }
}

int main(int argc, const char * argv[]) {
    int b;
    //bDebug = false; //let's try to avoid using global variables
    
    std::cout<<"Give me a value for b:";
    std::cin >> b;
    std::cout<< factorial(b) << "\n";
    std::cout<< factorial(6, true); //I want debug info only on this one!
}

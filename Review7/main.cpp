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
int factorial5 (void){
    return 5*4*3*2*1;
    
}

int factorial (int b){
    if (b==1){
        return 0;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    int a;
    a = factorial5();
    std::cout << a << "\n";
    return 0;
}

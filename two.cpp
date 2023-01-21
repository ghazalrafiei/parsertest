#include <iostream>
#include "gtest/gtest.h"
// #include "Prime_Assignment.cpp"

int ReturnTwo(int t){
    int x = 2;
    return x;
}

bool is_prime(int n){
    if (n==2)
        return true;
    
    for(int i = 2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

// int main(){
//     std::cout<<"Hello World.";
//     return 0;
//     // std::cout<<is_prime(12)<<'\n';
//     // std::cout<<is_prime(2)<<'\n';
//     // std::cout<<is_prime(3)<<'\n';
//     // std::cout<<is_prime(15)<<'\n';
//     // std::cout<<is_prime(127);
// }
#include <iostream>

bool is_prime(int n){
    if (n==2)
        return true;
    
    for(int i = 2; i<n; i++){
        if(n%i==0){
            return true;
        }
    }
    return false;
}


int main(){
    std::cout<<is_prime(12)<<'\n';
    std::cout<<is_prime(2)<<'\n';
    std::cout<<is_prime(3)<<'\n';
    std::cout<<is_prime(15)<<'\n';
    std::cout<<is_prime(127);
    return 0;
}
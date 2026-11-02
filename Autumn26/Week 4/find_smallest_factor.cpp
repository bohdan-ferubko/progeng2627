#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){
        if((n % cf) == 0){ // n can be divided by cf...
            return cf;
            // ...it means we have found a factor!
        }
    }
    return n;
}

int main(){
    int n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    int sf = smallest_factor(n);

    std::cout << "the smallest factor of " << n << " is " << sf << std::endl;
}

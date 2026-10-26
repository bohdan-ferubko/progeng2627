#include <iostream>
int main(){
   int n, rem;
   std::cout << "please enter a number" << std::endl;
   std::cin >> n;
   rem = n % 3;
   if (rem == 0){
       std::cout << "the number a multiple of 3" << std::endl;
   }
   else{
       std::cout << "the number is not a multiple of 3" << std::endl;
   }
   // later we will upgrade this example to
   // instead print a message saying
   // "the number is even" or "the number is odd"
   // depending on the value of the remainder
}

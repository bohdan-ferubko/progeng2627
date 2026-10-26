#include <iostream>
#include <cmath>
int main(){
   int a,b,c,d;
   std::cout << "Enter the initial position " << std::endl;
   std::cin >> a >> b;
   std::cout << "Enter the final position " << std::endl;
   std::cin >> c >> d;
   if (a > 8 || b > 8 || c > 8 || d > 8 || a < 1 || b < 1 || c < 1 || d < 1)
   {
       std::cout << "Not a valid move/position";
   }
   else
   {
       if ((std::abs(a-c) == 1 && std::abs(b-d) == 2) || (std::abs(a-c) == 2 && std::abs(b-d) == 1)){
           std::cout << "the move is possible" << std::endl;
       }
       else{
           std::cout << "the move is not possible" << std::endl;
       }
   }
}

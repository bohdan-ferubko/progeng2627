#include <iostream>
#include <string>
int main(){
   double celsius, equivalent;
   std::cout << "enter the temperature in celsius" << std::endl;
   std::cin >> celsius;
   equivalent = (celsius * 9 / 5.0) + 32;
   std::cout << "temperature in farenheit is " << equivalent  << std::endl;
}

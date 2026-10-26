#include <iostream>
#include <string>
int main(){
   double amount, exchange_rate, equivalent;
   std::cout << "enter the amount of pounds" << std::endl;
   std::cin >> amount;
   std::cout << "enter the exchange rate" << std::endl;
   std::cin >> exchange_rate;
   equivalent = amount * exchange_rate;
   std::cout << "equivalent in EUR is " << equivalent  << std::endl;
}

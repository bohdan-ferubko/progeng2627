#include <iostream>
#include <string>
#include <stdexcept>
int main(){
   std::string n;
   int a;
   while (true) {
       std::cout << "Enter n please" << std::endl;
       std::cin >> n;
       if (n == "Stop" || n == "stop" || n == "STOP") {
           return 0;
       }
       try {
           a = std::stoi(n);
       }
       catch (const std::invalid_argument&){
           std::cout << "Invalid numeric string" << std::endl;
           continue;
       }
       if ((a>-11) && (a<11)){
           std::cout << n << std::endl;
       }
       else{
           std::cout << "n is out of range" << std::endl;
       }
   }
}

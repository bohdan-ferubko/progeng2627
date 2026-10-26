#include <iostream>
#include <string>
int main(){
   double weight, height, BMI;
   std::cout << "enter your weight" << std::endl;
   std::cin >> weight;
   std::cout << "enter your height" << std::endl;
   std::cin >> height;
   BMI = weight / (height * height);
   std::cout << "your BMI is " << BMI  << std::endl;
}

#include <iostream>
#include <cmath>
int main(){
   double a, b, c;
   std::cout << "Enter three side lengths: ";
   std::cin >> a >> b >> c;
if ((a + b > c) && (a + c > b) && (b + c > a)) {
   if (a == b || a == c || b == c){
           if (a == b && b == c) {
               std::cout << "The triangle is equilateral" << std::endl;
           }
           else{
               std::cout<< "The triangle is isosceles" << std::endl;
           }
   }
   else{
       std::cout << "The triangle is scalene" << std::endl;
   }
   double s = (a+b+c)/2.0;
   std::cout << "The perimeter is " << 2*s << std::endl;
   std::cout << "The area is " << sqrt(s*(s-a)*(s-b)*(s-c)) << std::endl;
}
else{
       std::cout << "The triangle is not valid" << std::endl;
   }
}

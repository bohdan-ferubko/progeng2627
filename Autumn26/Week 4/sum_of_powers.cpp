#include <iostream>
#include <cmath>
double x,n;
double sum_of_powers(double x, double n){
   double sum=0;
   for(int i=1; i<=n; i++) {
       sum += std::pow(x,i);
   }
   return sum;
}
int main(){
std::cin >> x >> n;
std::cout << sum_of_powers(x,n) << std::endl;
}

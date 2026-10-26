#include <iostream>
double mypow(double base, int exp){
   double result;
   result = 1;
   int i=0;
   if (exp<0){
       base = 1/base;
       exp = (-1)*exp;
   }
   for(i=1;i<=exp;i++){
       result*=base;
   }
   // we declare a variable for the result
   // (should it be initialised? to what value?)
   // TODO: use a for loop to implement the repeated multiplication algorithm
   // so that at the end of the loop variable result contains base^exp
   return result;
   // at the end we return the value we computed
   // we *do not print* anything in the function
}
int main(){
   // we test examples with integer (and non-negative) exponent
   std::cout << "2^3: " << mypow(2, 3) << std::endl;
   std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
   std::cout << "1^0: " << mypow(1, 0) << std::endl;
   std::cout << "2^-5: " << mypow(2, -5) << std::endl;
}

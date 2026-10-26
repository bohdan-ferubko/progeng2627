#include <iostream>
double mypow(double base,int exp){
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
  return result;
}
double total_sum(double base, int exp){
   double sum = 0;
   for(exp=exp;exp>=1;exp-=1){
       sum+=mypow(base,exp);
   }
   return sum;
}
int main(){
   // we test examples with integer (and non-negative) exponent
   std::cout << "2^3: " << total_sum(2, 3) << std::endl;
   std::cout << "0.5^2: " << total_sum(0.5, 2) << std::endl;
   std::cout << "1^0: " << mypow(1, 0) << std::endl;
   std::cout << "2^-5: " << mypow(2, -5) << std::endl;
}

#include <iostream>

long long int gcd_fast(int a, int b) {
  if(a==0){
    return b;
  }else if(b==0){
    return a;
  }
  if(a>b){
    return gcd_fast(b,a%b);
  }else{
    return gcd_fast(a,b%a);
  }
}

long long int lcm_fast(int a, int b) {
  long long int temp = (long long)a*b;
  long long gcd = gcd_fast(a,b);
  return temp/gcd;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}

#include <iostream>

int gcd_fast(int a, int b) {
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

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_fast(a, b) << std::endl;
  return 0;
}

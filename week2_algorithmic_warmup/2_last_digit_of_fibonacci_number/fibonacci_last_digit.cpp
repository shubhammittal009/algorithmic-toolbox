#include <iostream>

int get_fibonacci_last_digit_fast(int n) {
    if(n<=1){
        return n;
    }
    int a=0,b=1,c,i;
    for(i=2; i<=n; i++){
        c=(a+b)%10;
        a=b;
        b=c;
    }
    return b%10;
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_fast(n);
    std::cout << c << '\n';
    }

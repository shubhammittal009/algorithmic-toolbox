#include <iostream>
#include <cassert>

int fibonacci_fast(int n) {
    if(n<=1){
        return n;
    }
    int a=0,b=1,c,i;
    for(i=2; i<=n; i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}

int main() {
    int n = 0;
    std::cin >> n;
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}

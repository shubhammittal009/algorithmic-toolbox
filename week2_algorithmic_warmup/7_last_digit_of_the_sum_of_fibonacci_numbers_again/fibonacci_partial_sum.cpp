#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

long long get_fibonacci_partial_sum_fast(long long from, long long to) {
    long long sum = 0;

    vector<ll> v(60);
    v[0]=0;
    v[1]=1;

    for(int i=2; i<60; i++){
        v[i] = v[i-1]+v[i-2];
    }

    from%=60;
    to%=60;

    if(to<from)
        to+=60;

    for(int i=from; i<to+1; i++){
        sum+=v[i%60];
    }

    return sum % 10;
}

int main() {
    long long from, to;
    std::cin >> from >> to;
    std::cout << get_fibonacci_partial_sum_fast(from, to) << '\n';
}

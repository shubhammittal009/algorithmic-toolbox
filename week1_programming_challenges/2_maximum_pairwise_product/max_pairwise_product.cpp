#include <iostream>
#include <vector>
#include <algorithm>
typedef long long int ll;

ll MaxPairwiseProduct(const std::vector<ll>& numbers) {
    ll max_product = 0;
    int n = numbers.size();
    std::vector<ll> temp = numbers;
    std::sort(temp.begin(), temp.end());
    max_product = temp[n-1]*temp[n-2];
    return max_product;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<ll> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}

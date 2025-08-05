#include <iostream>
using namespace std;

int main() {
    return recursiveSum(5) == 15 && sum(5) == 15 ? 0 : 1;
}

int sum(int n) {
    int ret = 0;
    for (int i = 1; i <= n; ++i) {
        ret += i;
    }
    return ret;
}

int recursiveSum(int n) {
    if (n == 1) return 1;
    return n + recursiveSum(n - 1);
}
#include <iostream>
using namespace std;

class Prime {
public:
    int n, i;
    void check() {
        cin >> n;
        for(i = 2; i < n; i++)
            if(n % i == 0) break;

        if(i == n) cout << "Prime";
        else cout << "Not Prime";
    }
};

int main() {
    Prime p;
    p.check();
}

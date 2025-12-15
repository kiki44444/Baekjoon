#include <iostream>

using namespace std;



long long factorial(int n){
    if (n == 1) return 1;
    return factorial(n - 1) * n;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    if(N == 0) cout << 1;
    else cout << factorial(N);
}
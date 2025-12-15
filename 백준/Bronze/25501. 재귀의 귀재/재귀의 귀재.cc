#include <iostream>
#include <string>
using namespace std;

int cnt;

int func(const string& input, int l, int r){
    cnt ++;
    if (l >= r) return 1;
    else if (input[l] != input[r]) return 0;
    else return func(input, l+1, r-1);
}

int isPalindrome(const string& input){
    return func(input, 0, input.length()-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    string input;
    for(int i=0; i<N; i++){
        cin >> input;
        cout << isPalindrome(input) << ' ' << cnt << '\n';
        cnt = 0;
    }
}
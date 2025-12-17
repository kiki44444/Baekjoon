#include <iostream>
#include <string>
#include <cmath>
using namespace std;


void recursion(string& line, int l, int r){
    int len = r - l + 1;
    if(len < 3) return;

    int mid_start = l + len / 3;
    int mid_end = l + len / 3 * 2 - 1;

    for(int i=mid_start; i<mid_end + 1; i++){
        line[i] = ' ';
    }

    recursion(line, l, mid_start - 1);
    recursion(line, mid_end + 1, r);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string line;
    while (cin >> N){
        line = string(pow(3, N), '-');
        recursion(line, 0, pow(3, N) - 1);
        cout << line << '\n';
    }
}
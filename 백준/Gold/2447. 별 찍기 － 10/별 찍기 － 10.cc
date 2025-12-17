#include <iostream>
#include <vector>
using namespace std;

void recursion(vector<vector<char>>& arr, int r, int c, int N){
    if(N < 3) return;

    int len = N / 3;
    int row = r + len;
    int column = c + len;
    for(int i=row; i<row + len; i++){
        for(int j=column; j<column+len; j++){
            arr[i][j] = ' ';
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            recursion(arr, r + i * len, c + j * len, len);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<vector<char>> arr(N, vector<char>(N, '*'));
    recursion(arr, 0, 0, N);
    for(auto& row: arr){
        for(auto& column: row){
            cout << column;
        }
        cout << '\n';
    }
}
#include <iostream>
#include <vector>
using namespace std;

int cnt_recursion = 0;
int cnt_dynamic = 0;

int recursion(int N){
    
    if (N < 3){
        cnt_recursion ++;
        return 1;
    }else return recursion(N - 1) + recursion(N - 2);
}

void dynamic(int N){
    vector<int> fibo(N+1);
    for(int i=1; i<N+1; i++){
        if(i == 1 || i == 2){
            fibo[i] = 1;
        }else{
            cnt_dynamic ++;
            fibo[i] = fibo[i-1] + fibo[i-2];
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    recursion(N);
    dynamic(N);
    cout << cnt_recursion << ' ' << cnt_dynamic;
}
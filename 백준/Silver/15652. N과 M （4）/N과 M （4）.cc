#include <iostream>
#include <vector>
#define MAX 9
using namespace std;


int N, M;
int arr[MAX];

void dfs(int cnt){
    if(cnt == M){
        for(int i=0; i<M; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=1; i<N+1; i++){
        if(cnt == 0){
            arr[cnt] = i;
            dfs(cnt + 1);
        }else{
            if(arr[cnt-1] <= i){
                arr[cnt] = i;
                dfs(cnt + 1);
            }
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    dfs(0);
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int target;
long long K, cnt;


void mergesort(vector<int>& A, int l, int r){
    if(l < r){
        int q = (l + r) / 2;
        mergesort(A, l, q);
        mergesort(A, q+1, r);
        
        int i = l;
        int j = q+1;
        vector<int> temp;

        while(i <= q && j <= r){
            if(A[i] < A[j]){
                temp.push_back(A[i++]);
            }else{
                temp.push_back(A[j++]);
            }
            cnt ++;
            if(cnt == K){
                target = temp.back();
            }
        }

        while(j <= r){
            temp.push_back(A[j++]);
            cnt++;
            if(cnt == K){
                target = temp.back();
            }
        }
        
        while(i <= q){
            temp.push_back(A[i++]);
            cnt++;
            if(cnt == K){
                target = temp.back();
            }
        }

        i = l;
        int t = 0;
        while(i <= r){
            A[i++] = temp[t++];
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, input;
    vector<int> A;
    cin >> N >> K;
    for(int i=0; i<N; i++){
        cin >> input;
        A.push_back(input);
    }
    cnt = 0;
    mergesort(A, 0, N - 1);

    if(cnt < K){
        cout << -1;
    }else{
        cout << target;
    }
}
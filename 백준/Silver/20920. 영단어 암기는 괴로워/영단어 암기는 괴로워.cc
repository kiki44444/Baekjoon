#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool compare(const pair<string, int>& l, const pair<string, int>& r){
    if(l.second != r.second){
        return l.second > r.second;
    }else if(l.first.length() != r.first.length()){
        return l.first.length() > r.first.length();
    }else{
        return l.first < r.first;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    string str;
    map<string, int> m;

    cin >> N >> M;

    while(N--){
        cin >> str;
        if(str.size() >= M){
            m[str] ++;
        }
    }

    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), compare);

    for(auto& x: v){
        cout << x.first << '\n';  
    }

}
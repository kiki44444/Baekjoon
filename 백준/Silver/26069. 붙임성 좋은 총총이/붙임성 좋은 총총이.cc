#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string a, b;
    cin >> n;
    set<string> s = {"ChongChong"};
    for(int i=0; i<n; i++){
        cin >> a;
        cin >> b;
        for(auto x: s){
            if(x == a || x == b){
                s.insert(a);
                s.insert(b);
                break;
            }
        }
    }
    cout << s.size();
}
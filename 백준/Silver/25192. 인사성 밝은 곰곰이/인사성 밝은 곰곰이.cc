#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int cnt = 0;
    string input;
    set<string> s;

    while(n--){
        cin >> input;
        if(input == "ENTER"){
            cnt += s.size();
            s.clear();
            continue;
        }
        s.insert(input);
    }
    cnt += s.size();
    cout << cnt;
}
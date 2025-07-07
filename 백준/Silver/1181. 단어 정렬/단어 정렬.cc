#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <utility> // for "pair" data type
#include <algorithm> // for "sort"
using namespace std;


bool compare(string a, string b){
    if(a.length() != b.length()){
        return a.length() < b.length();
    }else{
        return a < b;
    }
}
int main(){
    int N;
    string input;
    vector<string> v;
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> input;
        v.push_back(input);
    }
    set<string> s(v.begin(), v.end()); // 중복 제거
    vector<string> uniqueV(s.begin(), s.end());
    sort(uniqueV.begin(), uniqueV.end(), compare);
    for(int i = 0; i < uniqueV.size(); ++i){
        cout << uniqueV[i] << '\n';
    }
    return 0;
}
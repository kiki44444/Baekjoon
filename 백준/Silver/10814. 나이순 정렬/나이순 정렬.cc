#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <utility> // for "pair" data type
#include <algorithm> // for "sort"
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;
}

int main(){
    int N, age;
    string name;
    vector<pair<int, string>> v;
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> age >> name;
        v.push_back(make_pair(age, name));
    }
    stable_sort(v.begin(), v.end(), compare);
    for(int i = 0; i < N; ++i){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
    return 0;
}
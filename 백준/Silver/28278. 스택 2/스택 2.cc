#include <iostream>
#include <stack>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, command;
    stack<int> stack;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> command;
        switch (command)
        {
        case 1 :
            int input;
            cin >> input;
            stack.push(input);
            break;
        case 2 :
            if(!stack.empty()){
                cout << stack.top() << '\n';
                stack.pop();
                
            }else{
                cout << -1 <<'\n';
            }
            break;
        case 3 :
            cout << stack.size() << '\n';
            break;
        case 4 :
            if(stack.empty()){
                cout << 1 << '\n';
            }else{
                cout << 0 << '\n';
            }
            break;
        case 5 :
            if(!stack.empty()){
                cout << stack.top() << '\n';
            }else{
                cout << -1 << '\n';
            }
            break;
        }
    }
}
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){

    string sequence;
    cin>>sequence;

    stack<char> s;

    int count = 0;


    for (char i:sequence){
        if(i=='(')s.push(i);

        if(i==')'){
            if(s.empty()||s.top() == ')')s.push(i);
            else s.pop();
        }
    }

    while(!s.empty()) {
        count++;
        s.pop();
    }


    cout<<count;
    return 0;
}
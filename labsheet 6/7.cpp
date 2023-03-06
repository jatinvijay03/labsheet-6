#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){

    stack <int>s;
    int n;
    cin>> n;
    int answer[n];

    int arr[n];

    for (int i = 0; i < n; ++i) {
        answer[i]  = 0 ;
        cin >>arr[i];
    }

    s.push(0);
    answer[0] = 1;

    for (int i = 1; i < n; ++i) {


        if(arr[s.top()]>arr[i]){
            answer[i] = 1;
            s.push(i);
        }
        else{
            while(!s.empty() && arr[s.top()]<=arr[i]) {

                s.pop();
            }
            if(s.empty())answer[i] = i+1;
            else
            answer[i] = i-s.top();
            s.push(i);
        }
    }

    for (int i = 0; i < n; ++i) {
        cout<<answer[i]<< " ";
    }

    return 0;
}
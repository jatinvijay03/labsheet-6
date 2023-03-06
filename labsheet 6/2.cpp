#include <iostream>
#include <stack>

using namespace std;

void next(int arr[], int n) {
    stack<int> s;
    int ans [n];

    for (int i = n-1;i>=0;i--){
        s.push(arr[i]);
    }
    for (int i = n-1; i >=0 ; --i) {
        int count = 1;
        while(!s.empty() && arr[i]>=s.top()){
            count++;
            s.pop();
        }
        if(s.empty())ans[i] = -1;
        else ans[i] = count;

        s.push(arr[i]);
    }

    for (int i = 0; i <n; ++i) {
        cout<<ans[i]<<" ";
    }
}

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    next(arr,n);


    return 0;
}
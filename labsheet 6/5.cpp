//
// Created by Jatin Vijay on 06/03/23.
//
#include <iostream>
#include <deque>

using namespace std;

void printMax(int arr[],int n, int k){
    deque<int> q(k);

    for (int i = 0; i < k; ++i) {
        while(!q.empty()&&arr[i]>=arr[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }

    for (int i = k; i < n; ++i) {
        cout<<arr[q.front()]<< " ";
        while(!q.empty() && q.front()<=i-k)q.pop_front();
        while ((!q.empty()) && arr[i] >= arr[q.back()])
            q.pop_back();
        q.push_back(i);
    }
    cout << arr[q.front()] << " ";
}

int main(){


    int n,k;
    cin>>n;
    cin>>k;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    printMax(arr,n,k);

    return 0;
}
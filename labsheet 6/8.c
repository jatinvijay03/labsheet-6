#include<stdio.h>

int main() {
    int n,k;
    scanf("%d %d", &n,&k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 1;
    }
    int j=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int a = 0; a < k-1; a++)
        {
            if(arr[j] == 0) {
                j++;
                if(j==n) j=0;
                a--;
                continue;
            }
            j++;
            if(j==n) {

                j=0;
            }
        }
        while(arr[j]==0) {
            j++;
            if(j==n) j=0;
        }
        arr[j] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 1) {
            printf("%d", i+1);
            break;
        }
    }
    return 0;
}
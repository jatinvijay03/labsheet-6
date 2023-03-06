//
// Created by Jatin Vijay on 06/03/23.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int queue[2*n-1];
    int front = (2*n-1)/2,end=(2*n-1)/2;


    for (int i = 0; i < n; ++i) {
        int element;
        scanf("%d",&element);
        if(i ==0){
            queue[end++] = element;
        }
        else{
            if(queue[front]>=element){
                queue[--front] = element;
            }else queue[end++] = element;
        }

    }

    for (int i = front; i <end ; ++i) {
        printf("%d ",queue[i]);
    }

    return 0;
}

#include <iostream>

using namespace std;

class MinStack {
private:
    int n;
    int tos;

    int stack[1000000];
    int min;
    int aux[1000000];
public:
    MinStack() {
        int num;

        cin >> num;
        n = num;
        tos = -1;
        for (int i = 0; i < n; ++i) {


            cin >> stack[i];
            if (i == 0)min = stack[i];
            min = stack[i] < min ? stack[i] : min;
            aux[i] = min;
            tos++;

        }
    }

    void push(int x) {
        tos++;
        if (tos >= n) {
            cout << "Stack is full\n";
            return;
        }
        stack[tos] = x;
        if (x < min)min = x;
        aux[tos] = min;
    }


    void pop() {
        tos--;
    }

    int top() {
        return stack[tos];
    }

    int getMin() {
        return aux[tos];
    }


};

int main() {


    MinStack stack = MinStack();

    while (true) {
        int function;
        cin >> function;
        switch (function) {

            case 1:
                int x;
                cin >> x;
                stack.push(x);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                cout<<stack.top()<<"\n";
                break;
            case 4:
                cout<<stack.getMin()<<"\n";
                break;
            default:
                break;
        }

    }

    return 0;
}
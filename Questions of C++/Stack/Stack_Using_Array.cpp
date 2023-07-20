/*
Stack: [IMPLEMENTATION USING ARRAY] ------------------------------->
=====================================================================
 >> Based on LIFO principal [Last In First Out].
 >> Operations of Stack:
    1. push(x); --> it push the element top.
    2. pop();   --> it pops the element from the top.
    3. top();   --> it always point to the top most element in stack.
    4. empty(); --> ~ it tells weather the stack is empty or not.
                    ~ if value is [-1] stack is empty otherwise not.
=====================================================================
*/

#include <bits/stdc++.h>
using namespace std;

#define n 100

class stock
{
    int *arr;
    int top;

public:
    stock()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        top++; // moving top pointer value above.
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "No Element to pop" << endl;
            return;
        }

        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "No Element in Stack" << endl;
            return -1;
        }

        return arr[top];
    }

    bool empty()
    {
        return (top == -1);
    }

    // void displayStack(){

    // }
};

int main()
{
    stock st;
    st.push(1);
    st.push(2);
    st.push(3);
    // st.display(st);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    if (st.empty())
    {
        cout << "Stack is Empty" << endl;
    }
    return 0;
}
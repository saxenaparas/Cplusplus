#include <bits/stdc++.h>
using namespace std;
febonacciSeries(int n){
    int t1 = 0, t2 = 1, t3;
    if(n == 1){
        cout << t1 << " ";
        n--;
    }
    if(n == 1){
        cout << t2 << " ";
        n--;
    }
    while(n > 0){
        t3 = t2 + t1;
        cout << t3 << " ";
        t1 = t2;
        t2 = t3;
        n--;
    }
}

febonacciTerm(int n)
{
    int t1 = 0,t2 = 1,t3;
    if(n == 1){
        return t1;
    }
    if(n == 2){
        return t2;
    }
    while(n > 0){
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        n--;
    }
    return t3;
}

int main()
{
    int n;
    cout << "Enter The Number : ";
    cin >> n;
    febonacciSeries(n);
    cout << endl;
    cout << febonacciTerm(n);
    return 0;
}
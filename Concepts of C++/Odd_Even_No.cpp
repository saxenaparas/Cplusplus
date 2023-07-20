#include <iostream>
using namespace std;
 
int main()
{
    int num;
    cout<<"Enter the Number : \n";
    cin>>num;

    cout<<"The Given No. ["<<num<<"] is : ";
    if(num%2==0)
    {
        cout<<"EVEN";
    }
    else
    {
        cout<<"ODD";
    }
    return 0;
}
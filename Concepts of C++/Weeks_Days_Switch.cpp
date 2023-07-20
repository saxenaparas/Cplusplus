#include <iostream>
using namespace std;
 
int main()
{
    int days;
    cout<<"Enter The Day No. :: "<<endl;
    cin>>days;

    switch(days)
    {
        case 1: cout<<"Monday";
                break;
        case 2: cout<<"Tueday";
                break;
        case 3: cout<<"Wednesday";
                break;
        case 4: cout<<"Thusday";
                break;
        case 5: cout<<"Friday";
                break;
        case 6: cout<<"Saturday";
                break;
        case 7: cout<<"Sunday";
                break;
        default: cout<<"Invalid Day No.";
    }
    /* 
    Here, we have used the [break;] statement to 
    get from the switch satement after one case 
    being satisfied not the other cases to be printed.
    */
    return 0;
}
// main2 prefix to use my_defined snippet

#include <iostream>
using namespace std;
 
int main()
{
    // declaration
    int a;
    float b;
    char c;
    
    // initialisation
    a=20;
    b=30.98;
    c='A';

    cout<<"The size of int : "<<sizeof(a)<<"\n";
    /*
    instead of ["\n"] we can use [endl] which 
    stands for end line, it ends the line their.
    */ 
    cout<<"The size of float : "<<sizeof(b)<<endl;
    cout<<"The size of char : "<<sizeof(c)<<"\n";

    cout<<"\n";

    // declaration & initialisation of type modifiers;
    short int si = 54; // for short values of integers both +ve & -ve;
    long int li; // for large value of integers both +ve & -ve;
    long long int lli; // for extra large values of int;
    double d; // for large float values;
    long double ld; // for extra large values of float;
    signed int sgi = 90; // regular values of integers both +ve & -ve;
    unsigned int usgi = 87; // only for positive values of integers from 0;
    
    cout<<"The size of short int : "<<sizeof(si)<<endl;
    cout<<"The size of long int : "<<sizeof(li)<<endl;
    cout<<"The size of long long int : "<<sizeof(lli)<<endl;
    cout<<"The size of double : "<<sizeof(d)<<endl;
    cout<<"The size of long double int : "<<sizeof(ld)<<endl;
    cout<<"The size of signed int : "<<sizeof(sgi)<<endl;
    cout<<"The size of unsigned int : "<<sizeof(usgi)<<endl;

    return 0;
}

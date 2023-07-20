#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Input Character Array Size : ";
    cin >> n;
    char arr[n+1];

    cout << "Input the character value : ";
    cin >> arr;

    //Palindromic Check (Optimized Code):
    bool flag = true;
    for (int i = 0; i < (n+1/2); i++) // (i)
    {
        if(arr[i] != arr[n-i-1]) // (ii)
        {
            flag = false;
            break; // (iii) 
        }
    }
    
    if (flag)
        cout << "Yes, it's a Palindromic Word";
    else
        cout << "No, it's not a Palindromic Word";
    return 0;
}

/*
(i)   - Here, we have put condition till (n+1/2) if we chk till (n) then after (n+1/2) 
        which is a middle block we are again chking the same conditions. 
(ii)  - Since, indexing starts from (0) and my last word will not be at (n) but at (n-1) and 
        at (n) their is null character So that's why their is [n-1-i] their instaed of [n-i].
(iii) - If any word didn't match then we don't want to chk further bcus simply it breaks the 
        condition of a palindromic word and hence, break through the loop saving time.

Brute Force Code : 
------------------
for (int i = 0; i < n; i++)
{
    if(arr[i] == arr[n-i])
        flag = true;
    else
        flag = false;
}

In Function Form (Optimized Code) :
-----------------------------------
bool chkPalindrome(char array, int s)
{
    for (int i = 0; i < (s/2); i++)
    {
        if(array[i] != array[s-i-2])
        {
            return false;
        }
    }
    return true;
}
*/
/*
Largest Word in a Sentence :
==========================================================================
 >> Update the answer after each space which comes in sentence.
 >> In general if we use [cin >> arr] than we can't store a sentence bcus 
    after giving space it stores the next characters in other variables. 
    So, to avoid this we use .getline function. 
    -----> Syntax : [cin.getline(array, size)].
 >> [cin.ignore()] we use it to clear the buffer created due to the use of 
    [.getline()] function. If we don't use this then .getline didn't work.
==========================================================================
*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cout << "Enter the Size of Array : ";
    cin >> n;
    cin.ignore();
    char arr[n+1];
    cout << "Enter the Sentence: ";
    cin.getline(arr, n);  
    cin.ignore();

    // Optimized Code : To get both the word and it's length.
    int ans = 0, count = 0, lt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == '\0')
            break;
        else if(arr[i] != ' ')
            count++;
        else if (count > ans)
        {
            lt = i-1;
            ans = count;
            count = 0;
        }
    }

    cout << "The length of the longest word is : " << ans << endl;
    
    // To print the longest word :
    cout << "The Longest Word Will Be : "; 
    for (int i = (lt - ans); i >= lt ; i++)
    {
        cout << arr[i];
    }
    
    return 0;
}

/*
Brute Force Approach:
--------------------------------------------------------------------------
 >> Here, we are chking till the size [n] of the array we have alloted not 
    till the size of the sentence i.e. till null character ['\0'].
--------------------------------------------------------------------------
for (int i = 0; i < n; i++) 
{
    if(arr[i] != ' ')
        count++;
    else
    { 
        ans = max(ans, count);
        count = 0;
    }
}
==========================================================================
Improved Code :
--------------------------------------------------------------------------
Here, we use while loop :-------------------------------------------------
[while(1)] here, (1) denoted true i.e. go till infinity.
--------------------------------------------------------------------------
while(1)
{
    if(arr[i] == ' ' || arr[i] == '\0')
    {
        if(count > ans)
        {
            ans = count;
        }
        count = 0;
    }

    else
    count++;

    if(arr[i] == '\0')
        break;
    i++;
} 
--------------------------------------------------------------------------
// Optimized Code : just to find the longest word
    int ans = 0, count = 0, st = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == '\0')
            break;
        else if(arr[i] != ' ')
            count++;
        else
        { 
            ans = max(ans, count);
            count = 0;
        }
    }
----------[To know more chk lecture 28 C++]-------------------------------
*/
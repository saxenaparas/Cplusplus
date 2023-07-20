/*
Reversing A Sentence Using Stack :
==================================
*/

#include <iostream>
#include <stack>
using namespace std;

void ReverseSentence(string s)
{
    stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {
        string word = ""; // intializing a temprory variable.
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word); // pusing each word in stack.
    }

    while (!st.empty())
    {
        cout << st.top() << " "; // now using LIFO rule to get reversed sentence.
        st.pop();
    }
    cout << endl;
}

int main()
{
    string s = "Hey, how are you doing?";
    ReverseSentence(s);
}
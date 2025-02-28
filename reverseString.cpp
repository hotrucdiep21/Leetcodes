#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void reverseString(vector<char> &s)
{
    int l = 0;
    int r = s.size() - 1;
    while (l < r)
    {
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l++;
        r--;
    }
    for (char result : s)
    {
        cout << result << " ";
    }
}

void reserveStringRecursion(vector<char> &s)
{
    stack<char> st;
    for (char c : s)
    {
        st.push(c);
    }

    int i = 0;
    while (!st.empty())
    {
        s[i++] = st.top();
        st.pop();
    }

    for (char result : s)
    {
        cout << result << " ";
    }
}
int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    // reverseString(s);
    reserveStringRecursion(s);

    return 0;
}
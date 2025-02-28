#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

bool isAnagramMap(string s, string t)
{
    if (s.length() != t.length())
        return false;

    unordered_map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
        m[t[i]]--;
    }

    for (auto it : m)
    {
        if (it.second != 0)
        {
            return false;
        }
    }

    return true;
}

bool isAnagramArray(string s, string t)
{
    if (s.length() != t.length()) return false;

    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
        arr[t[i] - 'a']--;
    }

    for(int c : arr) {
        if (c != 0) return false;
    }

    return true;
}

int main()
{
    cout << boolalpha;
    string s = "anagrbam";
    string t = "nagaraam";

    cout << isAnagramMap(s, t);
    cout << isAnagramArray(s, t);
    return 0;
}
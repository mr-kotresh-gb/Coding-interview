/*Problem -> https://hack.codingblocks.com/app/practice/6/p/1121 */
#include<bits/stdc++.h>
using namespace std;

string extractstrtokens(string str, int key)
{
    char *s = strtok((char *)str.c_str()," ");
    while(key > 1)
    {
        s = strtok(NULL," ");
        key--;
    }
    return (string)s;
}

int convertToInt(string s)
{
    int a = 0;
    int p = 0;
    for(int i = s.length() - 1; i >= 0; i--)
    {
        a += ((s[i]-'0')*p);
        p *= 10;
    }
    return a;
}

bool numCompare(pair<string,string> s1, pair<string,string> s2)
{
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;
    return convertToInt(key1) < convertToInt(key2);
}

bool lexCompare(pair<string,string> s1, pair<string,string> s2)
{
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;
    return key1 < key2;
}

int main()
{
    int n, key;
    string a[100], rev, ord;
    cin >> n;
    cin.get();
    for(int i = 0; i < n; i++)
    {
        getline(cin, a[i]);
    }
    cin >> key >> rev >> ord;

    pair<string,string> strPair[100];
    for(int i = 0; i < n; i++)
    {
        strPair[i].first = a[i];
        strPair[i].second = extractstrtokens(a[i], key);
    }

    //Sorting
    if(ord == "numeric"){
        sort(strPair, strPair + n, numCompare);
    }
    else{
        sort(strPair, strPair + n, lexCompare);        
    }

    if(rev == "false"){
        for(int i = 0; i < n; i++)
        {
            swap(strPair[i], strPair[n-i-1]);
        }
    }

    //Printing
    for(int i = 0; i < n; i++)
    {
        cout << strPair[i].first << endl;
    }
    return 0;
}

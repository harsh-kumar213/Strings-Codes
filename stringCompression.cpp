#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    int arr[26];

    int n = s.length();
    int i = 0;
    while(i<n)
    {
      int c  = s[i] - 'a';
      arr[c]++; 
    }

    string ns;
    for(int i = 0; i<26;i++)
    {
        if(arr[i]>0&& arr[i]==1)
        {
            char ch = arr[i] + 'a';
            ns.push_back(ch);
            
        }
        else if(arr[i]>1)
        {
            char ch = arr[i] + 'a';
            ns.push_back(ch);
            ns.push_back(arr[i]);
        }
        else{
            i++;
        }
    }
    cout<<ns;
    for(int i = 0; i<ns.length(); i++)
    {
        cout<<ns[i]<<" ";
    }
    return 0;
}
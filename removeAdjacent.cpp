#include<iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s); 

    int i = 0;
    int n = s.length();
    while(i<n)
    {
        if(s[i]==s[i+1])
        {
            s.erase(i,2);
            i = 0;
        }
        else{
            i++;
        }
    }
    cout<<s;
    return 0;
}
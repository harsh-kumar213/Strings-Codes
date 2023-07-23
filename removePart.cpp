#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    int i = 0;
    int length = s.length();
    while(i<length)
    {
        if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c')
        {
            s.erase(i,3);
            i = 0;
        }
        else{
            i++;
        }
    }
    cout<<s;

    return 0;
}
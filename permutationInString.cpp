#include<iostream>
using namespace std;

int getLength(string s1)
{
    int i = 0,count = 0;
    while(s1[i]!='\0')
    {
        count++;
    }
    return count;
}

string getReverse(string s1,int n)
{
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        char ch = s1[i];
        s1[i] = s1[j];
        s1[j] = ch;
        i++;
        j--;
    }
    return s1;
}

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
     
     int length = getLength(s1);
   string  reverse = getReverse(s1,length);

   if((s2.find(s1)<s2.length())||( s2.find(reverse)<s2.length()))
   {
    cout<<"permutation is present";
   }
   else{
    cout<<"permutation is not present";
   }

    return 0;
}
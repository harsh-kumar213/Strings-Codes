#include<iostream>
using namespace std;

void reverseWord(string temp2,int length,string temp1 )
{
    int s = 0;
    int e= length -1;
    while(s<e)
    {
        swap(temp2[s],temp2[e]);
        s++;
        e--;
    }

     s = 0;
    while(s<length)
    {
        temp1.push_back(temp2[s]);
        s++;
    }
    
}

int getLength(string temp2)
{
    int i = 0,count = 0;
    while(temp2[i]!='\0')
    {
       count++;
       i++;
    }
    return count;
}

int getWord(string name, int i,string temp2)
{
    if(name[i]!='\0')
    {
         while(name[i]!=' '|| name[i]!='\0')
        {
            temp2.push_back(name[i]);
            i++;
            
        }
    }
   
    return i ;
}

int main()
{
    string name;
    string temp1,temp2;
    getline(cin,name);
    for(int i = 0; name[i]!='\0';)
    {
        if(name[i]!=' ')
        {
        temp2 = "";
        i= getWord(name,i,temp2);
        
        cout<<temp2;

        int length =  getLength(temp2);
        
        reverseWord(temp2,length,temp1);

    }
    else{
        temp1.push_back(' ');
    }
    }

    cout<<temp1;
    
    return 0;
}
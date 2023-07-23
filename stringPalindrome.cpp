#include<iostream>
using namespace std;
int getLength(char name[])
{
    int count = 0;
    for(int i = 0; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[10];
    cin>>name;
    int s = 0;
    int e = getLength(name) - 1;
    
    while(s<e)
    {
        if(name[s]==name[e])
        {
              s++;
              e--;
        }
        else{
            break;
        }
    }
    if(s==e)
   {
    cout<<"it is a palindrome";
   }
   else{
    cout<<"it is not a palindrome";
   }




    return 0;
}
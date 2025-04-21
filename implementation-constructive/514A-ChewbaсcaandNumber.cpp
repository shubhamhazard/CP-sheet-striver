#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
    string str;
    cin>>str;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]>='5')
            str[i] = '9'-str[i]+'0';
        if(str[0] == '0')
            str[i] = '9';
    }
    cout<<str;
    return 0;
}
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
 
int main()
{
    string s;
    int ile=0;
    ifstream we("dane.txt");
    ofstream wy("wyniki.txt");
 
     while(getline(we,s))
     {
         if(s[0]==s[s.length()-1])ile++;
     }
 
     string str(s);
     
    for(unsigned i=0; i<str.length(); i++)
    {
        if(str[0]==str[str.length()-1])ile++;
    }
    cout<<ile<<endl;
 
    return 0;
}

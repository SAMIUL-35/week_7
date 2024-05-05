#include <iostream>
#include <string>
 
using namespace std;
 
 
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int zero=0;
        int one=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='1') one++;
            else zero++;
        }
         for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='1')
            {
                 if(zero>0 )zero--;
                 else break;
            }
            else 
            {
                if(one>0 )one--;
                 else break;
            }
        }
        cout<<zero +one<<endl;
    }
    return 0;
}
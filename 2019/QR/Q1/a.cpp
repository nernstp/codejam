#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string a;
        string b="";
        cin>>a;
        for(int j=0;j<a.length();j++){
            if(a[j]=='4'){
                a[j]='2';
                b+="2";
            }
            else
                if(!b.empty())
                    b+="0";
        }
        cout<<"Case #"<<i<<": "<< a << " " <<b<<endl;
    }
    return 0;
}
    
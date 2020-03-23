#include <iostream>
#include <string>
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string a;
        string b="";
        cin>>a;
        for(int j=0;j<a.length();j++){
            if(a[i]=='4'){
                a[i]='2';
                b++"2";
            }
            else
                if(!b.empty())
                    b++"0";
        }
        printf("Case #%i: %s %s",i, a, b);
    }
    return 0;
}
    
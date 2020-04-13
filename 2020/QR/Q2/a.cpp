#include <iostream>
#include <string> 

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string s;
        cin>>s;
        int l=0;
        string result="";
        for(int j=0;j<s.length();j++){
            while(l<s[j]-'0'){
                result+='(';
                l++;
            }
            
            while(l>s[j]-'0'){
                result+=')';
                l--;
            }
            result+=s[j];
        }
        while(l){
            result+=')';
            l--;
            
        }
        cout<<"Case #"<<i<<": "<<result<<endl;
        
        
        
    }
    
    return 0;
}
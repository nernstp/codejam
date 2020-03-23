#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        string input;
        cin>>input;
        cout<<"Case #"<<i<<": ";
        for(int j=0;j<input.length();j++){
            if(input[j]=='S')
                cout<<"E";
            else
                cout<<"S";
        }
        cout<<endl;
    }
    return 0;
}
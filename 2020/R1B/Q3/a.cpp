#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int r,s;
        cin>>r>>s;
        cout<<"Case #"<<i<<": ";
        vector<pair<int,int>> result;
        for(int j=r;j>=2;j--){
            
            for(int k=1;k<s;k++){
                result.push_back(make_pair(j*s-k,j));
                //cout<<j*s-k<<j<<endl;
            }
            
            
            
        }
        cout<<result.size()<<endl;
        for(auto it=result.begin();it!=result.end();it++){
            
            cout<<it->first<<" "<<it->second<<endl;
        }
        
        
    }
    
    
    return 0;
}
#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n=0;
        cin>>n;
        vector<pair<pair<int,int>,int> > act;
        for(int k=0;k<n;k++){
            int a,b;
            cin>>a>>b;
            act.push_back(make_pair(make_pair(a,b),k));
        }
        int c=0,j=0;
        vector<pair<int,string> >result;
        
        sort(act.begin(),act.end());
        
        // for(int k=0;k<n;k++)
            // cout<<act[k].first.first<<" "<<act[k].first.second<<" "<<act[k].second<<endl;
        
        for(int k=0;k<n;k++){
            if(c<=act[k].first.first){
                c=act[k].first.second;
                result.push_back(make_pair(act[k].second,"C"));
            }
            else if(j<=act[k].first.first){
                j=act[k].first.second;
                result.push_back(make_pair(act[k].second,"J"));
                
            }
            else{
                result.clear();
                result.push_back(make_pair(0,"IMPOSSIBLE"));
                break;
            }
             
        }
        sort(result.begin(),result.end());
        cout<<"Case #"<<i<<": ";
        for(int k=0;k<result.size();k++)
            cout<<result[k].second;
        cout<<endl; 
        
    }
    
    return 0;
}
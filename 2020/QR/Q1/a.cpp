#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        vector<vector<int> > grid(n,vector<int>(n,0)); 
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++)
                cin>>grid[j][k];
            
        }
        int ks=0,r=0,c=0;
        set<int> rs,cs;
        for(int j=0;j<n;j++){
            ks+=grid[j][j];
            for(int k=0;k<n;k++){
                rs.insert(grid[j][k]);
                cs.insert(grid[k][j]);
                
                
            }
            if(rs.size()!=n)
                r++;
            if(cs.size()!=n)
                c++;
            rs.clear();
            cs.clear();
            
        }
        cout<<"Case #"<<i<<": "<<ks<<" "<<r<<" "<<c<<endl;
        
    }
    
    
    return 0;
}

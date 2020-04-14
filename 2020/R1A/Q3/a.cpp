#include <iostream>
#include <vector>
#include <cstring>
#include <utility>
#include <set>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int r,c;
        cin>>r>>c;
        vector<vector<long long> > grid(r,vector<long long>(c,0));
        vector<vector<bool> > alive(r,vector<bool>(c,true));
        vector<vector<int> > e(r,vector<int>(c,0));
        vector<vector<int> > s(r,vector<int>(c,0));
        vector<vector<int> > w(r,vector<int>(c,0));
        vector<vector<int> > n(r,vector<int>(c,0));

        for(int j=0;j<r;j++)
            for(int k=0;k<c;k++){
                cin>>grid[j][k];
                // e[j][k]=min(k+1,c-1);
                // s[j][k]=min(j+1,r-1);
                // w[j][k]=max(k-1,0);
                // n[j][k]=max(j-1,0);
                e[j][k]=k+1;
                s[j][k]=j+1;
                w[j][k]=k-1;
                n[j][k]=j-1;
            }
                
        int nalive=r*c;
        bool con=true;
        long long result=0;
        if(r*c==1)
            result=grid[0][0];
        else{
            while(con){
                set<pair<int,int> > eList;
                int nElem=0;
                for(int j=0;j<r;j++){
                    for(int k=0;k<c;k++){
                        if(alive[j][k]){
                            result+=grid[j][k];
                            long long nebTotal=0;
                            int nNeb=0;
                            double average=0;
                            
                            if(e[j][k]<c){
                                nebTotal+=grid[j][e[j][k]];
                                nNeb++;
                            }
                            
                            if(s[j][k]<r){
                                nebTotal+=grid[s[j][k]][k];
                                nNeb++;
                            }
                            if(w[j][k]>=0){
                                nebTotal+=grid[j][w[j][k]];
                                nNeb++;
                            }
                            if(n[j][k]>=0){
                                nebTotal+=grid[n[j][k]][k];
                                nNeb++;
                            }
                            if(nNeb)
                                average=1.0*nebTotal/nNeb;
                            if(nNeb&&grid[j][k]<average){
                                alive[j][k]=false;
                                nElem++;
                                if(e[j][k]<c)
                                    eList.insert(make_pair(j,e[j][k]));
                                if(w[j][k]>=0)
                                    eList.insert(make_pair(j,w[j][k]));
                                if(n[j][k]>=0)
                                    eList.insert(make_pair(n[j][k],k));
                                if(s[j][k]<r)
                                    eList.insert(make_pair(s[j][k],k));
                                
                            }
                            // cout<<nebTotal<<nNeb<<average<<nElem<<endl;
                        }
                        
                        
                    }
                }
                if(!nElem)
                    con=false;
                for(auto m=eList.begin();m!=eList.end();m++){
                    int j=m->first;
                    int k=m->second;
                    // cout<<j<<k<<endl;
                    if(alive[j][k]){
                        
                        while(e[j][k]<c&&!alive[j][e[j][k]])
                            e[j][k]+=1;
                            
                        while(s[j][k]<r&&!alive[s[j][k]][k])
                            s[j][k]+=1;
                            
                        while(w[j][k]>=0&&!alive[j][w[j][k]])
                            w[j][k]-=1;
                            
                        while(n[j][k]>=0&&!alive[n[j][k]][k])
                            n[j][k]-=1;
                    }
                }
                // for(int j=0;j<r;j++){
                    // for(int k=0;k<c;k++){
                        // if(alive[j][k]){
                            // while(e[j][k]<c&&!alive[j][e[j][k]])
                                // e[j][k]+=1;
                            
                            // while(s[j][k]<r&&!alive[s[j][k]][k])
                                // s[j][k]+=1;
                            
                            // while(w[j][k]>=0&&!alive[j][w[j][k]])
                                // w[j][k]-=1;
                            
                            // while(n[j][k]>=0&&!alive[n[j][k]][k])
                                // n[j][k]-=1;
                        // }
                    // }
                // }
            }
        }
            
           
        cout<<"Case #"<<i<<": "<<result<<endl;        
                
                
        
    }
    
    return 0;
}
#include <iostream>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <utility>
using namespace std;


int dir[6][2]={{0,1},{0,-1},{-1,-1},{-1,0},{1,0},{1,1}};
vector<vector<long long> > grid;


vector<int[2]> bfs(queue<int[2]> q, set<int[2]> v, vector<int[2]> list, int sum, int step,int goal){
    if(sum==goal)
        return list;
    else{
        auto cpos=q.front();
        // cpos=q.front();
        // q.pop();
        for(int i=0;i<6;i++){
           
            int npos[2];
            npos[0]=cpos[0]+dir[i][0];
            npos[1]=cpos[1]+dir[i][1];
            if(npos[0]>=0&&npos[1]>=0&&npos[1]<=npos[0]&&npos[0]<500){
                queue<int[2]> nq=q;
                set<int[2]>nv=v;
                vector<int[2]> nlist=list;
                int nsum=sum;
                int nstep=step;
                
                // nq.push(npos);
                // nv.insert(npos);
                // nlist.push_back(npos);
                // nsum=sum+grid[npos[0]][npos[1]];
                // nstep++;
                // // return bfs(nq,nv,nlist,nsum,nstep,goal);
                // return bfs(q,v,list,sum,step,goal);
            }
                
            
        }
        
        
    }
    
    return list;
    
    
    
} 

int main(){
    int t;
    cin>>t;
    
    for(int i=1;i<=500;i++){
        vector<long long> row(i,1);
        for(int j=1;j<i;j++){
            if(j>0&&j<i-1)
                row[j]=grid[i-2][j-1]+grid[i-2][j];
            
            
        }
        grid.push_back(row);
        // for(int j=0;j<i;j++)
            // cout<<row[j]<<" ";
        // cout<<endl;
        
    }
    
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        // queue<int[2]> q;
    // q.push({0,0});
        
        
        
        
        
        
    }    
    return 0;
} 
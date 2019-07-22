#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

struct ListNode{
    unordered_set<char> ht;
    ListNode* next;
    ListNode():next(NULL){}
};


vector<char> parse(string input){
    vector<char> r;
    for(int i=0;i<input.length();i++){
        if(input[i]=='('||input[i]==')')
            ;
        else
            r.push_back(input[i]);
        
    }
    
    
    return r;
    
}




int main(){
    
    int l,d,n;
    ListNode* head=NULL;
    ListNode* c=NULL;
    ListNode* b=NULL;
    cin>>l>>d>>n;
    for(int i=0;i<d;i++){ 
        string buff;
        cin>>buff;
        c=head;
        for(int j=0;j<l;j++){
            ListNode* t=new ListNode();
            if(!b){
                head=t;
                c=t;
            }
            if(!c){
                c=t;
                b->next=c;
            }
            c->ht.insert(buff[j]);
            b=c;
            c=c->next;
        //c=c->next;    
        }
        
    }
    c=head;
    while(c){
        cout<<c->ht.size()<<endl;
        c=c->next;
     }
     vector<vector<char>> input;
     for(int i=0;i<n;i++){
         string buff;
         cin>>buff;
         vector<char> p;
         int j=0;
         while(j<buff.length()){
             if(buff[j]=='('){
                 j++;
                 while(buff[j]!=')'){
                     p.push_back(buff[j]);
                     j++;
                 }
             }
             else 
                 p.push_back(buff[j]);
             input.push_back(p);
             p.clear();
             j++;
         }
    }
    c=head;
    vector<int> result;
    for(int i=0;i<input.size();i++){
        int res=INT_MAX;
        for(int j=0;j<input[i].size();j++){
            
            
        }
            
            // cout<<input[i][j];
        // cout<<endl;
    }
    
    return 0;
    
}
#include <iostream>
#include <unordered_set>
using namespace std;

struct ListNode{
    unordered_set<char> ht;
    ListNode* next;
    ListNode():next(NULL){}
};


int main(){
    
    int l,d,n;
    ListNode* head=NULL;
    ListNode* c=NULL;
    cin>>l>>d>>n;
    for(int i=0;i<d;i++){ 
        string buff;
        cin>>buff;
        c=head;
        for(int j=0;j<l;j++){
            if(!c){
                ListNode* t=new ListNode();
                if(!head)
                    head=t;
                c=t;
            }
            
        c->ht.insert(buff[j]);
        c=c->next;    
        }
        
    }
    c=head;
    for(int i=0;i<l;i++){
        cout<<c->ht.size();
        c=c->next;
     }
    //cin>>a;
    //cout<<a;
    // // cout<<5<<endl;
    ListNode* q=new ListNode();
    cout<<1;
    return 0;
    
}
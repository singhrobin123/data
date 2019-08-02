#include<bits/stdc++.h>
#define ll long long int
#define uint unsigned
#define ull unsigned ll
#define pii pair<int,int>
#define pll pair<ll,ll>
#define PB push_back
#define fi first
#define se second
#define For(i,j,k) for (int i=(int)(j);i<=(int)(k);i++)
#define Rep(i,j,k) for (int i=(int)(j);i>=(int)(k);i--)
#define CLR(a,v) memset(a,v,sizeof(a))
#define CPY(a,b) memcpy(a,b,sizeof(a))
using namespace std;
struct Node {
	ll data;
	struct Node* next;
};
vector<ll> answer;
Node *newNode(ll data)
{
Node *node = new Node;
node->data = data;
node->next = NULL;
return node;
}

void alivesol(vector<ll> v,ll F,ll n,ll loc)
{   if(loc==0){
	Node *last = newNode(-2);
	last->next = last;

	for (ll i = 0; i <v.size(); i++) {
		Node *temp = newNode(v[i]);
		temp->next = last->next;
		last->next = temp;
		last = temp;
	}
    Node *curr = last->next;
	Node *temp,*tl;
    ll c=0,h=0,count=0;
	while (curr->next != curr&&n!=2) {
        if(curr->data<0){
            curr=curr->next;
        }
        else{
            tl=curr->next;
            if(tl->data<0){
                h+=curr->data;
                curr=curr->next;
                curr=curr->next;
            }
            else{
               temp = curr;
        n--;
		curr = curr->next;
		temp->next = curr->next;
        delete curr;
		temp = temp->next;
		curr = temp;
            }

        }
    }
   
     answer.push_back(h+F);
}
else{
    Node *last = newNode(v[0]);
	last->next = last;

    for (ll i = 1; i <v.size(); i++) {
        if(i==loc){
		Node *tp = newNode(-2);
		tp->next = last->next;
		last->next = tp;
		last = tp;
        Node *temp = newNode(v[i]);
		temp->next = last->next;
		last->next = temp;
		last = temp;}
        else{
            Node *tmp = newNode(v[i]);
		tmp->next = last->next;
		last->next = tmp;
		last = tmp;
        }
	}



     
	Node *curr = last->next;
	Node *temp,*tl;
    ll c=0,h=0,count=0;
	while (curr->next != curr&&n!=2) {
        if(curr->data<0){
            curr=curr->next;
        }
        else{
            tl=curr->next;
            if(tl->data<0){
                h+=curr->data;
                curr=curr->next;
                curr=curr->next;
            }
            else{
               temp = curr;
        n--;
		curr = curr->next;
		temp->next = curr->next;
        delete curr;
		temp = temp->next;
		curr = temp;
            }

        }
    }
   
     answer.push_back(h+F);
  
}
}

int main()
{

    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;cin>>t;
	while(t--){
	ll n;
	cin>>n;
    ll x;
	vector<ll> v;
	for(ll i=0;i<n-1;i++)
	{cin>>x;v.push_back(x);
	}
	ll F;
	cin>>F;
    vector<ll> loc;
	
	for(ll i=0;i<n-1;i++)
	if(F>=v[i])
	{loc.push_back(i);}
    
    if(loc.size()==0)
	   cout<<"impossible"<<endl;
    else{
        for(ll k=0;k<loc.size();k++){
        //     vector<ll> ans;
        //     ans.assign(v.begin(),v.end());
        // ans.push_back(-2);
		//    for(ll i=loc[k];i<n;i++)
		//       ans[i+1]=v[i];
		//      ans[loc[k]]=-2;
        alivesol(v,F,n,loc[k]);
        }
    
    
    cout<<"possible"<<endl;
    ll count=LLONG_MAX,mix=0;
    for(ll k=0;k<loc.size();k++)
    {        if(count>answer[k])
    {
        count=answer[k];
        mix=k;
    }}
    cout<<loc[mix]+1<<" "<<answer[mix]<<endl;
    }
     answer.clear();
    }
	return 0;
}

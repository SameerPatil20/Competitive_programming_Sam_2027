#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define v1(type,x) type x;cin>>x;
#define v2(type,x,y) type x,y;cin>>x>>y;
#define v3(type,x,y,z) type x,y,z;cin>>x>>y>>z;
#define remax(maxo,new) maxo=max(maxo,new);
#define endl '\n'
using namespace std;
int good[26];
struct node{
    node* child[26];
    node()
    {
        for(int i=0;i<26;i++)
        child[i]=NULL;
    }
};
struct trie{
    node* root;
    trie()
    {
        root = new node();
    }
    void add(string s)
    {
        node* curr = root;
        for(char c : s)
        {
            if(curr->child[c-'a']==NULL)
            curr->child[c-'a'] = new node();
            curr = curr->child[c-'a'];
        }
    }
};
int counter=0;
void count_sub(node* y,int k)
{
    if(k==-1)return;
    for(int i=0;i<26;i++)
    {
        if(y->child[i]!=NULL)
        {
            if(k-(1-good[i])>=0)counter++;
            count_sub(y->child[i],k-(1-good[i]));
        }
    }
}
int main() {
    string t;
    cin>>t;
    int n=t.size();
  rp(26)
  {
    char x;
    cin>>x;
    good[i]=x-'0';
  }
  int k;
  cin>>k;
  trie tree = trie();
  for(int i=0;i<n;i++)
  {
    string s="";
    for(int j=i;j<n;j++)s+=t[j];
    tree.add(s);
  }
  count_sub(tree.root,k);
  cout<<counter<<endl;
  return 0;
}
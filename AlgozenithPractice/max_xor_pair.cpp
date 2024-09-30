#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int len=5;
int maxi=0;
struct node{
    node *child[2];
    int count;
    node()
    {
        count=0;
        child[0]=NULL;
        child[1]=NULL;
    }
};
struct trie{
    node* root;
    trie()
    {
        root=new node();
    }
    void insert(int *a)
    {
        node *curr=root;
        for(int i=0;i<len;i++)
        {
            curr->count++;
            if(curr->child[a[i]]==NULL)
            {
                curr->child[a[i]]=new node();
            }
            curr=curr->child[a[i]];
        }
    }
    void check_max_xor(int *a)
    {
        int ans=0;
        node *curr=root;
        for(int i=0;i<len;i++)
        {
            if(curr->child[1-a[i]]!=NULL)
            {
                curr=curr->child[1-a[i]];
                ans+=1<<(len-1-i);
            }
            else if(curr->child[a[i]]!=NULL) curr=curr->child[a[i]];
            else return;
        }
        maxi=max(maxi,ans);
    }
};
int main()
{
    int n;
    cin>>n;
    trie bui=trie();
    string s;
    int a[len];
    for(int i=0;i<n;i++)
    {
        cin>>s;
        int j=0;
        while(j<len-s.size())
        {
            a[j]=0;
            j++;
        }
        for(int k=0;k<s.size();k++)
        {
            a[j]=s[k]-'0';
            j++;
        }
        bui.check_max_xor(a);
        bui.insert(a);
    }
    cout<<maxi<<endl;
}
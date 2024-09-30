#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
// {
    //struct node
    // {
    //     int value;
    //     node* next;
    //     node(int val=0,node* nex=NULL)
    //     {
    //         value=val;
    //         next=nex;
    //     }

    // };

    // int main()
    // {
    //     node b=node(2,NULL);
    //     node a=node(1,&b);
    //     cout<<a.value<<endl;
    //     cout<<(*(a.next)).value<<endl;
    //     return 0;
    // 
//}}
struct node{
    int value;
    node* next;
    node(int val=0)
    {
        value=val;
        next=NULL;
    }
};

void printLinkedList(node* head)
{
    while(head!=NULL)
    {
        cout<<head->value<<" -> ";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
int sumLinkedList(node* head)
{
    int sum=0;
    while(head!=NULL)
    {
        sum+=head->value;
        head=head->next;
    }
    return sum;
}
void insert(node* &head,int val,int pos=0)
{
    if(head==NULL)
    {
        head= new node(val);
        return;
    }
    if(pos==1)
    {
        node* temp= new node(val);
        temp->next=head;
        head=temp;
        return;
    }
    int count=1;
    node* temp=head;
    while(count!=pos-1 && temp->next!=NULL)
    {
        temp=temp->next;
        count++;
    }
    node* demo=new node(val);
    demo->next=temp->next;
    temp->next=demo;
}

void deletion(node* &head,int pos=0)
{
    if(head==NULL)
    {
        return;
    }
    if(pos==1  || head->next==NULL)
    {
        node* temp=head;
        head=temp->next;
        free(temp);
        return;
    }
    int count=1;
    node* temp=head;
    while(count!=pos-1 && temp->next->next!=NULL)
    {
        temp=temp->next;
        count++;
    }
    if(temp->next->next==NULL)
    {
        free(temp->next);
        temp->next=NULL;
    }
    else{
        node* temp2=temp->next;
        temp->next=temp2->next;
        free(temp2);
    }
}
void update(node* head,int val,int pos)
{
    int count=1;
    while(count!=pos)
    {
        head=head->next;
        count++;
    }
    head->value=val;
}
int main()
{
    node* head= new node(1);
    printLinkedList(head);
    cout<<"sum "<<sumLinkedList(head)<<endl;
    node* b= new node(6);
    printLinkedList(head);
    head->next=b;
    printLinkedList(head);
    cout<<"sum "<<sumLinkedList(head)<<endl;
    insert(head,7);
    printLinkedList(head);
    insert(head,2,1);
    printLinkedList(head);
    cout<<"sum "<<sumLinkedList(head)<<endl;
    insert(head,4,4);
    printLinkedList(head);
    deletion(head);
    printLinkedList(head);
    deletion(head,2);
    printLinkedList(head);
    deletion(head,1);
    printLinkedList(head);
    update(head,5,2);
    printLinkedList(head);
    cout<<"sum "<<sumLinkedList(head)<<endl;
    insert(head,8,3);
    printLinkedList(head);
    insert(head,9);
    printLinkedList(head);
    update(head,69,4);
    printLinkedList(head);
    cout<<"sum "<<sumLinkedList(head)<<endl;
    update(head,20,1);
    printLinkedList(head);
    
}
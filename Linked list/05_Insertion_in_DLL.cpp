using namespace std;
#include<iostream>
#include<vector>

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1, Node* next1,Node* prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }
    Node(int data1)
    {
        data = data1;
        prev = nullptr;
        next = nullptr;
    }
};
Node* ConvertArr2List(vector<int> arr)
{
    Node* head=new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        prev->next = temp;
        temp->prev=prev;
        prev=prev->next;
    }
    return head;
}
Node* printList(Node* head)
{
    Node* temp=head;
    while(temp)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return head;
}
Node* InsertHead(Node* head,int x)
{
    if(head->next==NULL)
    {
        return new Node(x);
    }
    Node* newHead=new Node(x);
    newHead->next=head;
    newHead->prev=nullptr;
    head->prev=newHead;
    return newHead;
}

Node* InsertBeforeTail(Node* head,int x)
{
    if(head->next==NULL)
    {
        return InsertHead(head,x); 
    }
    Node* tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    Node* prev=tail->prev;
    Node* newTail=new Node(x);
    newTail->next=tail;
    newTail->prev=prev;
    tail->prev=newTail;
    prev->next=newTail;
    return head;
}
Node* InsertAtKthPosition(Node* head,int value,int k)
{
if(k==1)
{
    return InsertHead(head,value);
}
Node* temp=head;
int count=0;
while(temp->next!=NULL)
{
    count++;
    if(k==count)
    {
        break;
    }

    temp=temp->next;
}
Node* prev=temp->prev;
Node* newNode=new Node(value,temp,prev);
prev->next=newNode;
temp->prev=newNode;
return head;
}
int main()
{
    vector<int> arr={
        1,2,3,4,5
    };
Node*head=ConvertArr2List(arr);
printList(head);
// head=InsertHead(head,10);
// printList(head);

head=InsertBeforeTail(head,100);
printList(head);
}
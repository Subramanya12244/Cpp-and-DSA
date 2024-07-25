using namespace std;
#include<iostream>
#include<vector>
class Node{
    public:
    Node* next;
    int data;
    public:
    Node(int data1,Node* next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next=nullptr;
    }
};
Node* InsertionAtHead(Node* head,int value)
{
    Node* temp=new Node(value,head);
    return temp;
}
Node* InsertionAtTail(Node* head,int value)
{
    if(head==NULL)
    {
        return new Node(value);
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    Node* newNode=new Node(value);
    temp->next=newNode;
    return head;
}
Node* ConvertArr2LL(vector<int>arr)
{
Node* head=new Node(arr[0]);
Node *mover=head;
for(int i=1;i<arr.size();i++)
{
Node* temp=new Node(arr[i]);
mover->next=temp;
mover=temp;
}
return head;
}
void printList(Node* head)
{
    Node* temp=head;
    while(temp)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
vector<int> arr={
    1,2,3,4,5
};
Node* head=ConvertArr2LL(arr);
cout<<"before"<<endl;
printList(head);
cout<<"after"<<endl;
// head=InsertionAtHead(head,10);
// printList(head);

head=InsertionAtTail(head,100);
printList(head);
}
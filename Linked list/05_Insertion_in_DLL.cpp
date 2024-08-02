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

Node* InsertAtTail(Node* head,int x)
int main()
{
    vector<int> arr={
        1,2,3,4,5
    };
Node*head=ConvertArr2List(arr);
printList(head);
head=InsertHead(head,10);
printList(head);
}
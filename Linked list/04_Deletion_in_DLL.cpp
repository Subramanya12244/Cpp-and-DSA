using namespace std;
#include<iostream>
#include<vector>

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1,Node* next1,Node* prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }
    Node(int data1)
    {
        data = data1;
        next=nullptr;
        prev = nullptr;
    }
};
Node* convertArrToNode(vector<int>& arr)
{
    Node* head = new Node(arr[0]);
    Node* prev=head;
    for(int i=1; i<arr.size(); i++)
    {
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=prev->next;
    }
    return head;
}
void printList(Node* head)
{
    Node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* deleteHead(Node* head)
{
    if(head==nullptr) return head;
    Node* prev=head;
    head=head->next;
    head->prev=nullptr;
    prev->next=nullptr;
    free(prev);
    return head;
} 
Node* deleteTail(Node* head)
{
    if(head==nullptr) return head;
    Node* tail=head;
    while(tail->next!=nullptr) 
    {
        tail=tail->next;
    }
    Node* newTail=tail->prev;
    newTail->next=nullptr;
    tail->prev=nullptr;
    delete tail;
    return head;
}
Node* deleteAtKPosition(Node* head,int k)
{
if(head==nullptr) return head;
   int count=0;
   Node* temp=head;
   while(temp)
   {
    count++;
    if(count==k)
    break;  
    temp=temp->next; 
}

    Node* prev=temp->prev;
    Node* next=temp->next;

    if(prev==nullptr && next==nullptr)
    {
        return nullptr;
    }
    else if(prev==nullptr)
    {
        // delete the head
        if(head==nullptr)
        {
            return head;
        }
        Node* prev=head;
        head=head->next;
        prev->next=nullptr;
        head->prev=nullptr;
        free(prev);
        return head;
    }
    else if(next==nullptr)
    {
        // delete the tail
        if(head==nullptr)
        {
            return head;
        }
        Node* tail=head;
        while(tail)
        {
            tail=tail->next;
        }
        Node* newTail=tail->prev;
        newTail->next=nullptr;
        tail->prev=nullptr;
        free(tail);
        return head;
    }
    // if k is not first and last element it lies in the middle
    prev->next=next;
    next->prev=prev;
    temp->next=nullptr;
    temp->prev=nullptr;
    free(temp);
    return head;
}
int main()
{
    vector<int> arr={
        1,2,3,4,5
    };
    Node* head=convertArrToNode(arr);
    // printList(head);
    // head=deleteHead(head);
    // printList(head);

    // printList(head);
    // head=deleteTail(head);
    // printList(head);

    printList(head);
    head=deleteAtKPosition(head,3);
    printList(head);
}
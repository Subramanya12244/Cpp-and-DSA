using namespace std;
#include<iostream>
#include<vector>
//01. what is linked list
//2.what is it

// struct class in c++ and java

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1)
    {
        data = data1;
        next=next1;
    }
    public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int>arr)
{
    Node* head = new Node(arr[0]);
    Node* mover=head;
    for(int i=1; i<arr.size(); i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int length(Node* head)
{
    Node* temp=head;
    int count =0;
    while(temp)
    {
        temp=temp->next;
        count++;
    }
return count;
}
bool search(Node* head,int key)
{
    Node* temp=head;
    while(temp)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main()
{
    vector<int> arr={2,3,4,5,7};
    // Node* y=new Node(arr[0]);
    // cout << y->data << endl;
    // cout << y->next << endl;
    Node* head=convertArr2LL(arr);
    Node* temp=head;
    // traversal
    // while(temp)
    // {
    //     cout<<temp->data << endl;
    //     temp=temp->next;
    // }
    // cout<<length(temp)<<endl;



    //search
    cout<<search(head,9);
} 
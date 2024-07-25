using namespace std;
#include<iostream>
#include<vector>
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    }
    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
Node* convertingarr2ll(vector<int> arr)
{
    Node *head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node* deleteHead(Node* head)
{
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* deleteTail(Node *head)
{
    if(head==nullptr || head->next==NULL)return NULL;
    Node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
Node* deleteK(Node *head,int k)
{
    if(head==NULL)return head;
    if(k==1)
    {
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int count=0;
    Node* temp=head;
    Node *prev=NULL;
    while(temp->next!=NULL)
    {
        count++;
        if(count==k)
        {
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
void printList(Node* head)
{
    Node *temp=head;
    while(temp)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    vector<int> arr={
    1,2,3,4,5,6
    };
    Node* head=convertingarr2ll(arr);
    // cout<<"befor deleting head"<<endl;
    // printList(head);
    // cout<<"after deleting head"<<endl;
    // head=deleteHead(head);
    // printList(head);


    cout<<"befor deleting tail"<<endl;
    printList(head);
    cout<<"after deleting tail"<<endl;
    head=deleteTail(head);
    printList(head);

    return 0;
}
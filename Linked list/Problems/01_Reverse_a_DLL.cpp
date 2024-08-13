using namespace std;
#include<iostream>
#include<stack>
#include<vector>
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1, Node*next1,Node*prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node* convertArr2LL(vector<int>& arr)
{
    Node* Head=new Node(arr[0]);
    Node* prev=Head;

    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        prev->next=temp;
        temp->prev=prev;
        prev=temp;
    }
    return Head;
}
void printLL(Node* Head){
    Node* temp=Head;
    Node* prev=NULL;

    while(temp)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
Node* ReverseUsingStack(Node* Head)
{
    Node* temp=Head;
    stack<int> st;
    while(temp)
    {
        st.push(temp->data);
        temp=temp->next;
    }
    temp=Head;
    while(temp)
    {
        temp->data = st.top();
        st.pop();
        temp=temp->next;
    }
    return Head;
}
Node* ReverseOptimised(Node* Head)
{
    Node* current=Head;
    Node* last=NULL;
    while(current)
    {
        last=current->prev;
        current->prev=current->next;
        current->next=last;
        // moving in the reverse direction
        current=current->prev;
    }

    return last->prev;
}
int main()
{
    vector<int> arr={
        1,2,3,4,5
    };
    Node* head=convertArr2LL(arr);

// method-1:
    // printLL(head);
    // head=ReverseUsingStack(head);
    // printLL(head);

// ṃetod two swapping using temp variables
    printLL(head);
    head=ReverseOptimised(head);
    printLL(head);
}
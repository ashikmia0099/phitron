#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node* newnode = new Node(val);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        newnode->prev = tail;
        tail->next = newnode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node* deletenode = tail;
        tail = tail->prev;
        if(tail == NULL) head =NULL;
        delete deletenode;
    }
    int top()
    {
        return tail->val;
    }
    bool empty()
    {
        if(sz == 0) return true;
        else return false;
    }

};
class myQueue
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node* newnode = new Node(val);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        newnode->prev = tail;
        tail->next = newnode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node* deletenode = head;
        head = head->next;
        if(head == NULL) 
        {
            tail = NULL;
            delete deletenode;
            return;
        }
        head->prev = NULL;
        delete deletenode;
        
    }
    int front()
    {
        return head->val;
    }
    bool empty()
    {
        if(sz == 0) return true;
        else return false;
    }

};
int main()
{
    myStack st;
    myQueue qu;
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=0 ; i<n ; i++)
    {
        int x;
        cin>>x;
        st.push(x);
        
    }
    for(int i=0; i<m; i++)
    {
        int y;
        cin>>y;
        qu.push(y);
    }
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    while (!qu.empty())
    {
        cout<<qu.front()<<" ";
        qu.pop();

    }
    
    return 0;
}
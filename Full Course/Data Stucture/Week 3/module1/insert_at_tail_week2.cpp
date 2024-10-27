void insert_at_head(Node *&head,int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}void insert_at_head(Node *&head,int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
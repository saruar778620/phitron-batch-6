#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void insert_at_head(Node *&head, Node *&tail, int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
        head = tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void leftprint(Node* head){
    Node* tmp = head;
    cout<<"L -> ";
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<"\n";
}

void rightprint(Node* tail){
    Node* tmp = tail;
    cout<<"R -> ";
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<"\n";
}

int size(Node* head){
    int sz =0;
    Node* tmp = head;

    while (tmp != NULL)
    {
        sz++;
        tmp = tmp->next;
    }

    return sz;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;

    while (t--)
    {
        int x,v;
        cin>>x>>v;
        if(size(head)<x){
            cout<<"Invalid"<<"\n";
        }

        if(x==0){
            insert_at_tail(head,tail,v);
            leftprint(head);
            rightprint(tail);

        }
        else if(x>0){

        }


    }

}

#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};


Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}


int len(Node *head)
{
    int count = 0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}
Node *rev(Node *head)
{
     if(head==NULL)
    {
        return  head;
    }
    Node *prev=NULL;
    Node* current=head;
    Node* next=current->next;
    while(next!=NULL)
    {
     current->next=prev;
        prev=current;
        current=next;
        next=next->next;
    }
current->next=prev;
    return current;
}
bool isPalindrome(Node *head)
{
    //Write your code 
     if(head==NULL || head->next==NULL)
    {
        return  true;
    }
    int mid=(len(head))/2;
    
    Node* temp=head;
   int count=0;
    while(count<mid-1)
    {
     temp=temp->next;
        count++;
    }
    if(len(head)%2==0)
    {
        Node *prev=temp;
        Node *next=temp->next;
        temp->next=NULL;
        Node *head1=rev(next);
        prev->next=head1;
        bool a=true;
       
        while(head1!=NULL)
        {
            if(head->data!=head1->data)
            {
                a=false;
                break;
            }
        head=head->next;
        head1=head1->next;    
        }
      return a;
    }
    else
    {
       Node *prev=temp->next;
       Node *next=prev->next;
        prev->next=NULL;
        Node *head1=rev(next);
        prev->next=head1;
         bool a=true;
       
        while(head1!=NULL)
        {
            if(head->data!=head1->data)
            {
                a=false;
                break;
            }
        head=head->next;
        head1=head1->next;    
        }
      return a;
        
    }
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		bool ans = isPalindrome(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}

	return 0;
}

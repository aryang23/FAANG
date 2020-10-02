#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Stack {
    Node<T> *head;
    int size;		// number of elements prsent in stack
    
    public :
    
    Stack() 
    {
        head=NULL;
        size=0;
    }
    
    int getSize() 
    {
    	return size;    
    }
    
    bool isEmpty() 
    {
    	if(size==0)
        {
            return true;
        }
        else
        {
            return false;
        }
        //return size==0;//0==0 ==>return true;
                          //2!=0 ==>return false;    
    }
    
    void push(T element) 
    {
    	Node<T>* newnode = new Node<T>(element);
        newnode->next = head;
        head = newnode;
        size++;    
    }
    
    T pop() {
        // Return 0 if stack is empty. Don't display any other message
        if(head==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        else
        {
            T ans = head->data;
            head = head->next;
            size--;
            return ans;
        }
        
    }
    
    T top() {
        // Return 0 if stack is empty. Don't display any other message
        if(head == NULL)
        {
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return head->data;
        
    }
};


int main() 
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}

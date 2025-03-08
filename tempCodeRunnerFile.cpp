#include <iostream>
using namespace std;

int main(){

Node *insertAtBeginning(string data, Node *haed){
    Node *newNode = createNode(data);
    newNode->link = head;
    
    head = newNode;
    
    cout << "A new Node has been inserted at the beginning \n" <<endl;
    
    return head;
}

void traverse(Node *head){
    Node *temp = new Node;
    temp = head;
    
    cout << "My Playlist" <<endll;
    while(temp != NULL){
        cout << temp->songName<< "->"<<end;
        if(temp->link == NULL){
            cout << "NULL"<<endl;
        }
        
        temp = temp->link;
    }
}
    
    
Node *createNode(string data){Node *sample = new Node;
    sample->songName = "Heaven Knows by Orange and Lemon";
    
    cout << sample->songName <<en
    Node *newNode = new Node;
    newNode->songName = data;
    newNode->link = NULL;
    
    return newNode;
}
string insertAfter(string after, string data, Node *head){
    Node *temp = new Node;
    temp = head;
    
    while(temp->songName.compare(afer) != 0){
        if(temp == NULL){
            return "No such song exist, please try again later.";
        }
        
        temp = temp->link;
    }
    Node *newNode = createNode(data);
    newNode->link = newNode->link;
    temp->link = newNode;
    
    return "An new node has been added after " + after + "\n";
}

typedef struct Node{
    string songName;
    Node *link;
    
}Node;

Node *insertAtEnd(string data, Node *head){
    if(head == NULL){
        Node *newNode = createNode(data);
        head = newNode;
        cout << "A new node has been inserted at the end \n" << endl;
        return head;
    }
    Node *temp = new Node;
    temp = head;
    
    while(temp->link != NULL){
        Temp = temp->link;
    }
    
    Node *newNode = createNode(data);
    temp->link = newNode;
    
    cout << "A new node has been inserted at the end \n" << endl;
    return head;
}
string *deleteAtEnd(Node *head){
    if(head == NULL){
        return "The linked list is empty \n";
        
       If(hea->link == NULL){
           delete head;
           return "The head has been deleted \n";
       }
       
       Node *temp = new Node;
       temp = head;
       
       while(temp->link->link != NULL){
           temp = temp->link;
       }
       
       temp->link = NULL;
       
       return "A node has been deleted at tha end \n";

       Node *head = createNode("Sanctuary by Joji");
    
       head = insertAtEnd("Sunday Morning by Maroon 5", head);
       traverse(head);

   }

Node *deleteFromBeginning(Node *head){
       if(head == NULL){
           cout << "The linked list is empty \n" <<endl;
           return NULL;
       }
       
       if(head->link == NULL){
            delete head;
       }
       
       head = head->link;
       
       cout <<"A node has been delete from the Beginning \n" << endl;
       
       return head;
   }
   Node *deleteFromGivenNode(string giverNode, Node *head){
       if(head == NULL){
           cout << "The linked list is empty \n" <<endl;
           return NULL;
       }
       
       if(head->songName.compare(giverNode) != 0){
           head = deleteFromBeginning(head);
           cout << "The Node " + giverNode + " has been deleted. \n" << end;
           return head;
       }
       
       Node *temp = new Node;
       Node *next = new node;
       temp = head;
       next = temp->link;
       
       while(next->songName.compare(giverNode) != 0){
           if(temp == NULL){
               cout << "No such node exist. \n" <<endl;
               return head;
           }
           next = next->link;
           temp = temp->link;
       }
       
       temp->link = next->link;
       cout << "The Node " + giverNode + " has been deleted. \n" << endl;
       return head;
   }
}
    return 0;
}
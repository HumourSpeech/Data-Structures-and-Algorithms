#include <iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};


// Array to LL
Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Printing LL
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout << endl;
}

// deleting head 
Node* removesHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

// deleting last node
Node* deleteLast(Node* head){
    if(head==NULL || head->next == NULL) return NULL;
    
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    
    return head;
}

//deleting node at any given position
Node* removeK(Node* head, int k){
    if(head == NULL) return head;
    if(k==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// delete any given value from LL
Node* removeEL(Node* head, int el){
    if(head == NULL) return head;
    if(head->data==el){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        if(temp->data == el){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// inserting element at head 
Node* insert_head(Node* head, int n){
    Node* temp = new Node(n, head);
    return temp;
}

// inserting element at last node
Node* insert_at_last(Node* head, int n){
    if(head == NULL){
        return new Node(n);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(n);
    temp->next = newNode;
    return head;
}

// Inserting at kth position
Node* insert_at_pos(Node* head, int el, int k){
    // if there is no LL
    if(head == NULL){
        if(k == 1) {
            return new Node(el);
        }
        else{
            return NULL;
        }
    }
    // inserting el at head
    if(k==1){
        Node* temp = new Node(el, head);
        return temp;
    }

    int cnt = 1;
    Node* temp = head;
    while(temp != NULL){
        // cnt++; // before if statement when initially cnt=0
        if(cnt == k-1){
            Node* newNode = new Node(el,temp->next);
            temp->next = newNode;
            // return head;
            break;
        }
        temp = temp->next;
        cnt++; //after if statement when initially cnt=1
    }
    return head;
}
// inserting before any given value
Node* inserting_before_val(Node* head, int el, int val){
    if(head == NULL){
        return NULL;
    }

    if(head->data==val){
        Node* newNode = new Node(el, head);
        return newNode;
    }

    Node* temp = head;
    while(temp->next != NULL){

        if(temp->next->data == val){
            Node* newNode = new Node(el,temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {2,5,8,7};
    Node* head = convertArr2LL(arr);
    cout<<head->data<<endl;
    head = inserting_before_val(head, 99 , 8);
    print(head);
}
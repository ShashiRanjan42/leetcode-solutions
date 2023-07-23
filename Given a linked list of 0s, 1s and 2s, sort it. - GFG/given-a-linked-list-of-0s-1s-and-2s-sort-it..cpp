//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        if(head == NULL)
        return NULL;
        if(head->next == NULL)
        return head;
        
        int one = 0;
        int two = 0;
        int zero = 0;
        
        map<int,int> mp;
        Node* temp = head;
        
        while(temp != NULL)
        {
            mp[temp->data]++;
            temp = temp->next;
        }
        
        for(auto i:mp)
        {
            if(i.first == 0)
            zero = i.second;
            else if(i.first == 1)
            one = i.second;
            else
            two = i.second;
        }
        
        Node* temp1 = head;
        while(temp1 != NULL)
        {
            while(zero--)
            {
                temp1->data = 0;
                temp1 = temp1->next;
            }
            while(one--)
            {
                temp1->data = 1;
                temp1 = temp1->next;
            }
            while(two--)
            {
                temp1->data = 2;
                temp1 = temp1->next;
            }
            
        }
        return head;
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}*head;
*/
// class Solution
// {
//     public:
    
//     Node* swap(struct Node* temp)
//     {
//         if(temp->next != nullptr)
//         {
//             Node* temp1 = temp->next;
//             temp1->next = temp;
//         }
//         return temp;
//     }
    
//     Node* pairWiseSwap(struct Node* head) 
//     {
//         // The task is to complete this method
//         if(head == NULL || head->next == NULL)
//         return head;
        
//         Node* temp = head;
//         int i = 0;
//         Node* ans;
//         while(temp != NULL || temp->next != NULL)
//         {
//             Node* temp1 = temp;
//             if(temp->next->next != NULL)
//             {
//                 Node* newHead = swap(temp1);
//                 temp = temp->next->next;
//                 newHead->next->next = temp;
//                 if(i == 0)
//                 {
//                     ans = newHead;
//                 }
//                 i++;
//             }
//         }
        
//         return ans;
        
//     }
// };

class Solution {
public:
    Node* pairWiseSwap(struct Node* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        Node* dummy = new Node(0);
        dummy->next = head;
        Node* prev = dummy;

        while (head != nullptr && head->next != nullptr) {
            Node* first = head;
            Node* second = head->next;

            // Swap nodes
            prev->next = second;
            first->next = second->next;
            second->next = first;

            // Move to the next pair
            prev = first;
            head = first->next;
        }

        Node* newHead = dummy->next;
        delete dummy;

        return newHead;
    }
};


//{ Driver Code Starts.

void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
}

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		map<Node*, int> mp;
		mp[head] = head->data;
		for (int i = 0; i<n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
			mp[tail] = tail->data;
		}
		struct Node *failure = new Node(-1);
		Solution ob;
		head = ob.pairWiseSwap(head);
		int flag = 0;
		struct Node *temp = head;
		while(temp){
		    if(mp[temp] != temp->data){
		        flag = 1;
		        break;
		    }
		    temp = temp->next;
		}
		if(flag)
		    printList(failure);
		else
		    printList(head);
	}
	return 0; 
}

// } Driver Code Ends
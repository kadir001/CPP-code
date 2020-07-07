#include <bits/stdc++.h>
using namespace std;

// Data Structure to store a linked list node
struct Node
{
	int data;
	Node* next;
};

// Helper function to print given linked list
void printList(struct Node* head)
{
	struct Node* ptr = head;
	while (ptr)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}

}

// Helper function to insert a new node in the beginning of the linked list
void push(struct Node** headRef, int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = *headRef;
	*headRef = newNode;
}

// Recursive function to reverse the given linked list. It reverses the
// given linked list by fixing the head pointer first and then .next
// pointers of very node in reverse order
void reverse(Node* curr, Node* prev, Node** headRef)
{
    // base case: end of the list reached
    if (curr == nullptr)
    {
        // fix head pointer
        *headRef = prev;
        return;
    }

    // recuse for next node and pass current node as previous node
    reverse(curr->next, curr, headRef);

    // fix current node(nodes following it are already fixed)
    curr->next = prev;
}

// Reverse the given linked list. The function takes a pointer
// (reference) to the head pointer
void reverse(struct Node** headRef)
{
    reverse (*headRef, nullptr, headRef);
}

// main method
int main()
{
	// input keys
	int keys[] = { 5, 1, 2, 3, 4 };
	int n = sizeof(keys)/sizeof(keys[0]);

	struct Node *head = nullptr;
	for (int i = n - 1; i >=0; i--)
		push(&head, keys[i]);

	reverse(&head);

	printList(head);

	return 0;
}

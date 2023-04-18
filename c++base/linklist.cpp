#include <iostream>
using namespace std;

typedef struct LinkList {
	int val;
	LinkList *next;
	
	LinkList(int x): val(x), next(nullptr) {}
} LinkNode;

void printLinkList(LinkNode *head) {
	while (head != nullptr) {
		cout << head->val << endl;
		head = head->next;
	}
}

bool removeNode(int val, LinkNode **head) {
	LinkNode *start = *head;
	
	if (start->val == val) {
		*head = (*head)->next;
		delete start;
		return true;
	}
	
	while (start != nullptr) {
		if (start->next->val == val) {
			LinkNode *next = start->next;
			start->next = start->next->next;
			delete next;
			return true;
		}
		
		start = start->next;
	}
	
	return false;
}

int main() {
	int n;
	cin >> n;
	LinkNode *start, *head = new LinkNode(n);
	
	start = head;
	
	while (cin >> n) {
		LinkNode *next = new LinkNode(n);
		start->next = next;
		start = next;
	}
	
	removeNode(1, &head);
	
	printLinkList(head);
	
	
	return 0;
}

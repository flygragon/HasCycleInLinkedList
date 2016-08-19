#pragma once
#include"ListNode.h"
#include<iostream>
#include<vector>

class SingleListInput {
public:
	ListNode* Input(){
		int len;
		std::cin >> len;
		ListNode* head = new ListNode(), *p = head;
		for (int i = 1; i < len; i++,p =p ->next) {
			std::cin >> p->val;
			p->next = new ListNode;
	}
		std::cin >> p->val;
		//for (p = head; p; p = p->next)
		//	cout << p->val << " ";
		return head;
	}
	ListNode* InputWithCycle() {
		int len;
		std::cin >> len;
		std::vector<ListNode*> Nodes;
		ListNode* head = new ListNode(), *p = head;
		for (int i = 1; i < len; i++, p = p->next) {
			std::cin >> p->val;
			Nodes.push_back(p);
			p->next = new ListNode;
		}
		std::cin >> p->val;
		Nodes.push_back(p);
		std::cout << "Select Tail Connecting To:" << '\n'
			<< "1. Random Existing Node" << '\n'
			<< "2. Specify Node Index." << '\n'
			<< "3. Null" << '\n';
		std::cin >> len;
		if (len == 1)
			p->next = Nodes[rand() % Nodes.size()];
		else if (len ==2) {
			std::cin >> len;
			p->next = Nodes[len];
		}
		return head;
	}
};
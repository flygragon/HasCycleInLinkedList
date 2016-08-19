#pragma once
#include"ListNode.h"


class HasCycleJudge {
public:
	bool hasCycle(ListNode *head) {
		if (!head || !head->next)
			return false;

		for (ListNode *p = head, *q; p; p = q) {
			if (p->next == p)
				return true;
			q = p->next;
			p->next = p;
		}
		return false;
	}
};
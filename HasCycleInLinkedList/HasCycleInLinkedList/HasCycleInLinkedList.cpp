// HasCycleInLinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"ListInPut-CycleAvailable.h"
#include"HasCycleInLinkedList.h"
using namespace std;

int main()
{
	SingleListInput SLIP;
	ListNode* p = SLIP.InputWithCycle();
	HasCycleJudge HCJ;
	cout << boolalpha << HCJ.hasCycle(p) << '\n';
    return 0;
}


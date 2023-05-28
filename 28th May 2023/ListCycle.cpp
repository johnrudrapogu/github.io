#include <bits/stdc++.h>
using namespace std;

struct SLLNode{
	int data;
	struct SLLNode *next;
	SLLNode(int d){
		data = d;
		next = NULL;
	}
};

class BeingZero{
public:
	SLLNode* cycleStartNode(SLLNode* h) {
		if(h == NULL || h->next == NULL) return NULL;
		SLLNode *s = h, *f = h;
		while(f != NULL && f->next != NULL)
		{
		    s = s->next;
		    f = f->next->next;
		    if(s == f) break;
		}
		if(f == NULL || f->next == NULL) return NULL;
		s = h;
		while(s != f)
		{
		    s = s->next;
		    f = f->next;
		}
		return s;
	}
};
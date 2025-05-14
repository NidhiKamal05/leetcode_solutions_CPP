
// 21. MERGE TWO SORTED LISTS

#include<iostream>
#include<vector>

using namespace std ;

// LISTNODE
struct ListNode
{
	int val ;
	ListNode *next ;
} 
*first = NULL ;

// SORT VECTOR
vector<int> Sort(vector<int>  v)
{
	int t ;
	for(int i=0; i<v.size()-1; ++i)
	{
		for(int j=v.size()-1; j>i; --j)
		{
			if(v.at(j) < v.at(j-1))
			{
				t = v.at(j) ;
				v.at(j) = v.at(j-1) ;
				v.at(j-1) = t ;
			}
		}
	}
	return v ;
}

// CREATE LINKED LIST
ListNode* create()
{
	struct ListNode *t, *last ;
	first = new ListNode ;
	
	int x ;
	char c, c1='y' ;
	
	cout << "Enter a value....." << endl << "x = " ;
	cin >> x ;
	
	first->val = x ;
	first->next = NULL ;
	last = first ;
	
	printf("\n\n Press 'y' to continue / any key to stop .....\n\n");
	cin >> c ;
    if(c == 'y')
		system("pause") ;
	else 
		return first ;
	
	while(c1 == 'y')
	{
		t = new ListNode ;
		
		cout << "Enter a next value....." << endl << "x = " ;
		cin >> x ;
		
		t->val = x ;
		t->next = NULL ;
		last->next = t ;
		last = t ;
		
		printf("\n\n Press 'y' to continue / any key to stop .....\n\n");
		cin >> c1 ;
        if(c1 == 'y')
	    	continue ;
	    else 
	    	return first ;
	}
	return first ;
}

// DISPLAY LINKED LIST
void display(struct ListNode *list)
{
	while(list != NULL)
	{
		cout << list->val << "  " ;
		list = list->next ;
	}
}

// MERGE TWO SORTED LINKED LIST
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
{
	if((list1 == NULL)&&(list2 == NULL))
		return list1 ;
	if(list1 == NULL)
		return list2 ;
	if(list2 == NULL)
		return list1 ;	
	struct ListNode *result, *last, *temp ;
	result = new ListNode ;
	vector<int> v{} ;
	while(list1 != NULL)
	{  
		v.push_back(list1->val) ;
		list1 = list1->next ;
	}	
	while(list2 != NULL)
	{  
		v.push_back(list2->val) ;
		list2 = list2->next ;
	}
	v = Sort(v) ;
	// sort(v.begin(), v.end()) ;
	int i=0 ; 
	result->val = v.at(i) ;
	result->next = NULL ;
	last = result ;
	++i ;
	while(i<v.size())
	{
		temp = new ListNode ;
		temp->val = v.at(i) ;
		temp->next = NULL ;
        last->next = temp ;
        last = temp ;
		++i ;
	}
	return result ;
}

// MAIN STARTS
int main()
{
	struct ListNode *list1, *list2, *result ;
	
	cout << "Enter Values in List_1...." << endl ;
	list1 = create() ;
	cout << endl ;
	cout << "Enter Values in List_2...." << endl ;
	list2 = create() ;
	
	// list1 = new ListNode ;
	// list1->next = NULL ;
	
	// list2 = new ListNode ;
	// list2->next = NULL ;
	
	// if(list1 != NULL)
	// {
	    cout << endl ;
	    cout << "List_1...." << endl ;
	    display(list1) ;
	// }
	// if(list2 != NULL)
	// {
	    cout << endl << endl ;
	    cout << "List_2...." << endl ;
	    display(list2) ;
	// }
	
	cout << endl << endl ;
	result = mergeTwoLists(list1, list2) ;
	
	cout << endl ;
	if(result != NULL)
	    display(result) ;
	else
		cout << "EMPTY" ;
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}


    /*struct ListNode *r, *r1, *last, *t ;	
    r = new ListNode ;
	r1 = r ;
	r->val = list1->val ;
	r->next = NULL ;
	last = r ;
	list1 = list1->next ;
	while(list1 != NULL)
	{
		t = new ListNode ;
		t->val = list1->val ;
		t->next = NULL ;
		last->next = t ;
		last = t ;
		list1 = list1->next ;
	}
	while(list2 != NULL)
	{
		t = new ListNode ;
		t->val = list2->val ;
		t->next = NULL ;
		last->next = t ;
		last = t ;
		list2 = list2->next ;
	}	 
	vector<int> v{} ;
	while(r != NULL)
	{  
		v.push_back(r->val) ;  
		// r->val = 0 ; 
		r = r->next ; 
	}
	v = Sort(v) ;
	// sort(v.begin(),v.end()) ;
	r = r1 ;
	int i = 0 ; 
	// while(r != NULL)
	while(i<v.size())
	{
		r->val = v.at(i) ;    
		r = r->next ;
		++i ;
	}
	return r ;*/
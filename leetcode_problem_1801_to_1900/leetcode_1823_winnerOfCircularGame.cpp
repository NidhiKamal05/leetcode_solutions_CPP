
// 1823. FIND THE WINNER OF THE CIRCULAR GAME

#include<iostream>
#include<queue>

using namespace std ;

int helper(queue<int> & q, int k){
	if(q.size() == 1)
		return q.front() ;
	int c = 0 ;
	while(c != (k-1)){
		q.push(q.front()) ;
		q.pop() ;
		++c ;
	}
	q.pop() ;
	return helper(q, k) ;
}

int findTheWinner(int n, int k){
	queue<int> q ;
	for(int i=1; i<=n; ++i)
		q.push(i) ;
	return helper(q, k) ;
}

int main(){
	int n, k, winner ;
	
	cout << endl ;
	cout << " FIND THE WINNER OF THE CIRCULAR GAME " << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;	
	cout << "Enter no. of friends...." << endl ;
	cin >> n ;
	
	cout << endl ;	
	cout << "Count = " ;
	cin >> k ;
	
	winner = findTheWinner(n, k) ;
	
	cout << endl ;
	cout << "Winner of the game is " << winner << endl ;
	
	cout << endl ;
	system("pause") ;
	
	return 0 ;
}


/*struct ListNode{
	int val ;
	ListNode *next ;
} ;
int helper(ListNode * head, int k){
	if(head->next == head){
		return head->val ;
	}
	ListNode *p = head ;
	ListNode *temp = NULL ;
	int c=1 ;
	while(c < k-1){
		p = p->next ;
		++c ;
	}
	temp = p->next ;	
	p->next = p->next->next ;
	temp->next = NULL ;
	free(temp) ;
	head = p->next ;
	return helper(head, k) ;
}
int findTheWinner(int n, int k){
	ListNode *head = new ListNode ;
	ListNode *last ;
	head->val = 1 ;
	head->next = head ;	
	last = head ;
	ListNode *t ;
	for(int i=2; i<=n; ++i){
		t = new ListNode ;
		t->val = i ;
		t->next = head ;
		last->next = t ;
		last = t ;
	}
	return helper(head, k) ;
}*/

/*int findTheWinner(int n, int k) {
        int winner=1;
        cout << winner << " " ;
        for(int i=2; i<=n; i++){
            winner=(winner+(k-1))%i+1;
            cout << winner << " " ;
        }
        return winner;
    }*/
	
/*int findTheWinner(int n, int k) {
        int i = 1;
        for(int j =2; j<=n;j++){
            i += k;
            i = (i-1)%j + 1;
        }
        return i;
    }*/
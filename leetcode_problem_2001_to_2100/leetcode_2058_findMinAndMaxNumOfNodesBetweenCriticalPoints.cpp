
// 2058. FIND THE MINIMUM AND MAXIMUM NUMBER OF NODES BETWEEN CRITICAL POINTS

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/solutions/8493531/c-linked-list-solution-beats-8163-by-nid-y5d3/

/* JAVA */
// https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/solutions/8493558/java-solution-in-on-time-in-o1-space-by-vjgx5/

#include<iostream>

using namespace std ;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans = {-1, -1} ;
        ListNode* prev = head ;
        ListNode* curr = head->next ;
        int maxDist = -1, minDist = 1e5 ;
        int currIdx = 1, prevCriticalIdx = 0, firstCriticalIdx = 0 ;
        while(curr->next != NULL) {
            ++currIdx ;
            bool localMax = prev->val < curr->val && curr->val > curr->next->val ;
            bool localMin = prev->val > curr->val && curr->val < curr->next->val ;
            if(localMax || localMin) {
                if(firstCriticalIdx == 0) {
                    firstCriticalIdx = currIdx ;
                    prevCriticalIdx = currIdx ;
                }
                else {
                    minDist = min(minDist, currIdx - prevCriticalIdx) ;                    
                    prevCriticalIdx = currIdx ;
                }
            }
            prev = curr ;
            curr = curr->next ;
        }
        if(minDist != 1e5) {
            maxDist = prevCriticalIdx - firstCriticalIdx ;
            ans = {minDist, maxDist} ;
        }
        return ans ;
    }
};
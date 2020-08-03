#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<n;i++)

ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr)
            return head;
        int s = 1;
        ListNode* temp = head;
        ListNode* temp2 = head->next;
        while(temp->next != nullptr)
        {
            s++;
            temp = temp->next;
        }
        cout<<s<<endl;
        s = s - n;
        cout<<s<<endl;
        if(s == 0)
        {
            head=head->next;
            return head;
        }
        temp = head;
        if(temp2 == nullptr)
        {
            if(s == 0)
            {
                head->next = nullptr;
                return head;
            }
            if(s == 1)
            {
                head = head->next;
                return head;
            }
        }
        
        int i = 1;
        while(temp2 != nullptr)
        {
            cout<<"i "<<i<<endl;
            if(i == s)
            {
                temp->next = temp2->next;
                break;
            }
            i++;
            temp = temp2;
            temp2 = temp2->next;
            
        }
        return head;
    }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}

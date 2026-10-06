class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* prev = nullptr;
        ListNode* current = head;

        while (current != nullptr) {

            ListNode* next = current->next;

            current->next = prev;

            prev = current;
            current = next;
        }

        return prev;
    }

    ListNode* Int_to_Linkedlist(long long num) {

        string s = to_string(num);

        ListNode* head = nullptr;
        ListNode* crnt = nullptr;

        for (char c : s) {

            ListNode* newNode = new ListNode(c - '0');

            if (head == nullptr) {
                head = newNode;
                crnt = head;
            } else {
                crnt->next = newNode;
                crnt = crnt->next;
            }
        }

        return head;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        l1 = reverseList(l1);
        l2 = reverseList(l2);

        ListNode* current = l1;

        long long num1 = 0;
        long long num2 = 0;

        while (current != nullptr) {
            num1 = num1 * 10 + current->val;
            current = current->next;
        }

        ListNode* current2 = l2;

        while (current2 != nullptr) {
            num2 = num2 * 10 + current2->val;
            current2 = current2->next;
        }

        long long sum = num1 + num2;

        ListNode* ans = Int_to_Linkedlist(sum);
        ans = reverseList(ans);
        return ans;
    }
};
# Definition for singly-linked list.


class ListNode:
    def __init__(self, val=0, Next=None):
        self.val = val
        self.Next = Next


class Solution:
    def __init__(self):
        pass

    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        temp = ListNode()
        print(temp.val)
        while l1 and l2:
            val = l1.val + l2.val
            if val >= 10:
                temp.val = temp.val + (val % 10)
                if temp.val >= 10:
                    temp.val = temp.val % 10
                    temp.Next = ListNode(1)
                else:
                    temp.val = temp.val + val
                    temp.Next = ListNode()
            l1 = l1.Next
            l2 = l2.Next
            temp = temp.Next

        if l1:
            while l1:
                val = temp.val + l1.val
                if val >= 10:
                    temp.val = temp.val + (val % 10)
                    if temp.val >= 10:
                        temp.val = temp.val % 10
                        temp.Next = ListNode(1)
                    else:
                        temp.val = temp.val + val
                        temp.Next = ListNode()
                l1 = l1.Next
                temp = temp.Next

        if l2:
            while l2:
                val = temp.val + l2.val
                if val >= 10:
                    temp.val = temp.val + (val % 10)
                    if temp.val >= 10:
                        temp.val = temp.val % 10
                        temp.Next = ListNode(1)
                    else:
                        temp.val = temp.val + val
                        temp.Next = ListNode()
                l2 = l2.Next
                temp = temp.Next

        return temp


print(Solution().addTwoNumbers(ListNode(2, ListNode(4, ListNode(3))),
                               ListNode(5, ListNode(6, ListNode(4)))))

# Last updated: 28/01/2026, 00:31:20
class Solution:
    def addTwoNumbers(self, l1, l2):
        a = ListNode()  
        b = a        
        c = 0  

        while l1 or l2 or c:
            x = l1.val if l1 else 0
            y = l2.val if l2 else 0

            s = x + y + c
            c = s // 10

            b.next = ListNode(s % 10)
            b = b.next

            if l1: l1 = l1.next
            if l2: l2 = l2.next

        return a.next

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    Mynum_1=""
    Mynum_2=""
    def ConvertToNum(self,MyList,num):
        while MyList!=None:
            num+=str(MyList.val)
            MyList=MyList.next
        return num

    def ReverseList(self,MyList):
        current=MyList
        Previous=current.next
        while Previous!=None:
            Temp=Previous.next
            Previous.next=current
            current=Previous
            Previous=Temp
        MyList.next=None
        return current
    def ConstructList(self,Mysum):
        Head=ListNode(int(Mysum[0]))
        PrevNode=Head
        if len(Mysum)>1:
            for i in range (1,len(Mysum)):
                NextNode=ListNode(int(Mysum[i]))
                PrevNode.next=NextNode
                PrevNode=NextNode
        PrevNode.next=None
        return Head
        
    def addTwoNumbers(self, l1, l2):
        l1=self.ReverseList(l1)
        l2=self.ReverseList(l2)
        self.Mynum_1=self.ConvertToNum(l1,self.Mynum_1)
        self.Mynum_2=self.ConvertToNum(l2,self.Mynum_2)
        Mysum=str(int(self.Mynum_1)+int(self.Mynum_2))
        return self.ReverseList(self.ConstructList(Mysum))

        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        
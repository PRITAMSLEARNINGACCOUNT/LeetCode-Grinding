#include<stdio.h>
#include<stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
void PrintLinkedList(struct ListNode *Head){
    printf("Printing The Linked List\n");
    while (Head!=NULL)
    {
        printf("%d\n",Head->val);
        Head=Head->next;
    }
}
struct ListNode *ReverseLinkedList(struct ListNode *Head){
    struct ListNode *Prev = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *Current = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *Temp = (struct ListNode *)malloc(sizeof(struct ListNode));
    Current=Head;
    Prev=Current->next;
    while (Prev!=NULL)
    {
        Temp=Prev->next;
        Prev->next=Current;
        Current=Prev;
        Prev=Temp;
    }
    Head->next=NULL;
    return Current;
    
}

unsigned long long ConvertToNum(struct ListNode* Head){
    unsigned long long MyNum=0;
    while (Head!=NULL)
    {
        MyNum+=Head->val;
        Head=Head->next;
        if (Head!=NULL)
        {
            MyNum*=10;
        }
        
    }
    return MyNum;
}
struct ListNode* ConstructLinkedListFromNumber(unsigned long long num) {
    struct ListNode *Head = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *PrevNode= (struct ListNode *)malloc(sizeof(struct ListNode));
    Head->val=num%10;
    num/=10;
    PrevNode=Head;
    while (num!=0)
    {
        struct ListNode *NextNode= (struct ListNode *)malloc(sizeof(struct ListNode));
        NextNode->val=num%10;
        num/=10;
        PrevNode->next=NextNode;
        PrevNode=NextNode;
    }
    PrevNode->next=NULL;
    return Head;
    
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    l1=ReverseLinkedList(l1);
    l2=ReverseLinkedList(l2);
    unsigned long long num1=ConvertToNum(l1);
    unsigned long long num2=ConvertToNum(l2);
    return ConstructLinkedListFromNumber(num1+num2);;
}
// int Testing(struct ListNode* l1, struct ListNode* l2) {
//     l1=ReverseLinkedList(l1);
//     l2=ReverseLinkedList(l2);
//     PrintLinkedList(l1);
//     // long num1=ConvertToNum(l1);
//     // long num2=ConvertToNum(l2);
//     // printf("%ld\n%ld\n",num1,num2);
//     // printf("%ld\n",num1+num2);

//     // ConstructLinkedListFromNumber(num1+num2);
//     return 0;
// }
int main(){
    struct ListNode *First = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *Second = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *Third = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *Fourth = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *Fifth = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *Sixth = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *Seven = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *Eight = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *Nine = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *Ten = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *Last = (struct ListNode *)malloc(sizeof(struct ListNode));
    First->val=1;
    First->next=Second;
    Second->val=9;
    Second->next=Third;
    Third->val=9;
    Third->next=Fourth;
    Fourth->val=9;
    Fourth->next=Fifth;
    Fifth->val=9;
    Fifth->next=Sixth;
    Sixth->val=9;
    Sixth->next=Seven;
    Seven->val=9;
    Seven->next=Eight;
    Eight->val=9;
    Eight->next=Nine;
    Nine->val=9;
    Nine->next=Ten;
    Ten->val=9;
    Ten->next=NULL;
    Last->val=9;
    Last->next=NULL;

    // struct ListNode *TempNode=ReverseLinkedList(Fourth);
    // PrintLinkedList(TempNode);
    // printf("%d\n",Testing(First,Last));
    return 0;
}
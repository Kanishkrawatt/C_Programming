#include <stdio.h>
#include <stdlib.h>
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode *Output, *Start = NULL, *Mover;
    int carry = 0, sum = 0;
    while (l1 != NULL || l2 != NULL)
    {
        if (l1 == NULL)
        {
            Output = (struct ListNode *)malloc(sizeof(struct ListNode));
            sum = l2->val + carry;
            carry = 0;
            if (sum > 9)
            {
                carry = sum / 10;
                sum = sum % 10;
            }
            Output->val = sum;
            Output->next = NULL;
            if (Start == NULL)
            {
                Start = Mover = Output;
            }
            else
            {
                Mover->next = Output;
                Mover = Output;
            }
            l2 = l2->next;
        }
        else if (l2 == NULL)
        {
            Output = (struct ListNode *)malloc(sizeof(struct ListNode));
            sum = l1->val + carry;
            carry = 0;
            if (sum > 9)
            {
                carry = sum / 10;
                sum = sum % 10;
            }
            Output->val = sum;
            Output->next = NULL;
            if (Start == NULL)
            {
                Start = Mover = Output;
            }
            else
            {
                Mover->next = Output;
                Mover = Output;
            }
            l1 = l1->next;
        }
        else
        {
            Output = (struct ListNode *)malloc(sizeof(struct ListNode));
            sum = l1->val + l2->val + carry;
            printf("%d", carry);
            carry = 0;
            if (sum > 9)
            {
                carry = sum / 10;
                sum = sum % 10;
            }
            Output->val = sum;
            Output->next = NULL;
            if (Start == NULL)
            {
                Start = Mover = Output;
            }
            else
            {
                Mover->next = Output;
                Mover = Output;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
    }
    if (carry != 0)
    {
        Output = (struct ListNode *)malloc(sizeof(struct ListNode));
        Output->val = carry;
        carry = 0;
        Output->next = NULL;
        Mover->next = Output;
        Mover = Output;
    }
    return Start;
}
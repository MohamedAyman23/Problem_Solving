#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* removeZeroSumSublists(struct ListNode* head) {
    struct ListNode* root = (struct ListNode*)malloc(sizeof(struct ListNode));
    root->val = 0;
    root->next = head;
    int ac = 0;
    struct ListNode* current = head;
    struct ListNode* prev = root;
    struct ListNode* temp;

    // Create a hash table to store the accumulated sum and the corresponding node
    int ht_size = 16;
    struct Hashtable {
        int key;
        struct ListNode* value;
    };
    struct Hashtable* ht = malloc(ht_size * sizeof(struct Hashtable));
    for (int i = 0; i < ht_size; i++) {
        ht[i].key = 0;
        ht[i].value = NULL;
    }
    ht[0].value = root;

    int ht_count = 1;

    while (current != NULL) {
        ac += current->val;

        if (ht_count == ht_size) {
            ht_size *= 2;
            ht = realloc(ht, ht_size * sizeof(struct Hashtable));
            for (int i = ht_count; i < ht_size; i++) {
                ht[i].key = 0;
                ht[i].value = NULL;
            }
        }

        if (ht[ac & (ht_size - 1)].value != NULL) {
            // Found a zero-sum sequence
            prev = ht[ac & (ht_size - 1)].value;
            struct ListNode* start = prev;

            // Delete bad references
            int aux = ac;
            while (prev != current) {
                prev = prev->next;
                aux += prev->val;
                if (prev != current) {
                    ht[aux & (ht_size - 1)].value = NULL;
                }
            }

            start->next = current->next;
        } else {
            ht[ac & (ht_size - 1)].value = current;
            ht_count++;
        }

        current = current->next;
    }

    temp = root;
    root = root->next;
    free(temp);
    free(ht);
    return root;
}

void push(struct ListNode** head, int data) {
    struct ListNode* new_node =
        (struct ListNode*)malloc(sizeof(struct ListNode));
    new_node->val = data;
    new_node->next = (*head);
    (*head) = new_node;
}

void printList(struct ListNode* node) {
    while (node != NULL) {
        printf("%d ", node->val);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct ListNode* head = NULL;

    push(&head, 5);
    push(&head, -3);
    push(&head, -4);
    push(&head, 1);
    push(&head, 6);
    push(&head, -2);
    push(&head, -5);

    printf("Original list: ");
    printList(head);

    head = removeZeroSumSublists(head);

    printf("Modified list: ");
    printList(head);

    return 0;
}

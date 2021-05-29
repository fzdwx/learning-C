#include <stdio.h>

#define DEFAULT_SIZE 0


struct Value{

};

/**
 * 链表中的节点
 */
struct Node {
    int num;
    struct Node *next;
    struct Node *prev;
    struct Value *value;
} head, last,
        head = {0, &last, NULL},
        last = {-1, NULL, &head};

/**
 * 链表
 */
struct LinkedList {
    struct Node *head;
    struct Node *last;
    int size;
} list = {&head, &last, DEFAULT_SIZE};

/**
 * 插入 在curr的下一个插入insert
 * @param currNode  当前节点
 * @param insertNode 要插入的节点
 */
void insertAfterCurr(struct Node *currNode, struct Node *insertNode) {
    if (list.size == 0) {
        list.head->next = insertNode;
        insertNode->prev = &head;

        list.last->prev = insertNode;
        insertNode->next = list.last;
    } else {
        struct Node *next = currNode->next;
        if (next != NULL) {
            next->prev = insertNode;
            insertNode->next = next;
        }
        insertNode->prev = currNode;
        currNode->next = insertNode;
    }
    list.size += 1;
}

/**
 * 添加元素到链表中 尾插
 * @param insert
 */
void add(struct Node *insert) {
    insertAfterCurr(list.last->prev, insert);
}

/**
 * 打印链表
 */
void print() {
    int size = list.size;
    if (size == 0) {
        return;
    }
    struct Node *curr = list.head->next;
    for (int i = 0; i < size; i++) {
        int num = curr->num;
        printf("%d ", num);
        curr = curr->next;
    }
}

int main() {

    struct Node n1 = {1};
    struct Node n2 = {2};
    struct Node n3 = {3};
    add(&n1);
    add(&n2);
    add(&n3);
    print();
}
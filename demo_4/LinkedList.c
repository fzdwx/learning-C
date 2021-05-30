/*****************************
 * @Createdby likelove
 * @contact  980650920@qq.com
 * @date 2021/5/30
 * @desc 环形双向链表
 *   x代表添加的元素
 *   大致结构:
 *        head-> x -> xx -> xxx -> tail -> head
 ******************************/

#include <stdio.h>

#define DEFAULT_SIZE 0

// Java味太重了

/**
 * 链表中的节点
 */
struct Node {
    long num;
    struct Node *next;
    struct Node *prev;
    char name[10];
} head, tail,
        head = {0, &tail, &tail},
        tail = {-1, &head, &head},
        null = {-2, NULL, NULL};

/**
 * 链表
 */
struct LinkedList {
    struct Node *head;
    struct Node *tail;
    int size;
} list = {&head, &tail, DEFAULT_SIZE};

struct Node createNode(long num, const char name[10]) {
    struct Node node = {num, NULL, NULL, name[10]};
    return node;
}

/**
 * 查找node在链表中的索引，不存在返回-1
 * @param find
 * @return index
 */
int getIndex(struct Node *find) {
    int size = list.size;
    if (size <= 0) return -1;

    struct Node *first = list.head->next;
    for (int i = 0; i < size; i++) {
        if (first == find) {
            return i;
        }
        first = first->next;
    }
    return -1;
}

/**
 * 获取对应索引位置的元素
 * @param index
 * @return *node
 */
struct Node *get(int index) {
    int size = list.size;
    if (index > size) return &null;

    struct Node *first = list.head->next;
    for (int i = 0; i < size; i++) {
        if (index == i) {
            return first;
        }
        first = first->next;
    }
    return &null;
}

/**
 * 插入 在curr的下一个插入insert
 * @时间复杂度 O(1)
 * @param currNode  当前节点
 * @param insertNode 要插入的节点
 */
void insertAfterCurr(struct Node *currNode, struct Node *insertNode) {
    if (list.size == 0) { // 第一次插入元素
        // head insert tail
        list.head->next = insertNode;
        insertNode->prev = &head;

        list.tail->prev = insertNode;
        insertNode->next = list.tail;
    } else { // 其他插入
        /*
         * curr insert next
         *
         * 1.断开curr 和 next
         * 2.连接curr -> insert
         * 3.连接insert -> next
         * 在C中不用进行1，直接操作指针
         */
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
 * 删除列表中的某个节点,-1删除失败，1删除成功
 * <pre>
 * 1.为了了保证极致性能，请保证要删除的节点存在于链表中。否则请用del方法
 * <br>
 * 2.入参remove 必须是完整的，也就是你添加的那个，否则请使用del方法
 * </pre>
 * @时间复杂度 O(1)
 * @param val
 * @return int
 */
int delete(struct Node *remove) {
    int size = list.size;
    if (size <= 0) return -1;

    if (size == 1) {
        if (remove->prev != list.head || remove->next != list.tail) return -1;
        /*
         * 当删除最后一个
         * head remove tail => head tail
         * 1.直接连接head -> tail
         */
        list.head->next = list.tail;
        list.head->prev = list.tail;

        list.tail->next = list.head;
        list.tail->prev = list.head;
    } else {
        /*
         * 其他删除
         * head prev remove next tail
         *
         * 1.断开 prev -> remove
         * 2.断开 remove-> next
         * 3.连接 prev -> next
         * 在c中不用进行1、2,直接操作指针
         */
        struct Node *next = remove->next;
        struct Node *prev = remove->prev;

        next->prev = prev;
        prev->next = next;

    }
    list.size--;
    return 1;
}

/**
 * 插入到指定索引位置
 * @时间复杂度 O(n)
 * @param index
 * @param insertNode
 */
void insert(int index, struct Node *insertNode) {
    insertAfterCurr(get(index)->prev, insertNode);
}

/**
 * 添加元素到链表中 尾插
 * @时间复杂度 O(1)
 * @param insert
 */
void add(struct Node *insert) {
    insertAfterCurr(list.tail->prev, insert);
}

/**
 * 删除最后一个元素
 * @return
 */
int delLast() {
    return delete(list.tail->prev);
}

/**
 * 删除指定索引位置的元素
 * @时间复杂度 O(n)
 * @param index
 * @return
 */
int del(int index) {
    struct Node *remove = get(index);
    if (remove == NULL) {
        return -1;
    }
    return delete(remove);
}

/**
 * 打印链表
 */
void toString() {
    int size = list.size;
    if (size == 0) {
        return;
    }
    printf("\n==========\nsize:\t%d\n正序:", size);
    struct Node *first = list.head->next;
    for (int i = 0; i < size; i++) {
        int num = first->num;
        printf("\t%d ", num);
        first = first->next;
    }
    printf("\n逆序:");
    struct Node *last = list.tail->prev;
    for (int i = 0; i < size; i++) {
        int num = last->num;
        printf("\t%d ", num);
        last = last->prev;
    }
    printf("\n==========\n");
}

int main() {
    struct Node n1 = createNode(1, "like");
    struct Node n2 = createNode(2, "Alice");
    struct Node n3 = createNode(3, "BOB");
    struct Node n4 = createNode(4, "Coke");
    add(&n1);
    add(&n3);
    add(&n2);
    toString();

    insert(0, &n4);
    toString();
    del(0);
    toString();
    printf("%d\n", delLast());
    printf("%d\n", delLast());
    printf("%d\n", delLast());
    printf("%d\n", delLast());
    printf("%d\n", delLast());
    toString();
}

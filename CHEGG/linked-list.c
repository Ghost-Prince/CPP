#include <stdlib.h>
#include <stdio.h>
struct list
{
    int val;
    struct list *next;
};
void list_add_head(struct list **head, struct list *item)
{
    item->next = *head;
    *head = item;
}
struct list *list_pop_head(struct list **head)
{
    struct list *cur;
    cur = *head;
    if (cur)
    {
        *head = cur->next;
        cur->next = NULL;
    }
    return cur;
}
int list_count(struct list *head)
{
    int size=0;
    while(head) {
        head=head->next;
        size++;
    }
    return size;
}
struct list *list_pop_tail(struct list *head)
{
    // pass *head as parameter, it would be easier.
    while(head->next->next) {
        head=head->next;
    }
    head->next=NULL;
    return NULL;
}
int main()
{
    int i;
    struct list *item;
    struct list *head = NULL;
    for (i = 0; i < 10; i++)
    {
        item = malloc(sizeof(*item));
        item->val = i;
        list_add_head(&head, item);
        printf("Added %p (val: %d) to list.\n", item, item->val);
    }
    printf("# of items: %d\n", list_count(head));
    while (item = list_pop_tail(&head))
    {
        printf("Removed %p (val: %d)\n", item, item->val);
        free(item);
    }
    return 0;
}
//    Purpose:  Learning Linked List

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int data;
    struct node *next;

} node;

node *head = NULL;

void insert_in_start(int d)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = d;
    node *temp = head;
    ptr->next = temp;
    head = ptr;
}

void insert_in_mid(int pos, int d)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = d;
    int i = 0;
    node *index_ptr = head;
    while (i < pos - 1)
    {
        index_ptr = index_ptr->next;
        if (index_ptr == NULL)
        {
            printf("Out of bound");
            return;
        }
        i++;
    }
    node *temp = (index_ptr->next);
    index_ptr->next = ptr;
    ptr->next = temp;
}

void insert_in_end(int d)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = d;
    node *index_ptr = head;
    while (index_ptr->next != NULL)
    {
        index_ptr = index_ptr->next;
    }
    index_ptr->next = ptr;
    ptr->next = NULL;
}

void delete_in_start()
{
    node *ptr = head;
    head = head->next;
    free(ptr);
}

void delete_in_mid(int d)
{
    int count = 0;
    node *temp = head;
    while ((count != (d - 1)) && temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    node *ptr = (temp->next)->next;
    free(temp->next);
    temp->next = ptr;
}

void delete_in_end()
{
    node *index_ptr = head;
    while ((index_ptr->next)->next != NULL)
    {
        index_ptr = index_ptr->next;
    }
    node *temp = index_ptr->next;
    index_ptr->next = NULL;
    free(temp);
}

void disp()
{
    node *temp = head;
    printf("The elements of the list are:");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void main()
{
    char sel, sele;
    int d, pos;
    while (1)
    {
        printf("****MENU FOR LINKED LISE****\nPRESS 1: To Initilize\nPRESS 2: To Insert\nPRESS 3: To Delete\nPRESS 4: To Display\nPRESS 5: To Exit\n=> ");
        scanf("%d", &sele);
        switch (sele)
        {
        case 1:
            if (head == NULL)
            {
                head = (node *)malloc(sizeof(node));
                printf("Enter the data for the 1st node");
                scanf("%d", &(head->data));
                head->next = NULL;
            }
            else
            {
                printf("The node can't be allocated");
            }
            break;
        case 2:
            printf("Where do you want to insert?\nPRESS 1: To insert in starting\nPRESS 2: To insert in the middle\nPRESS 3: To insert in end\n");
            scanf("%d", &sel);
            switch (sel)
            {
            case 1:
                printf("Enter the data to be inserted\n");
                scanf("%d", &d);
                insert_in_start(d);
                break;
            case 2:
                printf("Enter the data to be inserted\n");
                scanf("%d", &d);
                printf("Enter the position to be inserted");
                scanf("%d", &pos);
                insert_in_mid(pos, d);
                break;
            case 3:
                printf("Enter the data to be inserted\n");
                scanf("%d", &d);
                insert_in_end(d);
                break;
            }
            break;
        case 3:
            printf("Where do you want to delete?\nPRESS 1: To delete in starting\nPRESS 2: To delete in the middle\nPRESS 3: To delete in end\n");
            scanf("%d", &sel);
            switch (sel)
            {
            case 1:
                delete_in_start();
                break;
            case 2:
                printf("Enter the position to be deleted");
                scanf("%d", &pos);
                delete_in_mid(pos);
                break;
            case 3:
                delete_in_end();
                break;
            default:
                printf("Enter proper selection\n");
            }
            break;
        case 4:
            disp();
            break;
        case 5:
            exit(-1);
            break;
        default:
            printf("Enter proper selection");
        }
    }
}
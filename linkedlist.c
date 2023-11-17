#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
} *head;

void insert_front();
void insert_end();
void insert_any_loc();
void delete_front();
void delete_end();
void delete_any_loc();
void display();

int main() {
    int choice;
    do {
        printf("Enter the choice:\n1)insertion at front 2)insertion at end 3)insertion at any position 4)deletion at front 5)deletion at end 6)deletion at any position 7)display 8)exit\n");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            insert_front();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_any_loc();
            break;
        case 4:
            delete_front();
            break;
        case 5:
            delete_end();
            break;
        case 6:
            delete_any_loc();
            break;
        case 7:
            display();
            break;
        case 8:
            break;
        default:
            printf("Incorrect choice\n");
        }
    } while (choice != 8);

    return 0;
}

void insert_front() {
    int item;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d", &item);

    if (temp == NULL)
        printf("\nNo insertion");

    temp->data = item;
    temp->link = head;
    head = temp;
}

void insert_end() {
    int item;
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data:\n");
    scanf("%d", &item);
    temp->data = item;

    if (head == NULL) {
        head = temp;
        temp->link = NULL;
        return;
    }

    ptr = head;
    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = temp;
    temp->link = NULL;
}

void insert_any_loc() {
    int key, item;
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));

    printf("Enter the key:");
    scanf("%d", &key);

    if (head == NULL) {
        insert_front();
        return;
    }

    else{
    	    printf("Enter the data:");
            scanf("%d", &item);
    	    temp->data = item;	
	    ptr = head;
	    while (ptr->data != key && ptr->link != NULL)
		ptr = ptr->link;

	    temp->link = ptr->link;
	    ptr->link = temp;
	}
}

void delete_front() {
    struct node *ptr;

    if (head == NULL) {
        printf("\nList is empty.");
        return;
    }

    ptr = head;
    head = head->link;
    free(ptr);
}

void delete_end() {
    struct node *temp, *ptr;

    if (head == NULL) {
        printf("\nList is empty.");
        return;
    }

    ptr = head;

    if (head->link == NULL) {
        head = NULL;
        free(ptr);
        return;
    }

    while (ptr->link != NULL) {
        temp = ptr;
        ptr = ptr->link;
    }

    temp->link = NULL;
    free(ptr);
}

void delete_any_loc() {
    int pos;
    struct node *temp, *ptr;

    if (head == NULL) {
        printf("\nList is empty.");
        return;
    }

    printf("\nEnter the position:");
    scanf("%d", &pos);

    ptr = head;

    if (pos == 1) {
        head = head->link;
        free(ptr);
        return;
    }

    for (int i = 1; i < pos && ptr != NULL; i++) {
        temp = ptr;
        ptr = ptr->link;
    }

    if (ptr == NULL) {
        printf("\nPosition not found.");
        return;
    }

    temp->link = ptr->link;
    free(ptr);
}

void display() {
    struct node *ptr;
    ptr = head;

    if (ptr == NULL) {
        printf("\nList is empty.");
        return;
    }

    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
   printf("\n"); 
}

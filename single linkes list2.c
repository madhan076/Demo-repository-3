#include <stdio.h>
#include <stdlib.h>

#define NODE struct node

NODE {
    int n;
    NODE* next;
};

NODE* p, *q, *head = NULL;

void display() {
    if (head == NULL)
        printf("LINKED LIST IS EMPTY");
    else {
        printf("LIST is: ");
        q = head;
        while (q != NULL) {
            printf("%d->", q->n);
            q = q->next;
        }
        printf("NULL\n");
    }
}

void insertbeg() {
    printf("INSERT AT THE BEGINNING: ");
    p = (NODE*) malloc(sizeof(NODE));
    scanf("%d", &p->n);
    p->next = head;
    head = p;
    display();
}

void insertpos() {
    int pos, i = 1;
    printf("ENTER POSITION: ");
    scanf("%d", &pos);
    p = (NODE*) malloc(sizeof(NODE));
    printf("ENTER NODE DATA: ");
    scanf("%d", &p->n);
    if (pos == 1) {
        p->next = head;
        head = p;
    } else {
        q = head;
        while (i < pos - 1) {
            q = q->next;
            i++;
        }
        p->next = q->next;
        q->next = p;
    }
    display();
}

void insertend() {
    p = (NODE*) malloc(sizeof(NODE));
    printf("ENTER NODE DATA: ");
    scanf("%d", &p->n);
    p->next = NULL;
    if (head == NULL)
        head = p;
    else {
        q = head;
        while (q->next != NULL)
            q = q->next;
        q->next = p;
    }
    display();
}

void deletebeg() {
    if (head == NULL)
        printf("LIST IS EMPTY\n");
    else {
        p = head;
        head = head->next;
        free(p);
        display();
    }
}

void deletepos() {
    int pos, i = 1;
    printf("ENTER POSITION: ");
    scanf("%d", &pos);
    if (pos == 1)
        deletebeg();
    else {
        q = head;
        while (i < pos - 1) {
            q = q->next;
            i++;
        }
        p = q->next;
        q->next = p->next;
        free(p);
        display();
    }
}

void deleteend() {
    if (head == NULL)
        printf("LIST IS EMPTY\n");
    else if (head->next == NULL) {
        free(head);
        head = NULL;
        display();
    } else {
        q = head;
        while (q->next->next != NULL)
            q = q->next;
        p = q->next;
        q->next = NULL;
        free(p);
        display();
    }
}

int main() {
    int no, i, ch;
    printf("ENTER THE NO OF NODES: ");
    scanf("%d", &no);
    for (i = 1; i <= no; i++) {
        p = (NODE*) malloc(sizeof(NODE));
        printf("ENTER THE NODE DATA: ");
        scanf("%d", &p->n);
        if (head == NULL) {
            p->next = NULL;
            head = p;
        } else {
            q = head;
            while (q->next != NULL)
                q = q->next;
            q->next = p;
            p->next = NULL;
        }
    }
    display();
    do {
        printf("\n\t\tMAIN MENU\n");
        printf("1. INSERT AT BEGINNING\n");
        printf("2. INSERT AT POSITION\n");
        printf("3. INSERT AT END\n");
        printf("4. DELETE FROM BEGINNING\n");
        printf("5. DELETE FROM POSITION\n");
        printf("6. DELETE FROM END\n");
        printf("7. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                insertbeg();
                break;
            case 2:
                insertpos();
                break;
            case 3:
                insertend();
                break;
            case 4:
                deletebeg();
                break;
            case 5:
                deletepos();
                break;
            case 6:
                deleteend();
                break;
            case 7:
                exit(0);
        }
    } while (ch <= 7);
}

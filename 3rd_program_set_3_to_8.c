//Implement stack operations using arrays and linked lists.


#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

// Push
void push(int value) {
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else {
        top++;
        stack[top] = value;
        printf("Pushed %d\n", value);
    }
}

// Pop
void pop() {
    if (top == -1)
        printf("Stack Underflow\n");
    else {
        printf("Popped %d\n", stack[top]);
        top--;
    }
}

// Display
void display() {
    if (top == -1)
        printf("Stack is empty\n");
    else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}

// Main
int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}




#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

// Push
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    if (newNode == NULL)
        printf("Stack Overflow\n");
    else {
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        printf("Pushed %d\n", value);
    }
}

// Pop
void pop() {
    if (top == NULL)
        printf("Stack Underflow\n");
    else {
        struct Node* temp = top;
        printf("Popped %d\n", temp->data);
        top = top->next;
        free(temp);
    }
}

// Display
void display() {
    struct Node* temp = top;
    
    if (temp == NULL)
        printf("Stack is empty\n");
    else {
        printf("Stack elements:\n");
        while (temp != NULL) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

// Main
int main() {
    push(5);
    push(15);
    push(25);
    display();
    pop();
    display();
    return 0;
}














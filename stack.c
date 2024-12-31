#include <stdio.h>
#define MAXSIZE 5

typedef struct stack{
    int stk[MAXSIZE];
    int top;
} STACK;

STACK s;

void push(void);
int pop(void);
void display(void);

int main() {
    int choice;
    int option = 1;
    s.top = -1;
    printf("STACK OPERATIONS\n");
    while(option){
        printf("1. Push to the stack\n");
        printf("2. Pop from the stack\n");
        printf("3. Display the stack\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
        }
        fflush(stdin);
        printf("Do you want to continue(Type 0 or 1): ");
        scanf("%d", &option);
    }
}

void push(){
    int num;
    if (s.top == (MAXSIZE - 1)){
        printf("Stack is full\n");
        return;
    }
    else {
        printf("Enter the element to be pushed: ");
        scanf("%d", &num);
        s.top += 1;
        s.stk[s.top] = num;
    }
}

int pop(){
    int num;
    if (s.top == -1){
        printf("Stack is Empty\n");
        return (s.top);
    }
    else {
        num = s.stk[s.top];
        printf("Popped Element is %d \n", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return(num);
}
void display() {
    int i;
    if (s.top == -1){
        printf("Stack is empty");
    }
    else { 
        printf("\n The Stack looks like \n");
        for(i = s.top; i>= 0; i--){
            printf("%d\n", s.stk[i]);
        }
    }
    printf("\n");
}
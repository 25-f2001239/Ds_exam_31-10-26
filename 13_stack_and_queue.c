#include <stdio.h>

int main(void) {
    int stack[5];
    int queue[5];

    int top = -1;  // Stack is empty
    int front = 0; // Next queue item to remove
    int rear = 0;  // Next queue position to fill

    int command, value;

    do {
        scanf("%d", &command);

        if (command == 1) {               // Push onto stack
            scanf("%d", &value);
            if (top < 4) {
                stack[++top] = value;
            }
        } else if (command == 2) {        // Pop from stack
            if (top >= 0) {
                printf("%d\n", stack[top--]);
            } else {
                puts("Empty");
            }
        } else if (command == 3) {        // Add to queue
            scanf("%d", &value);
            if (rear < 5) {
                queue[rear++] = value;
            }
        } else if (command == 4) {        // Remove from queue
            if (front < rear) {
                printf("%d\n", queue[front++]);
            } else {
                puts("Empty");
            }
        }
    } while (command != 0);

    return 0;
}
#include <stdio.h>

int main(void) {
    int queue[5];
    int front = -1;
    int rear = -1;
    int command, value;

    do {
        scanf("%d", &command);

        if (command == 1) {  // Add an item
            if ((rear + 1) % 5 == front) {
                puts("Full");
            } else {
                scanf("%d", &value);

                if (front == -1) {
                    front = 0;  // First item in the queue
                }

                rear = (rear + 1) % 5;
                queue[rear] = value;
            }

        } else if (command == 2) {  // Remove the oldest item
            if (front == -1) {
                puts("Empty");
            } else {
                printf("%d\n", queue[front]);

                if (front == rear) {
                    front = rear = -1;  // Queue is now empty
                } else {
                    front = (front + 1) % 5;
                }
            }

        } else if (command == 3) {  // Display all items
            if (front == -1) {
                puts("Empty");
            } else {
                int i = front;

                while (1) {
                    printf("%d ", queue[i]);

                    if (i == rear) {
                        break;
                    }

                    i = (i + 1) % 5;
                }

                puts("");
            }
        }
    } while (command != 0);

    return 0;
}
#include <stdio.h>
#define SIZE 4
int cqueue[SIZE];
int front = -1, rear = -1;
void insert(){
int value;
if ((front == 0 && rear == SIZE - 1) || ((rear + 1) % SIZE == front)) {
printf("\nQueue overflow");
} else {
printf("Enter the value to be
inserted in queue: ");
scanf("%d", &value);
if (front == -1) {
front = rear = 0;
} else {
rear = (rear + 1) % SIZE;
}
cqueue[rear] = value;
printf("%d inserted into the circular queue", value);
}
}
void delete() {
if (front == -1) {
printf("\nQueue underflow");
} else {
printf("%d Deleted element->", cqueue[front]); if (front ==
rear) {
front = rear = -1;
} else {
front = (front + 1) % SIZE;
}
}
}
void display() {
if (front == -1) {
printf("\nCircular queue is empty");
} else {
printf("\nCircular queue elements are:\n");
int i = front;
while (1) {
printf("%d ", cqueue[i]);
if(i == rear)
break;
i = (i + 1) % SIZE;
}
printf("\n");
}
}
int main() {
int choice;
printf("Circular queue using array\n");
while (1) {
printf("\n1.Insert an element\n2.Delete an element\n3.Display the
queue\n4.Exit\nEnter your choice: "); scanf("%d", &choice);
switch (choice){
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
return 0;
default:
printf("Invalid choice");
}
}
}

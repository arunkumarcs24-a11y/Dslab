#include <stdio.h>
#include <stdio.h>
#define SIZE 3
int top = -1;
int arr[SIZE];
int push();
int pop();
void display();
int main() {
while (1) {
int choice;
printf("\nMenu:\n1.Push\n2.Pop\n3.Display\n4.
Exit"); printf("\nEnter your choice: ");
scanf("%d", &choice);
if(choice == 1){
push();
} else if(choice == 2) {
pop();
} else if(choice == 3) {
display();
} else {
return 0;
}
}
}
int push(){
int ele;
if (top == (SIZE - 1)) {
printf("\nStack overflow");
return 0;
} else {
printf("\nEnter the value to be inserted: ");
scanf("%d", &ele);
top = top + 1;
arr[top] = ele;
printf("\n%d Insertion successful!!");
}
return 0;
}
int pop(){
if (top == -1) {
printf("\nStack Underflow");
return 0;
} else {
printf("\n%d Deleted", arr[top]);
top = top - 1;
}
return 0;
}
void display() {
if (top == -1) {
printf("\nStack Underflow");
return;
}
for (int i = top; i >= 0; i--) {
printf("%d ", arr[i]);
}
printf("\n");
}

#include <stdio.h>
int size = 10;
int stack[10];
int top = -1;

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}

int isfull() {

   if(top == size)
      return 1;
   else
      return 0;
}
int peek() {
   return stack[top];
}
int pop() {
   int data;

   if(!isempty()) {
      data = stack[top];
      top = top - 1;
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}
int push(int data) {

   if(!isfull()) {
      top = top + 1;
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}
int main() {
    push(1);
    push(4);
   push(3);
   push(5);
   push(9);
   push(1);
   push(12);
   push(15);
   push(0);
   printf("Element at top of the stack: %d\n" ,peek());
   printf("Elements: \n");
   while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
   }

   printf("Stack full: %s\n" , isfull()?"1":"0");
   printf("Stack empty: %s\n" , isempty()?"1":"0");

   return 0;
}

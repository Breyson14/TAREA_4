#include "stack.h"

#define STACK_MAX_SIZE 100

static unsigned int stack[STACK_MAX_SIZE];
static int top;

void stack_init() {
    top = -1;
}

int stack_push(unsigned int value) {
    if (stack_is_full()) {
        return -1;
    }
    stack[++top] = value;
    return 0;
}

int stack_pop() {
    if (stack_is_empty()) {
        return -1;
    }
    return stack[top--];
}

int stack_is_empty() {
    return top == -1;
}

int stack_is_full() {
    return top == STACK_MAX_SIZE - 1;
}

unsigned int stack_size() {
    return (unsigned int)(top + 1);
}


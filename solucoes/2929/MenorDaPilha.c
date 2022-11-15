#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pilha {
    int size;
    int top;
    struct Pilha *previous;
    void (*push)(struct Pilha*,int);
    void (*pop)(struct Pilha*);
} Pilha;

Pilha* pilha();

void pilha_push(Pilha *stack,int value){
    Pilha *aux = malloc(sizeof(Pilha));
    memcpy(aux,stack,sizeof(*stack));
    stack->size++;
    stack->top = value;
    stack->previous = aux;
}

void pilha_pop(Pilha *stack){
    Pilha *prev = stack->previous;
    memcpy(stack,prev,sizeof(*prev));
    free(prev);
}

Pilha* pilha() {
    Pilha* stack = malloc(sizeof(Pilha));
    stack->size = 0;
    stack->top = 0;
    stack->previous = NULL;
    stack->push = pilha_push;
    stack->pop = pilha_pop;
    return stack;
}

int main() {
    int n,v;
    char string[10];
    Pilha *stack = pilha(); 

    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%s", &string);
        if(strcmp(string,"PUSH") == 0) {
            scanf("%d", &v);
            if(stack->size && stack->top < v) {
                stack->push(stack,stack->top);
            }
            else stack->push(stack,v);
        }
        if(strcmp(string,"POP") == 0) {
            if(stack->size)stack->pop(stack);
            else printf("EMPTY\n");
        }
        if(strcmp(string,"MIN") == 0) {
            if(stack->size)printf("%d\n",stack->top);
            else printf("EMPTY\n");
        }
    }

    free(stack);

    return 0;
}

#ifndef STACK_H
#define STACK_H

/* Il parametro T indica il tipo di classe Stack da realizzare, inoltre anche
le definizione delle funzioni all'esterno della definizione della clasee devono
essere implementate utilizzando template<typename T>.

Nota: Al posto di T puo' essere adoperato qualsiasi identificatore valido.

Si provvede alla creazione della struttura dati pila/stack (LIFO).*/
template<typename T>
class Stack.h
{
    public:
        // Costruttore di default
        Stack(int dim = 15);

        // Distruttore
        ~Stack() { delete [] stack_; }

        // Inserisce un elemento in testa allo stack
        bool push(const T&);

        // Estrae un elemento dalla testa dello stack
        bool pop(T&);

        // Verifica se  lo stack e' vuoto
        bool isEmpty() const { return top == -1; }

        // Verifica se lo stack e' pieno
        bool isFull() const { return top == size - 1; }

    private:
        int size;       // Gli elementi dello stack
        int top;        // Elemento in testa allo stack
        T   *stack_;    // Puntatore alla rappresentazione interna dello stack
};

#endif

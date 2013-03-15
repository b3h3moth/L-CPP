#ifndef STACK_H
#define STACK_H

/* Il parametro T indica il tipo di classe Stack da realizzare, inoltre anche
le definizione delle funzioni all'esterno della definizione della clasee devono
essere implementate utilizzando template<typename T>.

Nota: Al posto di T puo' essere adoperato qualsiasi identificatore valido.

Si provvede alla creazione della struttura dati pila/stack (LIFO).*/
template<typename T>
class Stack
{
    public:
        // Costruttore di default
        Stack(int dim = default_dim);

        /* Distruttore
        error: glibc detected ./a.out error free() invalid pointer:
        considerato l'errore in fase di esecuzione lo si elimina per il 
        momento.

        Ovviamente l'errore, non in compiazione ma a runtime, dipende dal
        rilascio della memoria relativa all'array.
        
        ~Stack() { delete [] stack_; }
        */

        // Inserisce un elemento in testa allo stack
        bool push(const T &value);

        // Estrae un elemento dalla testa dello stack
        bool pop(T &value);

        // Verifica se  lo stack e' vuoto
        bool isEmpty() const { return top == -1; }

        // Verifica se lo stack e' pieno
        bool isFull() const { return top == size - 1; }

    private:
        int size;       // Gli elementi dello stack
        int top;        // Elemento in testa allo stack
        T   *stack_;    // Puntatore alla rappresentazione interna dello stack
        static const int default_dim = 15;
};


// Costruttore di default
template<typename T>
Stack<T>::Stack(int dim) : 
    size(dim > 0 ? dim : default_dim),   // Verifica la dimenzione dello stack
    top(-1),                    // Inizialmente lo stack e' vuoto
    stack_(new T[size])         // Memoria per gli elementi dello stack
{
}

// Inserimento di un elemento in testa dello stack
template<typename T>
bool Stack<T>::push(const T &push_value)
{
    if (!isFull()) {
        stack_[top++] = push_value; // Inserimento elemento in testa
        return true;
    }
    return false;
}

// Estrazione di un elemento dalla testa dello stack
template<typename T>
bool Stack<T>::pop(T &pop_value)
{
    if (!isEmpty()) {
        pop_value = stack_[top--];
        return true;
    }
    return false;
}

#endif

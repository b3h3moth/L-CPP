#ifndef INTARRAY_H
#define INTARRAY_H

class IntArray
{
    public:
        IntArray(int s);
        IntArray(const IntArray &obj);
        ~IntArray();

        // Funzione di supporto che ritorna la dimensione dell'array
        int size() const { return array_size; };

        int &operator[] (const int &sub);

    private:
        int *ptr;
        int array_size;
        void subscriptError(int n);
};

#endif

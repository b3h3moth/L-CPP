#ifndef ARRAY_H
#define ARRAY_H

class Array
{
    friend ostream &operator<<(ostream &input, const Array &arr);
    friend istream &operator>>(istream &output, Array &arr);
    
    public:
	Array(int array_size = 10);
	Array(const Array &);
	~Array();

	int getSize() const;

	const Array &operator=(const Array &right_operand);
	bool operator==(const Array &right_operand) const;

	// Sfrutta la ridefinizione dell'operatore di uguaglianza
	inline bool operator!=(const Array &right_operand) const
	{
	    return ! (*this == right_operand);
	}

	int &operator[](int subscript);
	int &operator[](int subscript) const;

    private:
    	int size;
	int *ptr;
};

#endif

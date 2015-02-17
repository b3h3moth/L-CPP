#ifndef STRING_H
#define STRING_H

#include <iostream>
using namespace std;

class String
{
    friend ostream &operator<<(ostream &output, const String &str);
    friend istream &operator>>(istream &input, String &atr);
    
    public:
        String(const char *str = "");
	String(const String &copy); 
	~String(); 
	
	const String &operator=(const String &right_operand); 
	const String &operator+=(const String &right_operand); 
	bool operator!() const;
	bool operator==(const String &right_operand) const; 
	bool operator<(const String &right_operand) const;
	
	// Verifica se una stringa e' diversa da un'altra
	inline bool operator!=(const String &right_operand) const
	{
	    return !(*this == right_operand);
	}
	
	// Verifica se la dimensione di una stringa e' > di un'altra
	bool operator>(const String &right_operand) const
	{
	    return right_operand < *this;
	}
	
	// Verifica se la dimensione di una stringa e' <= di un'altra
	bool operator<=(const String &right_operand) const
	{ 
	    return !(right_operand < *this);
	} 
	
	// Verifica se la dimensione di una stringa e' >= di un'altra
	bool operator>=(const String &right_operand) const
	{
	    return !(*this < right_operand);
	}
	
	char &operator[](int subscript);
	char operator[](int subscript) const;
	String operator()(int index, int subLength= 0) const;
	int getLength() const;
    
    private:
    	int length;
	char *sPtr; 
	
	void setString(const char *string2); 
};

#endif

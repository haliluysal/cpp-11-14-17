#pragma once
#include <iostream>

class Integer
{
private:
	int *m_pInt;
public:
	Integer();
	Integer(int value);
	Integer(const Integer &obj);
	int GetValue() const;
	void SetValue(int value);

	~Integer();

	Integer operator +(const Integer &obj) const;
};


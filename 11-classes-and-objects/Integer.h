#pragma once

class Integer {
private:
	int* m_pInt;

public:
	Integer();
	Integer(int value);

	int GetValue() const;
	void SetValue(int value);

	~Integer();
};
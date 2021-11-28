#include "Integer.h"

Integer::Integer() 
{
    *m_pInt = 0;
}

Integer::Integer(int value) 
{
    *m_pInt = value;
}

Integer::Integer(const Integer &obj) 
{
    *m_pInt = *obj.m_pInt;
}

int Integer::GetValue() const
{
    return *m_pInt;
}

void Integer::SetValue(int value) 
{
    *m_pInt = value;
}

Integer::~Integer() 
{
    delete m_pInt;
}

Integer Integer::operator +(const Integer &obj) const
{
    Integer temp;
    *temp.m_pInt = *obj.m_pInt + *this->m_pInt;
    return temp;
}

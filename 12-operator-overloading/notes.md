- custom implementation for primitive operators
- allows usage of user defined objects in math exps
- can be member or global function

* <ret> operator<#>(<arguments>)

* global functions:

  - require same n of args as the operands

* member functions:

  - one operand is passed as arg through "this" pointer

  Ex:
  integer operator+(const integer &, const integer &) -- Global
  integer operator+(const integer&) -- member function

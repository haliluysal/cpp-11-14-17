/*

- C Style memory allocation

* malloc: alocates raw memory on the heap
* calloc: allocates raw memory on the heap
* realloc: allocates larger chunks of memory for an existing allocation
* free: de allocates
* after freeing a memory with pointer, assign that pointer with NULL.


- C++ style memory allocation

* new: allocates memory
* delete: de allocates the memory
*		<type> *<var> = new <type> 


- malloc											new
* function											operator
* requires size during the allocation				size is ascertained from the type
* cannot initialize memory							can initialize memory
* caanot call constructors							can call constructors
* needs type casting (void pointer)					returns correct type of pointer
* cannot be customized								customized through overloading
* returns NULL on failure							throws exception
* 

*/
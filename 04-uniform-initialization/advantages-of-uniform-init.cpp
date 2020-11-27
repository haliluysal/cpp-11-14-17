/*

- use {} to initialize all types

+ uniform syntax
+ forces initialization of both scalar and array types
+ prevents bugs when initialization incompatible types.
+ prevent narrowing conversions (for initialization of int with float will create warning or error)


recap:
	1. Value initialization		=>	t obj{};
	2. Direct Initialization	=>	t obj{v};
	3. copy initialization		=>	t obj = v; // try to aboid this
	4. uniform syntax

*/
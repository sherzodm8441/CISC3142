_Exercise 2.1:_ What are the differences between int, long, long long,
and short? Between an unsigned and a signed type? Between a float and
a double?
- Int - 16 bits
- Long - 32 bits
- Long long - 64 bits
- Short - 16 bits
- Unsigned - only positive numbers
- Signed - positive and negative
- Float - 32 bits
- Double - 64 bits

__Exercise 2.2:__ To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.

I would use double for all three. All three can (most likely) have decimals, sticking to doubles would make calculations easier. 

__Exercise 2.3:__ What output will the following code produce?

    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;

Result: 4294967264
32
-32
0
0

__Exercise 2.10:__ What are the initial values, if any, of each of the following
variables?

    std::string global_str; //empty string
    int global_int; // 0
    int main()
    {
    int local_int; //uninitialized
    std::string local_str; //empty string
    }

__Exercise 2.12:__ Which, if any, of the following names are invalid?

    (a) int double = 3.14; //invalid, double in the var name not the type
    (b) int _;
    (c) int catch-22;
    (d) int 1_or_2 = 1;
    (e) double Double = 3.14;


__Exercise 2.13:__ What is the value of j in the following program?

    int i = 42;
    int main()
    {
    int i = 100; int j = i;
    }

Result: J = 100

__Exercise 2.14:__ Is the following program legal? If so, what values are printed?

    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
    sum += i;
    std::cout << i << " " << sum << std::endl;

Result: 100 45

__Exercise 2.17:__ What does the following code print?

    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;

Result: 10 10


__Exercise 2.27:__ Which of the following initializations are legal? Explain why.

    (a) int i = -1, &r = 0;
    (b) int *const p2 = &i2; //const pointer pointing to i2
    (c) const int i = -1, &r = 0;
    (d) const int *const p3 = &i2; 
    (e) const int *p1 = &i2; //pointer to const 
    (f) const int &const r2;
    (g) const int i2 = i, &r = i;


__Exercise 2.28:__ Explain the following definitions. Identify any that are illegal.

    (a) int i, *const cp; //integer i var, const cp pointer 
    (b) int *p1, *const p2; //p1 int pointer, const p2 pointer
    (c) const int ic, &r = ic; //contant ic int var, &r reference to ic
    (d) const int *const p3; //illegal
    (e) const int *p; //pointer to constant int


0x0C. C - More malloc, free

Write a function that allocates memory using malloc.

Task 0)  Prototype: void *malloc_checked(unsigned int b);
Returns a pointer to the allocated memory
if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98.


Task 1)  Write a function that concatenates two strings.

Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
If the function fails, it should return NULL
If n is greater or equal to the length of s2 then use the entire string s2
if NULL is passed, treat it as an empty string.


Task 2)  Write a function that allocates memory for an array, using malloc.

Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
The memory is set to zero
If nmemb or size is 0, then _calloc returns NULL
If malloc fails, then _calloc returns NULL
FYI: The standard library provides a different function: calloc. Run man calloc to learn more.


Task 3)    Write a function that creates an array of integers.

Prototype: int *array_range(int min, int max);
The array created should contain all the values from min (included) to max (included), ordered from min to max
Return: the pointer to the newly created array
If min > max, return NULL
If malloc fails, return NULL.


Task 4)    Write a function that reallocates a memory block using malloc and free

Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
old_size is the size, in bytes, of the allocated space for ptr
and new_size is the new size, in bytes of the new memory block.


Task 5)     Write a program that multiplies two positive numbers.

Usage: mul num1 num2
num1 and num2 will be passed in base 10
Print the result, followed by a new line
If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98
num1 and num2 should only be composed of digits. If not, print Error, followed by a new line, and exit with a status of 98
You are allowed to use more than 5 functions in your file
You can use bc (man bc) to check your results.
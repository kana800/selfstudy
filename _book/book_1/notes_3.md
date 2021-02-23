Data structures can be classified into two types:
- Contiguously-allocated structures
- Linked Data structures

Contiguously-allocated structures are composed of single slabs of memory (like a book shelf)

Linked Data structures are composed of distinct chunks of memory bound together by pointers. (like a train)


#### Arrays

- Array is a contiguously allocated data structure. Analogy of an array would be street full of houses, the address of house would be the index and inside the house can be considered as the data inside the array.
- Advantages of arrays are :
  - Constant time access given the index
  - Space efficiency
  - Memory locality
- Disadvantage of arrays:
  - cannot adjust the size, what we can do is **dynamic memory allocation** where a new array is created (*size depends*) and contents of the current array is copied into the new array.
  - primary thing lost using dynamic arrays is the guarantee that each array access takes constant time in the worst case

#### Pointer and Linked Structures

- Pointer are **connections** that hold the pieces of linked structures together.
- Pointer represent the address of location in the memory. Analogy of a pointer would be a cellphone number *points* to the owner of the phone.
- In `C` pointer is defined as `*p` and can store the address (`&x`) of variable x. 

```C
int *p = &x;
```

- we can dereference a pointer using `*` sign. 

```c
printf("dereferencing a pointer %d",*p);
```

#### Linked List vs Static Arrays

Linked List :

- Overflow on linked structures can never occur unless memory is actually full 
- Insertions and deletions are simpler than contiguous lists.
- easier access using pointers for larger records

Arrays :

- Linked structures require extra space for storing pointer fields
- Linked lists do not allow efficient random access to items
- Arrays allow better memory locality and cache performance than random pointer jumping

#### Stacks and Queues

- *container* : A data structure that permits storage and retrieval of data items *independent o content* and are distinguished according to the retrieval order
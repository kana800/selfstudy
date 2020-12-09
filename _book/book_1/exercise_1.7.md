#### Introduction to Algorithm Design

##### Finding Counterexamples

- show that `a+b` can be less than `min(a,b)`

consider `a` & `b` to be negative numbers

```
a = -1
b = -2
a + b = -3
min(a,b) = -2
```

- show that `a x b` can be less that `min(a,b)`

```
a = -1
b = 2
a x b = -2
min(a,b) = -1
```

- Draw a road network with two points `a` & `b` such that fastest route between `a` & `b` is not the shortest route

Assume that the distance between `a` to `c` is `50 Km` and the distance between `c` to `b` is `50 Km`, so the total distance is `80 Km`, The distance between `a` to `b` is `50 Km`, but there is **traffic**. You can travel the route `a to c to b` at `50 kmph` so it would take you 2 hours and you can travel the route `a to b` at `10 kmph` so it would take you 5 hours.  

```
a --------------------- b
|-----------c-----------|
```

- The knapsack problem.

  - element of `S` in the **knapsack** in **left to right order** `s = {1,2,3}` and `T = 5`

  |      | Knapsack | Sum     |
  | ---- | -------- | ------- |
  | 1    | 1        | `1 < 5` |
  | 2    | 1,2      | `3 < 5` |
  | 3    | 1,2,3    | `6 > 5` |

  - element of `S` in the **knapsack** in **smallest to largest** `s = {4,7,8}` and `T = 8`

  |      | Knapsack | Sum      |
  | ---- | -------- | -------- |
  | 1    | 4        | `4 < 8`  |
  | 2    | 4,7      | `11 < 8` |
  | 3    | 4,7,8    | `19 > 8` |

  - element of `S` in the **knapsack** in **largest to smallest** `s = {4,7,8}` and `T = 7`

  |      | Knapsack | Sum      |
  | ---- | -------- | -------- |
  | 1    | 8        | `8 > 7`  |
  | 2    | 8,7      | `15 > 8` |
  | 3    | 8,7,4    | `19 > 8` |

- *Set Cover problem* 

```
U = {1,2,3,4,5,6,7,8,9,10}
s1 = {4,5,6,7,8,9}
s2 = {1,5,6,8}
s3 = {1,3,5,7,9}
s4 = {2,4,6,8,10}
```

According to the given algorithm: `s1` will be selected because its the largest algorithm and then all its elements are removed and the **next largest number of uncovered set** is `10` which on the `s4` and the next largest element would be `1` which on `s2`, the optimal solution is `s3 and s4`

##### Proofs of Correctness

- Trying to prove that for all the values of `y` and `z` we have a `multiply(y,z)= y x c`

*Base case* is when `z` is `0` , `multiply(y,0) = y x 0 = 0`. 

When `z > 0` this will execute *else* , 

```
multiply(cy,(z/c)) + y.(z mod c)
cy.(z/c) + y.(z mod c)->(1)
```

We know that `c >= 2`, we can see that `y` is common in the *equation  1* we can simplify this further,

```
y(c.(z/c) + z mod c)
```

The *expression*  inside the brackets can be reduced down to `z`, therefore : 

```
multiply(cy,(z/c)) + y.(z mod c)  = y . z
```

- Trying to prove that for all the values of `A` and `x`  we get  `P(x)`

Expanding the algorithm:
$$
P_{x} = a_{n}x^{n} + a_{n-1}x^{n-1}
$$

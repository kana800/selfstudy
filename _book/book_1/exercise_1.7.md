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

- Trying to prove that for all the values of `A` and `x`  we [get](https://en.wikipedia.org/wiki/Polynomial#Polynomial_notation)  `P(x)`

*Base case* is when `n = 0`,returns ` P(x)= a0`

when `n > 0`, assuming `n+1`

![equation](https://latex.codecogs.com/png.latex?q%28x%29%20%3D%20a_%7Bx&plus;1%7Dx%5E%7Bn&plus;1%7D&plus;a_%7Bn%7Dx%5E%7Bn%7D&plus;...&plus;a_%7B0%7D)

its is given that `p = p * x + A` (at the end of loop), we can say that,

![](https://latex.codecogs.com/png.latex?p1%28x%29%20%3D%20q%28x%29*x%20&plus;%20a_%7B0%7D)

Hence, `p1(x)`,

![](https://latex.codecogs.com/png.latex?P%28x%29%20%3Da_%7Bn%7Dx%5E%7Bn%7D&plus;a_%7Bn-1%7Dx%5E%7Bn-1%7D&plus;...&plus;a_%7B1%7Dx&plus;a_%7B0%7D)

- Trying to prove the correctness of a sorting algorithm, `n` is the number of elements in the array

*Base case* is when `n = 1`, gives us the `A` array (nothing to swap)

The resulting array of this algorithm needs to be sorted from smallest to largest. At the end of `x` iteration of the outer loop the `n-x`th element of the array is in sorted order. for the `x+1` iterations of the outer loop, the highest element would be      `n-(x+1)`. Let `A = [6,2]` 

| iterations(x) | Array Element | Swap           |
| ------------- | ------------- | -------------- |
| `x = 1`       | 6             | -              |
| `x = 2`       | 2             | `6,2` -> `2,6` |

At the end of `x` iteration `n-x` element element is in sorted order, according to the above example at 2nd iteration `x = 2` , the element  at  index `n-x` is `2`.  

##### Induction

![](https://latex.codecogs.com/gif.latex?%5Csum_%7Bi%3D1%7D%5E%7Bn%7Di%20%3D%20%5Cfrac%7Bn%28n&plus;1%29%7D%7B2%7D)

*Base case*: when `n=1`,

![](https://latex.codecogs.com/gif.latex?1%20%3D%20%5Cfrac%7B1%281&plus;1%29%7D%7B2%7D)

![](https://latex.codecogs.com/gif.latex?1%20%3D%20%5Cfrac%7B2%7D%7B2%7D)

*Induction step*: Assuming **True**  when `n = k` (1),

![](https://latex.codecogs.com/gif.latex?%5Csum_%7Bi%3D1%7D%5E%7Bn%20%3D%20k%7Di%20%3D%20%5Cfrac%7Bk%28k&plus;1%29%7D%7B2%7D)

when  `n = k + 1`,

![](https://latex.codecogs.com/gif.latex?%5Csum_%7Bi%3D1%7D%5E%7Bn%20%3D%20k&plus;1%7Di%20%3D%20%5Cfrac%7B%28k&plus;1%29%28%28k&plus;1%29&plus;1%29%7D%7B2%7D)

Left Hand Side,

![](https://latex.codecogs.com/gif.latex?1&plus;2&plus;...&plus;k&plus;%28k&plus;1%29)

Right Hand Side,

![](https://latex.codecogs.com/gif.latex?%5Cfrac%7B%28k&plus;1%29%28k&plus;2%29%7D%7B2%7D%3D%20%5Cfrac%7Bk%28k&plus;1%29%7D%7B2%7D%20&plus;%20%28k%20&plus;%201%29)

Therefore,

![](https://latex.codecogs.com/gif.latex?1%20&plus;2&plus;%20...%20&plus;k%20&plus;%28k&plus;1%29%3D%20%5Cfrac%7B%28k&plus;1%29%28k&plus;2%29%7D%7B2%7D)

:black_large_square:

---

![](https://latex.codecogs.com/gif.latex?%5Csum_%7Bi%3D1%7D%5E%7Bn%7Di%5E%7B2%7D%20%3D%20%5Cfrac%7Bn%28n&plus;1%29%282n&plus;1%29%7D%7B6%7D)

*Base case*: when `n=1`,

![](https://latex.codecogs.com/gif.latex?1%5E%7B2%7D%20%3D%20%5Cfrac%7B1%281&plus;1%29%282%5Ccdot%201%20&plus;1%29%7D%7B6%7D)

![](https://latex.codecogs.com/gif.latex?1%5E%7B2%7D%20%3D%20%5Cfrac%7B6%7D%7B6%7D)

*Induction step*: Assuming **True** when `n = k`(1),

![](https://latex.codecogs.com/gif.latex?%5Csum_%7Bi%20%3D1%7D%5E%7Bn%3Dk%7Di%5E%7B2%7D%20%3D%20%5Cfrac%7Bk%28k&plus;1%29%282k&plus;1%29%7D%7B6%7D)

Left Hand Side,

![](https://latex.codecogs.com/gif.latex?1%5E%7B2%7D%20&plus;%202%5E%7B2%7D%20&plus;%20...%20&plus;%20k%5E%7B2%7D)

when `n = k + 1`,

![](https://latex.codecogs.com/gif.latex?%5Csum_%7Bi%20%3D1%7D%5E%7Bn%3Dk&plus;1%7Di%5E%7B2%7D%20%3D%20%5Cfrac%7B%28k&plus;1%29%28%28%28k&plus;1%29&plus;1%29%282%28k&plus;1%29&plus;1%29%29%7D%7B6%7D)

Left Hand Side,

![](https://latex.codecogs.com/gif.latex?%281%5E%7B2%7D&plus;2%5E%7B2%7D&plus;...&plus;k%5E%7B2%7D%29&plus;%28k&plus;1%29%5E%7B2%7D)

![](https://latex.codecogs.com/png.latex?%5Cfrac%7Bk%28k&plus;1%29%282k&plus;1%29%7D%7B6%7D&plus;%20%28k&plus;1%29%5E%7B2%7D)

Right Hand Side,

![](https://latex.codecogs.com/png.latex?%5Cfrac%7B%28k&plus;1%29%28k&plus;2%29%282k&plus;3%29%7D%7B6%7D)

![](https://latex.codecogs.com/png.latex?%5Cfrac%7B%28k%5E%7B2%7D&plus;2k&plus;k&plus;2%29%282k&plus;3%29%7D%7B6%7D)

![](https://latex.codecogs.com/png.latex?%5Cfrac%7B2k%5E%7B3%7D&plus;9k%5E%7B2%7D&plus;13k&plus;6%7D%7B6%7D)

Simplifying Left Hand side to get the Right Hand Side,

![](https://latex.codecogs.com/png.latex?%5Cfrac%7Bk%28k&plus;1%29%282k&plus;1%29&plus;6%28k&plus;1%29%5E%7B2%7D%7D%7B6%7D)

![](https://latex.codecogs.com/png.latex?%5Cfrac%7B%28k%5E%7B2%7D&plus;k%29%282k&plus;1%29&plus;6%28k%5E%7B2%7D&plus;2k&plus;1%29%7D%7B6%7D)

![](https://latex.codecogs.com/png.latex?%5Cfrac%7B2k%5E%7B3%7D&plus;9k%5E%7B2%7D&plus;13k&plus;6%7D%7B6%7D)

The *Left hand side* is **equal** to *right hand side* thus concluding the induction step. :black_large_square:

---

![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%3D1%7D%5E%7Bn%7Di%5E%7B3%7D%20%3D%20%5Cfrac%7Bn%5E%7B2%7D%28n&plus;1%29%5E%7B2%7D%7D%7B4%7D)

*Base Case*: when `n=1`,

![](https://latex.codecogs.com/png.latex?1%5E%7B3%7D%20%3D%20%5Cfrac%7B1%5E%7B2%7D%281&plus;1%29%5E%7B2%7D%7D%7B4%7D)

*Induction step*: Assuming **True** when `n = k`(1),

![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%3D1%7D%5E%7Bn%20%3D%20k%7Di%5E%7B3%7D%20%3D%20%5Cfrac%7Bk%5E%7B2%7D%28k&plus;1%29%5E%7B2%7D%7D%7B4%7D)

Left Hand Side,

![](https://latex.codecogs.com/png.latex?1%5E%7B3%7D%20&plus;%202%5E%7B3%7D%20&plus;%20...%20&plus;%20k%5E%7B3%7D)

when `n = k + 1`,

![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%3D1%7D%5E%7Bn%3Dk&plus;1%7Di%5E%7B3%7D%20%3D%20%5Cfrac%7B%28k&plus;1%29%5E%7B2%7D%28%28k&plus;1%29&plus;1%29%5E%7B2%7D%7D%7B4%7D)

 Left Hand Side,

![](https://latex.codecogs.com/png.latex?%281%5E%7B3%7D%20&plus;%202%5E%7B3%7D%20&plus;%20...%20&plus;%20k%5E%7B3%7D%29%20&plus;%20%28k&plus;1%29%5E%7B3%7D)

![](https://latex.codecogs.com/png.latex?%5Cfrac%7Bk%5E%7B2%7D%28k&plus;1%29%5E%7B2%7D%7D%7B4%7D%20&plus;%20%28k&plus;1%29%5E%7B3%7D)

Right Hand Side,

![](https://latex.codecogs.com/png.latex?%5Cfrac%7B%28k&plus;1%29%5E%7B2%7D%28k&plus;2%29%5E%7B2%7D%7D%7B4%7D)

Simplifying the Left Hand Side,

![](https://latex.codecogs.com/png.latex?%5Cfrac%7Bk%5E%7B2%7D%28k&plus;1%29%5E%7B2%7D&plus;4%28k&plus;1%29%5E%7B3%7D%7D%7B4%7D)

![](https://latex.codecogs.com/png.latex?%5Cfrac%7B%28k&plus;1%29%5E%7B2%7D%28k%5E%7B2%7D&plus;4%28k&plus;1%29%29%7D%7B4%7D)

![](https://latex.codecogs.com/png.latex?%5Cfrac%7B%28k&plus;1%29%5E%7B2%7D%28k&plus;2%29%5E%7B2%7D%7D%7B4%7D)

The *Left Hand Side* is **equal** to the *Right Hand Side* thus concluding the induction step. :black_large_square:

---

![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%3D1%7D%5E%7Bn%7Di%28i&plus;1%29%28i&plus;2%29%20%3D%20%5Cfrac%7Bn%28n&plus;1%29%28n&plus;2%29%28n&plus;3%29%7D%7B4%7D)

*Base Case*: `n=1`,

![](https://latex.codecogs.com/png.latex?1%281&plus;1%29%281&plus;2%29%20%3D%20%5Cfrac%7B1%281&plus;1%29%281&plus;2%29%281&plus;3%29%7D%7B4%7D)

![](https://latex.codecogs.com/png.latex?6%20%3D%20%5Cfrac%7B18%7D%7B4%7D)

*Induction step*: when `n = k`,

![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%3D1%7D%5E%7Bn%20%3D%20k%7Di%28i&plus;1%29%28i&plus;2%29%20%3D%20%5Cfrac%7Bk%28k&plus;1%29%28k&plus;2%29%28k&plus;3%29%7D%7B4%7D)

Left Hand Side,

![](https://latex.codecogs.com/gif.latex?1%281&plus;1%29%281&plus;2%29&plus;2%282&plus;1%29%282&plus;2%29&plus;...&plus;k%28k&plus;1%29%28k&plus;2%29)

when `n = k + 1`,

![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%3D1%7D%5E%7Bn%20%3D%20k&plus;1%7Di%28i&plus;1%29%28i&plus;2%29%20%3D%20%5Cfrac%7B%28k&plus;1%29%28%28k&plus;1%29&plus;1%29%28%28k&plus;1%29&plus;2%29%28%28k&plus;1%29&plus;3%29%7D%7B4%7D)

Left Hand side,

![](https://latex.codecogs.com/gif.latex?1%281&plus;1%29%281&plus;2%29&plus;...&plus;k%28k&plus;1%29%28k&plus;2%29%20&plus;%20%28k&plus;1%29%28%28k&plus;1%29&plus;1%29%28%28k&plus;1%29&plus;2%29)

Right Hand side,

![](https://latex.codecogs.com/png.latex?%5Cfrac%7B%28k&plus;1%29%28k&plus;2%29%28k&plus;3%29%28k&plus;4%29%7D%7B4%7D)

simplifying the Left Hand side,

![](https://latex.codecogs.com/png.latex?%5Cfrac%7Bk%28k&plus;1%29%28k&plus;2%29%28k&plus;3%29%7D%7B4%7D%20&plus;%20k%28k&plus;1%29%28k&plus;2%29)

![](https://latex.codecogs.com/png.latex?%5Cfrac%7Bk%28k&plus;1%29%28k&plus;2%29%28k&plus;3%29&plus;4k%28k&plus;1%29%28k&plus;2%29%7D%7B4%7D)

*Take the common terms out*,

![](https://latex.codecogs.com/png.latex?%5Cfrac%7B%28k&plus;1%29%28k&plus;2%29%28k%28k&plus;3%29&plus;4k%29%7D%7B4%7D)

![](https://latex.codecogs.com/png.latex?%5Cfrac%7B%28k&plus;1%29%28k&plus;2%29%28k&plus;3%29%28k&plus;4%29%7D%7B4%7D)

*The left hand side* and *right hand side* is **equal** therefore induction step is correct. :black_large_square:

---

![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D%200%7D%5E%7Bn%7D%20a%5E%7Bi%7D%20%3D%20%5Cfrac%7Ba%5E%7Bn&plus;1%7D-1%7D%7Ba-1%7D)

*Base Case*: when `n = 1`,

![](https://latex.codecogs.com/gif.latex?a%5E%7B0%7D%20&plus;%20a%5E%7B1%7D%20%3D%20%5Cfrac%7B%28a&plus;1%29%28a-1%29%7D%7B%28a-1%29%7D)

*Inductive step*: when `n = k`,

![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D%200%7D%5E%7Bn%3Dk%7D%20a%5E%7Bi%7D%20%3D%20%5Cfrac%7Ba%5E%7Bk&plus;1%7D-1%7D%7Ba-1%7D)

Left Hand Side,

![](https://latex.codecogs.com/gif.latex?a%5E%7B0%7D%20&plus;%20a%5E%7B1%7D%20...%20&plus;%20a%5E%7Bk%7D)

when `n = k + 1`,

![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D%200%7D%5E%7Bn%3Dk&plus;1%7D%20a%5E%7Bi%7D%20%3D%20%5Cfrac%7Ba%5E%7Bk&plus;2%7D-1%7D%7Ba-1%7D)

Left Hand Side,

![](https://latex.codecogs.com/gif.latex?a%5E%7B0%7D%20&plus;%20a%5E%7B1%7D%20...%20&plus;%20a%5E%7Bk%7D%20&plus;%20a%5E%7Bk&plus;1%7D)

![](https://latex.codecogs.com/gif.latex?%5Cfrac%7Ba%5E%7Bk&plus;1%7D-1%7D%7Ba-1%7D%20&plus;%20a%5E%7Bk%7D%20&plus;1)

Right Hand Side,

![](https://latex.codecogs.com/gif.latex?%5Cfrac%7Ba%5E%7Bk&plus;2%7D-1%7D%7Ba-1%7D)

Simplifying Left Hand Side,

![](https://latex.codecogs.com/gif.latex?%5Cfrac%7Ba%5E%7Bk&plus;1%7D-1%20&plus;%20%28a-1%29%28a%5E%7Bk%7D%20&plus;1%29%7D%7Ba-1%7D)

![](https://latex.codecogs.com/gif.latex?%5Cfrac%7Ba%5E%7Bk&plus;1%7D-1%20&plus;%20%28a%5E%7Bk&plus;2%7D-a%5E%7Bk&plus;1%7D%29%7D%7Ba-1%7D)

![](https://latex.codecogs.com/gif.latex?%5Cfrac%7B-1%20&plus;%20a%5E%7Bk&plus;2%7D%7D%7Ba-1%7D)

The *left hand side* is **equal** to the *right hand side* proving the inductive step. :black_large_square:

---

![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D%201%7D%5E%7Bn%7D%20%5Cfrac%7B1%7D%7Bi%28i&plus;1%29%7D%20%3D%20%5Cfrac%7Bn%7D%7Bn&plus;1%7D)

*Base case*: when `n=1`,

![](https://latex.codecogs.com/gif.latex?%5Cfrac%7B1%7D%7B1%281&plus;1%29%7D%20%3D%20%5Cfrac%7B1%7D%7B1&plus;1%7D)

![](https://latex.codecogs.com/gif.latex?%5Cfrac%7B1%7D%7B2%7D%20%3D%20%5Cfrac%7B1%7D%7B2%7D)

*Inductive step*: when `n = k`,

![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D%201%7D%5E%7Bn%3Dk%7D%20%5Cfrac%7B1%7D%7Bi%28i&plus;1%29%7D%20%3D%20%5Cfrac%7Bk%7D%7Bk&plus;1%7D)

Left Hand Side,

![](https://latex.codecogs.com/gif.latex?%5Cfrac%7B1%7D%7B1%281&plus;1%29%7D%20&plus;%20%5Cfrac%7B1%7D%7B2%282&plus;1%29%7D%20...%20&plus;%20%5Cfrac%7B1%7D%7Bk%28k&plus;1%29%7D)

when `n = k + 1`,

![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D%201%7D%5E%7Bn%3Dk&plus;1%7D%20%5Cfrac%7B1%7D%7Bi%28i&plus;1%29%7D%20%3D%20%5Cfrac%7Bk&plus;1%7D%7Bk&plus;2%7D)

Left Hand Side,

![](https://latex.codecogs.com/gif.latex?%5Cfrac%7B1%7D%7B1%281&plus;1%29%7D%20...%20&plus;%20%5Cfrac%7B1%7D%7Bk%28k&plus;1%29%7D%20&plus;%20%5Cfrac%7B1%7D%7B%28k&plus;1%29%28k&plus;2%29%7D)

![](https://latex.codecogs.com/gif.latex?%5Cfrac%7Bk%7D%7Bk&plus;1%7D%20&plus;%20%5Cfrac%7B1%7D%7B%28k&plus;1%29%28k&plus;2%29%7D)

Right Hand Side,

![](https://latex.codecogs.com/gif.latex?%5Cfrac%7Bk&plus;1%7D%7Bk&plus;2%7D)

Simplifying the Left Hand Side,

![](https://latex.codecogs.com/gif.latex?%5Cfrac%7Bk%28k&plus;2%29%20&plus;%201%7D%7B%28k&plus;1%29%28k&plus;2%29%7D)

![](https://latex.codecogs.com/gif.latex?%5Cfrac%7Bk%5E%7B2%7D&plus;%202k%20&plus;1%7D%7B%28k&plus;1%29%28k&plus;2%29%7D)

![](https://latex.codecogs.com/gif.latex?%5Cfrac%7B%28k&plus;1%29%28k&plus;1%29%7D%7B%28k&plus;1%29%28k&plus;2%29%7D)

![](https://latex.codecogs.com/gif.latex?%5Cfrac%7B%28k&plus;1%29%7D%7B%28k&plus;2%29%7D)

The *left hand side* is **equal** to the *right hand side* proving the inductive step. :black_large_square:

---

![](https://latex.codecogs.com/gif.latex?n%5E%7B3%7D%20&plus;%202n)

*Base case*: when `n=1`,

![](https://latex.codecogs.com/gif.latex?1%5E%7B3%7D%20&plus;%202*1%20%3D%203)

`3` is divisible by `3` so the expression is **True** when `n=1`

*Inductive case*: when `n=k`,

![](https://latex.codecogs.com/gif.latex?k%5E%7B3%7D%20&plus;%202k%20%3D%203m)

*m is an integer*

when `n = k + 1`,

![](https://latex.codecogs.com/png.latex?%28k&plus;1%29%5E%7B3%7D&plus;2*%28k&plus;1%29%20%3D%20k%5E%7B3%7D%20&plus;%202k)

![](https://latex.codecogs.com/png.latex?k%5E%7B3%7D%20&plus;%203k%5E%7B2%7D%20&plus;%203k%20&plus;%201%20&plus;%202k%20&plus;%202)

![](https://latex.codecogs.com/png.latex?%28k%5E%7B3%7D&plus;2k%29&plus;3%28k%5E%7B2%7D&plus;k&plus;1%29)

*we can substitute*`3m` instead of `(k3 + 2k)`,

![](https://latex.codecogs.com/png.latex?%283m%29&plus;3%28k%5E%7B2%7D&plus;k&plus;1%29)

![](https://latex.codecogs.com/png.latex?3%28m&plus;%28k%5E%7B2%7D&plus;k&plus;1%29%29)

This is divisible by `3`​ :black_large_square:

---

![](https://latex.codecogs.com/png.latex?v%28n%29%20%3D%20n%20-1)

*Base case*: when `n=1`,

![](https://latex.codecogs.com/png.latex?v%28n%29%20%3D%201%20-1%20%3D%200)

A tree with `1` node has **no edges**.

*Inductive case*: when `n = k` (k nodes),

![](https://latex.codecogs.com/png.latex?v%28k%29%20%3D%20k%20-%201)

when `n = k + 1`,

![](https://latex.codecogs.com/png.latex?v%28k&plus;1%29%20%3D%20k%20&plus;%201%20-%201%20%3D%20k)

![](https://latex.codecogs.com/png.latex?%7B%5Ccolor%7BBlue%7D%20v%28k%29&plus;1%20%3D%20k%20%7D)

*substituting* `v(k)` to *blue equation*,

![](https://latex.codecogs.com/png.latex?%7B%5Ccolor%7BBlue%7D%20%28k%20-%201%29%7D%20&plus;%201%20%3D%20k)

The *Left Hand Side* is  **equal** to the *Right Hand Side* :black_large_square:

---

![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%3D1%7D%5E%7Bn%7Di%5E%7B3%7D%20%3D%20%28%5Csum_%7Bi%3D1%7D%5E%7Bn%7D%20i%20%29%5E%7B2%7D)

*Base case*: when `n = 1`,

![](https://latex.codecogs.com/png.latex?1%5E%7B3%7D%20%3D%201%5E%7B2%7D)

*Inductive case*: Assuming **True** when `n = k`,

![](https://latex.codecogs.com/png.latex?%7B%5Ccolor%7BGreen%7D%20%5Csum_%7Bi%3D1%7D%5E%7Bn%20%3D%20k%7Di%5E%7B3%7D%20%3D%20%28%5Csum_%7Bi%3D1%7D%5E%7Bn%20%3D%20k%7D%20i%20%29%5E%7B2%7D%7D)

Left Hand Side,

![](https://latex.codecogs.com/png.latex?%7B%5Ccolor%7BRed%7D%201%5E%7B3%7D%20&plus;%202%5E%7B3%7D%20&plus;%20...%20&plus;%20k%5E%7B3%7D%7D)

Right Hand Side,

![](https://latex.codecogs.com/png.latex?%7B%5Ccolor%7BBlue%7D%20%281%20&plus;%202%20&plus;%20...%20&plus;%20k%29%5E%7B2%7D%7D)

when `n = k+1`,

Left Hand Side,

![](https://latex.codecogs.com/png.latex?%7B%5Ccolor%7BRed%7D%20%281%20&plus;%202%5E%7B3%7D%20&plus;%20...%20&plus;%20k%5E%7B3%7D%29%7D%20&plus;%20%28k&plus;1%29%5E%7B3%7D)

Right Hand Side,

![](https://latex.codecogs.com/png.latex?%7B%5Ccolor%7BBlue%7D%20%281%20&plus;%202%20&plus;%20...%20&plus;%20k%29%7D%20&plus;%20%28k%20&plus;%201%29%29%5E%7B2%7D)

---

##### Estimation :chart_with_downwards_trend:

- 20 million pages :information_desk_person:

- Around 1 million words

- 277 hours , 12 days

- 51 cities ??

- microseconds ; more that a microsecond; 100 billion instructions ? 

- `n2` -> `(10000)^2` seconds (worst case scenario)

  `n log n` ->  `10^4 log 10^4` seconds

##### Interview Problems :mortar_board:

- [function to perform integer division](division.c)

- >  25 horses , At most 5 horses can race together,  Need to determine the 1st,2nd & 3rd fastest horses. Find the minimum number of races in which this can be done

Answer : **seven races**

There are 25 horses and at most 5 horses can race together, this means that there is at least 5 races.  Take all that got the first place and race them together (**sixth race**)  and take 1st,2nd & 3rd horses from the **sixth race** and race them again to get the 2nd and 3rd position. 

- > piano tuners in the whole world

  1 billion :musical_keyboard:tuners

- > gas stations in USA

  Assuming 2/3 of US population owns a car, 500 million cars

  Around 50000 gas stations

- > How much does the ice in a hockey rink weigh

  1 tonne ?  

- > How many miles of road are there in the USA

  6 million miles

- > Manhattan Phone book at random in order to find a specific name?

  3 times

##### Programming Challenges


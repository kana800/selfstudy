#### Notes

#### Test yourself

1. When the elements of a set are given using the set-roster notation, the order in which are listed **ordered set notation**
2. The symbol **`R`** denotes to *set of all Real numbers*
3. The symbol **`Z`** denotes *set of all Integers*
4. The symbol **`Q`** denotes *set of all rational numbers, or quotients of integers*
5. The notation `{x|P(x)}` is read *set of all elements such that `P(x)` is true*
6. For a set *A* to be a subset of a set of *B* means that **set *A* consist of all the elements in set *B***
7. Given sets *A* and *B*, the Cartesian product of `A x B` is **`A X B = {(u,v)| u element of A and v element of B}`** (![](https://latex.codecogs.com/png.latex?%5Cinline%20%7B%5Ccolor%7BBlack%7D%20A%20%5Ctimes%20B%20%3D%20%5C%7B%28u%2Cv%29%20%7C%20u%20%5Cin%20A%20%5C%3A%20and%20%5C%3A%20v%20%5Cin%20B%5C%7D%7D))
8.  Given sets *A*, *B*, and *C*, the Cartesian product `A x B x C` is ![](https://latex.codecogs.com/png.latex?%5Cinline%20A%20%5Ctimes%20B%20%5Ctimes%20C%20%3D%20%5C%7B%28u%2Cv%2Cw%29%20%7C%20u%20%5Cin%20A%20%5C%3A%20%2C%20%5C%3A%20v%20%5Cin%20B%20%5C%3Aand%5C%3A%20w%20%5Cin%20C%20%5C%7D)
9. A string of length *n* over a set *S* is an ordered *n*-tuple of elements of *S*, written without *parentheses* or *commas*.

#### Exercise set 1.2

1. > Which of the following sets are equal
   >
   > ```
   > A = {a,b,c,d}
   > B = {d,e,a,c}
   > C = {d,b,a,c}
   > D = {a,a,d,e,c,e}
   > ```
   
   Set *A* and *C* are equal, Set *B* and *D* are equal
   
2. > Write in words how to read each of the following out loud

   - ![](https://latex.codecogs.com/png.latex?%5Cinline%20%5C%7Bx%20%5Cin%20%5Cmathbb%7BR%7D%5E%7B&plus;%7D%20%7C%200%20%3C%20x%20%3C%201%20%5C%7D)

   The set of all *positive real numbers* that are between 0 and 1

   - ![](https://latex.codecogs.com/png.latex?%5Cinline%20%5C%7Bx%20%5Cin%20%5Cmathbb%7BR%7D%20%7C%20x%20%5Cleq%200%20%5C%3B%20or%20%5C%3B%20x%20%5Cgeq%201%20%5C%7D)

   The set of all *real numbers* that are less than or equal to zero *or* greater than or equal to one

   - ![](https://latex.codecogs.com/png.latex?%5Cinline%20%5C%7Bx%20%5Cin%20%5Cmathbb%7BZ%7D%20%7C%20n%20%5C%3B%20%5Ctextup%7Bis%20a%20factor%20of%7D%20%5C%3B%206%20%5C%7D)

   The set of all *integers, n* that are factors of 6

   - ![](https://latex.codecogs.com/png.latex?%5Cinline%20%5C%7Bx%20%5Cin%20%5Cmathbb%7BZ%7D%5E%7B&plus;%7D%20%7C%20n%20%5C%3B%20%5Ctextup%7Bis%20a%20factor%20of%7D%20%5C%3B%206%20%5C%7D)

   The set of all *positive integers, n* that are factors of 6

3. > Is `4 = {4} `?

   No because `{4}` is a set with an element as a `4` whereas `4` is just a number.

   - > How many elements are in the set `{3,4,3,5}`

     There are 4 elements

   - > How many elements are in the set `{1, {1}, {1,{1}}}`

     There are 3 elements

4. > Is ![](https://latex.codecogs.com/png.latex?%5Cinline%202%20%5Cin%20%5C%7B2%5C%7D)

   Yes, `2` is an element of the set (`{2}`)

   - > How many elements are in the set `{2,2,2,2}`

     There are 4 elements 

   - > How many elements are in the set `{0, {0}}`

     There are 2 elements

   - Is ![](https://latex.codecogs.com/png.latex?%5Cinline%20%5C%7B0%5C%7D%20%5Cin%20%5C%7B%5C%7B0%5C%7D%2C%5C%7B1%5C%7D%5C%7D)

     Yes, the set `{{0},{1}}` consist of  a set with `{0}`

   - Is ![](https://latex.codecogs.com/png.latex?%5Cinline%200%20%5Cin%20%5C%7B%5C%7B0%5C%7D%2C%5C%7B1%5C%7D%5C%7D)

     No, the set `{{0},{1}}` doesn't consist a element `0`

5. > which of the following sets are equal
   >
   > ```
   > A = {0,1,2}
   > B = {x \in R | -1 <= x < 3}
   > C = {x \in R | -1 < x < 3}
   > D = {x \in Z | -1 < x < 3}
   > E = {x \in Z+ | -1 < x < 3}
   > ```

   ```
   A = {0,1,2}
   B = {-1.0, ... , 2.99}
   C = {0.99, ... ,2.99}
   D = {0,1,2}
   E = {0,1,2}
   ```

   The sets `A`, `B` and `E` are equal.

6. > For each integer *n*, let ![](https://latex.codecogs.com/png.latex?%5Cinline%20T_%7Bn%7D%20%3D%20%5C%7Bn%2Cn%5E%7B2%7D%5C%7D).How many elements are in each of ![](https://latex.codecogs.com/png.latex?%5Cinline%20T_%7B2%7D%2CT_%7B-3%7D%2CT_%7B1%7D%2C%20%5Ctextup%7Band%7D%20%5C%3BT_%7B0%7D). Justify your answers.

   ```
   T2 = {2,2^2} = {2,4} (2 elements)
   T-3 = {-3,(-3)^2} = {-3,9} (2 elements)
   T1 = {1,1} (1 element)
   T0 = {0,0} (1 element)
   ```

7. > Use the set-roster notation to indicate the elements in each of the following sets.

   - ![](https://latex.codecogs.com/png.latex?%5Cinline%20S%20%3D%20%5C%7Bn%20%5Cin%20%5Cmathbb%7BZ%7D%20%7C%20n%20%3D%20%28-1%29%5E%7Bk%7D%2C%20%5Ctextup%7Bfor%20some%20integer%20k%7D%5C%7D)
   `S = {1,-1}`
   - ![](https://latex.codecogs.com/png.latex?%5Cinline%20T%20%3D%20%5C%7Bm%20%5Cin%20%5Cmathbb%7BZ%7D%20%7C%20m%20%3D%201%20&plus;%20%28-1%29%5E%7Bk%7D%2C%20%5Ctextup%7Bfor%20some%20integer%20k%7D%5C%7D)
   `T = {2,1}`
   - ![](https://latex.codecogs.com/png.latex?%5Cinline%20U%20%3D%20%5C%7Br%20%5Cin%20%5Cmathbb%7BZ%7D%20%7C%202%20%5Cleq%20r%20%5Cleq%20-2%20%5C%7D)
   `U = no  elements`
   - ![](https://latex.codecogs.com/png.latex?%5Cinline%20V%20%3D%20%5C%7Bs%20%5Cin%20%5Cmathbb%7BZ%7D%20%7C%20s%20%3E%202%20%5C%3B%5Ctextup%7Bor%7D%20%5C%3B%20s%20%3C%203%20%5C%7D)
   `V =`**`Z`**
   - ![](https://latex.codecogs.com/png.latex?%5Cinline%20W%20%3D%20%5C%7Bt%20%5Cin%20%5Cmathbb%7BZ%7D%20%7C%201%20%3C%20t%20%3C%20-3%20%5C%7D)
   `W = {-2,-1,0}`
   - ![](https://latex.codecogs.com/png.latex?%5Cinline%20X%20%3D%20%5C%7Bu%20%5Cin%20%5Cmathbb%7BZ%7D%20%7C%20u%20%5Cleq%204%20%5C%3B%5Ctextup%7Bor%7D%5C%3B%20u%20%5Cgeq%201%5C%7D)
   `X =`**`Z`**

   8. > Let `A = {c,d,f,g}`, `B = {f,j}` and `C = {d,g}`. Answer each of the following questions. Give reason for your answers

      - > Is ![](https://latex.codecogs.com/png.latex?%5Cinline%20B%20%5Csubseteq%20A)

      No, Because `j` is a element of set` B` and not `A`

      - > Is ![](https://latex.codecogs.com/png.latex?%5Cinline%20C%20%5Csubseteq%20A)

      Yes

      - > Is ![](https://latex.codecogs.com/png.latex?%5Cinline%20C%20%5Csubseteq%20C)

      Yes

      - > Is `C` a proper subset of `A`

      Yes, because the elements of `C` also consist in set `A`

   9. >  Is ![](https://latex.codecogs.com/png.latex?%5Cinline%203%20%5Cin%20%5C%7B1%2C2%2C3%5C%7D)

      Yes

      - >  Is  ![](https://latex.codecogs.com/png.latex?%5Cinline%201%20%5Csubseteq%20%5C%7B1%5C%7D)

        No, because number `1` is not in a set

      - > Is ![](https://latex.codecogs.com/png.latex?%5Cinline%20%7B2%7D%20%5Cin%20%7B1%2C2%7D)

        Yes
        
      - > Is ![](https://latex.codecogs.com/png.latex?%5Cinline%20%7B3%7D%20%5Cin%20%5C%7B1%2C%5C%7B2%5C%7D%2C%5C%7B3%5C%7D%5C%7D)
      
        No, because `3` is not present in the set as an element
      
      - > Is ![](https://latex.codecogs.com/png.latex?%5Cinline%201%20%5Cin%20%5C%7B1%5C%7D)
      
        Yes
      
      - > Is ![](https://latex.codecogs.com/png.latex?%5Cinline%20%5C%7B2%5C%7D%20%5Csubseteq%20%5C%7B1%2C%5C%7B2%5C%7D%2C%5C%7B3%5C%7D%5C%7D)
      
        No,because element in `{2}`  is `2` and there are no `2` as a element in the set `{1,{2},{3}}`
      
      - > Is ![](https://latex.codecogs.com/png.latex?%5Cinline%20%5C%7B1%5C%7D%20%5Csubseteq%20%5C%7B1%2C2%5C%7D)
      
        Yes
      
      - > Is ![](https://latex.codecogs.com/png.latex?%5Cinline%201%20%5Cin%20%5C%7B1%2C%5C%7B2%5C%7D%5C%7D)
      
        Yes
      
      - > Is ![](https://latex.codecogs.com/png.latex?%5Cinline%20%5C%7B1%5C%7D%20%5Csubseteq%20%5C%7B1%2C%5C%7B2%5C%7D%5C%7D)
      
        Yes
      
      - > Is ![](https://latex.codecogs.com/png.latex?%5Cinline%20%5C%7B1%5C%7D%20%5Csubseteq%20%5C%7B1%5C%7D)
      
        Yes
      
   10. - >  Is  ![](https://latex.codecogs.com/png.latex?%5Cinline%20%28%28-2%29%5E%7B2%7D%2C-2%5E%7B2%7D%29%20%3D%20%28-2%5E%7B2%7D%2C%20%28-2%29%5E%7B2%7D%29)

         No, because `(-2)^2` is equal to `4` and `-2^2` is `-4`

       - > Is ![](https://latex.codecogs.com/png.latex?%5Cinline%20%285%2C-5%29%20%3D%20%28-5%2C5%29)

         No

       - > Is ![](https://latex.codecogs.com/png.latex?%5Cinline%20%288%20-%209%2C%20%5Csqrt%5B3%5D%7B-1%7D%29%20%3D%20%28-1%2C-1%29)

         Yes

       - > Is ![](https://latex.codecogs.com/png.latex?%5Cinline%20%28%5Cfrac%7B-2%7D%7B-4%7D%2C%20%28-2%29%5E%7B3%7D%29%20%3D%20%28%5Cfrac%7B3%7D%7B6%7D%2C-8%29)

         Yes

   11. > Let `A = {w,x,y,z}` and `B = {a,b}`.  Use the set-roster notation to write each of the following sets, and indicate the number of elements that in each set.

       - > `A x B` : 8 elements

         ```
         A x B = { (u,v) | u is A1 and v is b1}
         	  = { (w,a),(w,b),(x,a),(x,b),(y,a),(y,b),(z,a),(z,b)}
         ```

       - > `B x A` : 8 elements

       - > `A x A`: 16 elements

       - > `B x B`: 4 elements

   12. > Let `S = {2,4,6}` and `T = {1,3,5}`. Use the set-roster notation to write each of the following sets, and indicate the number of elements that are in each set.

       - > `S x T` : 9 elements

         ```
         S x T = {(2,1),(2,3),(2,5),(4,1),(4,3),(4,5),(6,1),(6,3),(6,5)}
         ```

       - > `T x S`: 9 elements

       - > `S x S`: 9 elements

       - > `T x T`: 9 elements

         ```
         T x T = {(1,1),(1,3),(1,5),(3,1),(3,3),(3,5),(5,1),(5,3),(5,5)}
         ```

   13.  Let `A = {1,2,3}` , `B = {u}` and `C = {m,n}`. Find each of the following sets.

       - > `A x (B x C)`

         ```
         (B x C ) = {(u,m),(u,n)}
         A x (B x C) = {(1,(u,m)), (1,(u,n)), (2,(u,m)), (2,(u,n)), (3,(u,m)), (3,(u,n))}
         ```

       - > `(A x B) x C`

         ```
         (A x B) = {(1,u),(2,u),(3,u)}
         (A x B) x C = {((1,u), m), ((2,u),m) , ((3,u),n),((1,u), n), ((2,u),n) , ((3,u),n) }
         ```

       - > `A x B x C`

         ```
         A x B x C = {(1,u,m),(1,u,n),...}
         ```

   14. Let `R = {a}`, `S = {x,y}` and `T = {p,q,r}`. Find each of the following sets.

       - > `R x (S x T)`

         ```
         (S x T) = { (x,p), (x,q) , (x,r) , (y,p), (y,q) , (y,r) }
         R x (S x T) = { (a, (x,p)), (a,(x,q)) , (a,(x,r)) , (a,(y,p)), (a,(y,q)) , (a,(y,r) )}
         ```

   15.  Let `S = {0, 1}`. List all the strings of length 4 over S that contain three or more 0's

   ```
   0000 0001 0010 0100 1000
   ```

   16. Let `T ={x,y}`. List all the strings of length 5 over T that have exactly one y

   ```
   xxxxy xxxyx xxyxx xyxxx yxxxx
   ```

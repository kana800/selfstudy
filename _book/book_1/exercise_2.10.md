#### Algorithm Analysis

##### Program Analysis

1. > Give the worst-case running time using the Big Oh notation
   >
   > ```pseudocode
   > function mystery(n):
   > 	r := 0
   > 	for i := 1 to n -1 do
   > 		for j := i + 1 to n do
   > 			for k := 1 to j do
   > 				r := r + 1
   > 	return (r)
   > ```

   Expressing the loop in the *summation* form,

   ![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D%201%7D%5E%7Bn-1%7D%20%5Csum_%7Bj%20%3D%20i%20&plus;%201%7D%5E%7Bn%7D%20%5Csum_%7Bk%20%3D%201%7D%5E%7Bj%7D1)

   *[Reducing](https://www.youtube.com/watch?v=rRpP4U0ldfA)*,

   ![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D%201%7D%5E%7Bn-1%7D%20%5Csum_%7Bj%20%3D%20i%20&plus;%201%7D%5E%7Bn%7D%20%7B%5Ccolor%7BBlue%7D%20%5Csum_%7Bk%20%3D%201%7D%5E%7Bj%7D1%7D)

   ![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D%201%7D%5E%7Bn-1%7D%20%5Csum_%7Bj%20%3D%20i%20&plus;%201%7D%5E%7Bn%7D%7B%5Ccolor%7BBlue%7D%20j%7D)

   *we can reduce* the ![](https://latex.codecogs.com/png.latex?%5Ctiny%20%5Csum_%7Bj%20%3D%20i%20&plus;%201%7D%5E%7Bn%7D)*associative*,

   ![](https://latex.codecogs.com/png.latex?%5Csum_%7Bj%20%3D%20i%20&plus;%201%7D%5E%7Bn%7D%20%3D%20%5Csum_%7Bj%20%3D1%7D%5E%7Bn%7D%20-%20%5Csum_%7Bj%20%3D%201%7D%5E%7Bi%7D)

   ![](https://latex.codecogs.com/gif.latex?%7B%5Ccolor%7BDarkRed%7D%20%5Csum_%7Bj%20%3D%20i%20&plus;%201%7D%5E%7Bn%7D%20%3D%20%5Cfrac%7Bn%28n&plus;1%29%7D%7B2%7D%20-%20%5Cfrac%7Bi%28i&plus;1%29%7D%7B2%7D%7D)

   ![](https://latex.codecogs.com/gif.latex?%5Cfrac%7Bn%28n&plus;1%29-i%28i&plus;1%29%7D%7B2%7D)

   ![](https://latex.codecogs.com/gif.latex?%5Cfrac%7Bn%5E%7B2%7D%20-%20i%5E%7B2%7D%20&plus;%20n%20-%20i%7D%7B2%7D)

   we can take `1/2` out,

   ![](https://latex.codecogs.com/png.latex?%7B%5Ccolor%7BBlue%7D%20%5Cfrac%7B1%7D%7B2%7D%5Csum_%7Bi%20%3D%201%7D%5E%7Bn-1%7D%20n%5E%7B2%7D%20-%20i%5E%7B2%7D%20&plus;%20n%20-%20i%7D)

   ![](https://latex.codecogs.com/png.latex?%7B%5Ccolor%7BRed%7D%20%5Csum_%7Bi%20%3D%201%7D%5E%7Bn-1%7D%5Cfrac%7Bn%5E%7B2%7D%7D%7B2%7D%7D-%5Csum_%7B%7D%5E%7B%7D%5Cfrac%7Bi%5E%7B2%7D%7D%7B2%7D&plus;%5Csum_%7B%7D%5E%7B%7D%5Cfrac%7Bn%7D%7B2%7D-%5Csum_%7B%7D%5E%7B%7D%5Cfrac%7Bi%7D%7B2%7D)

   The **red color** term is the **dominant** term,

   ![](https://latex.codecogs.com/gif.latex?%7B%5Ccolor%7BRed%7D%20%5Cfrac%7Bn%5E%7B2%7D%28n-1%29%7D%7B2%7D%7D)

   Therefore the **Big-Oh complexity** of this function is `O(n^3)`.

2. > Give the worst case running time using Big Oh notation
   >
   > ```pseudocode
   > function pesky(n):
   > 	r := 0
   > 	for i := 1 to n do
   > 		for j := 1 to i do
   > 			for k := j to i + j do
   > 				r := r + 1
   > 	return(r)
   > ```

   Expressing the loop in the *summation* form,

   ![](https://latex.codecogs.com/gif.latex?%5Csum_%7Bi%3D1%7D%5E%7Bn%7D%5Csum_%7Bj%3D1%7D%5E%7Bi%7D%5Csum_%7Bk%3Dj%7D%5E%7Bi&plus;j%7D1)

   *Reducing*,

   ![](https://latex.codecogs.com/gif.latex?%5Csum_%7Bi%3D1%7D%5E%7Bn%7D%5Csum_%7Bj%3D1%7D%5E%7Bi%7D%7B%5Ccolor%7BBlue%7D%20i&plus;j%7D)

   *Reducing* the ![](https://latex.codecogs.com/png.latex?%5Ctiny%20%5Csum_%7Bj%3D1%7D%5E%7Bi%7D%20i&plus;j),

   ![](https://latex.codecogs.com/png.latex?%5Csum_%7Bj%3D1%7D%5E%7Bi%7D%20i%20%5Csum%20j)

   ![](https://latex.codecogs.com/png.latex?i%5E%7B2%7D%20&plus;%20%5Cfrac%7Bj%28j&plus;1%29%7D%7B2%7D)

   ![](https://latex.codecogs.com/png.latex?%7B%5Ccolor%7BBlue%7D%20i%5E%7B2%7D%20&plus;%20%5Cfrac%7Bj%5E%7B2%7D&plus;j%7D%7B2%7D%7D)

   ![](https://latex.codecogs.com/gif.latex?%5Csum_%7Bi%3D1%7D%5E%7Bn%7Di%5E%7B2%7D%20&plus;%20%5Cfrac%7Bj%5E%7B2%7D&plus;j%7D%7B2%7D)

   ![](https://latex.codecogs.com/gif.latex?%7B%5Ccolor%7BRed%7D%20%5Csum_%7Bi%3D1%7D%5E%7Bn%7Di%5E%7B2%7D%7D%20&plus;%20%5Csum%5Cfrac%7Bn%5E%7B2%7D%7D%7B2%7D%20&plus;%20%5Csum%5Cfrac%7Bn%7D%7B2%7D)

   The **red** color term is the **dominant** term,

   ![](https://latex.codecogs.com/gif.latex?%7B%5Ccolor%7BRed%7D%5Cfrac%7Bn%28n&plus;1%29%282n&plus;1%29%7D%7B6%7D%7D)

   Therefore the **Big-Oh complexity** of this function is `O(n^3)`.

3. > Give the worst case running time using Big Oh notation
   >
   > ```pseudocode
   > function prestiferous(n)
   > 	r := 0
   > 	for i := 1 to n do
   > 		for j:= 1 to i  do
   > 			for k:= j to i + j do
   > 				for l:= 1 to 1+j-k do
   > 					r := r + 1
   > 	return(r)
   > ```

   Expressing the loop in the *summation* form,

   ![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D1%7D%5E%7Bn%7D%5Csum_%7Bj%20%3D1%7D%5E%7Bi%7D%5Csum_%7Bk%20%3D%20j%7D%5E%7Bi&plus;j%7D%5Csum_%7Bl%20%3D1%7D%5E%7Bi&plus;j-k%7D)

   ![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D1%7D%5E%7Bn%7D%5Csum_%7Bj%20%3D1%7D%5E%7Bi%7D%5Csum_%7Bk%20%3D%20j%7D%5E%7Bi&plus;j%7Di&plus;j-k)

   *Reducing* ![](https://latex.codecogs.com/png.latex?%5Ctiny%20%5Csum_%7Bk%20%3D%20j%7D%5E%7Bi&plus;j%7Di&plus;j-k),

   ![](https://latex.codecogs.com/png.latex?%5Csum_%7Bk%20%3D%201%7D%5E%7Bi%7D%20%5Cfrac%7Bi%28i&plus;1%29%7D%7B2%7D)

   ![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D1%7D%5E%7Bn%7D%5Csum_%7Bj%20%3D1%7D%5E%7Bi%7D%5Cfrac%7Bi%28i&plus;1%29%7D%7B2%7D)

   *Reducing*,

   ![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D1%7D%5E%7Bn%7D%5Cfrac%7Bi%5E%7B2%7D%28i&plus;1%29%7D%7B2%7D)

   ![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D1%7D%5E%7Bn%7D%5Cfrac%7Bi%5E%7B3%7D&plus;i%5E%7B2%7D%7D%7B2%7D)

   ![](https://latex.codecogs.com/png.latex?%7B%5Ccolor%7BRed%7D%20%5Csum_%7Bi%20%3D1%7D%5E%7Bn%7D%5Cfrac%7Bi%5E%7B3%7D%7D%7B2%7D%7D%20&plus;%5Csum_%7Bi%20%3D1%7D%5E%7Bn%7D%5Cfrac%7Bi%5E%7B2%7D%7D%7B2%7D)

   The **red** color term is the dominant term,

   ![](https://latex.codecogs.com/png.latex?%7B%5Ccolor%7BRed%7D%20%28%5Cfrac%7Bn%28n&plus;1%29%7D%7B2%7D%29%5E%7B2%7D%7D)

   Therefore the **Big-Oh complexity** of this function is `O(n^4)`.

4. > Give the worst case running time using Big Oh notation
   >
   > ```pseudocode
   > function conundrum(n):
   > 	r := 0
   > 	for i := 1 to n do
   > 		for j := i + 1 to n do
   > 			for k := i + j - 1 to n do
   > 				r := r + 1
   > 	return (r)
   > ```

   Expressing the loop in the *summation* form,

   ![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D1%7D%5E%7Bn%7D%5Csum_%7Bj%20%3D%20i%20&plus;%201%7D%5E%7Bn%7D%5Csum_%7Bk%20%3D%20i%20&plus;%20j%20-%201%7D%5E%7Bn%7D%201)

   

   Reducing ![](https://latex.codecogs.com/png.latex?%5Ctiny%20%5Csum_%7Bk%20%3D%201%20&plus;j%20-%201%7D%5E%7Bn%7D1) using ![](https://latex.codecogs.com/png.latex?%5Ctiny%20%5Csum_%7Bi%20%3D%20m%7D%5E%7Bn%7D1%20%3D%20n%20-%20m%20&plus;%201),

   ![](https://latex.codecogs.com/png.latex?n%20-%20i%20-j%20&plus;%202)

   ![](https://latex.codecogs.com/png.latex?%7B%5Ccolor%7BBlue%7D%20%5Csum_%7Bi%20%3D1%7D%5E%7Bn%7D%20%5Csum_%7Bj%20%3Di%20&plus;1%7D%5E%7Bn%7D%20n%20-%20i%20-j%20&plus;%202%7D)

   ![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D1%7D%5E%7Bn%7D%28%5Cfrac%7B1%7D%7B2%7D%28i-n%29%283i-n-3%29%29)

   The the **Big-Oh complexity** of this function is `O(n^2)`.

5. > Algorithm is used to evaluate the polynomial
   >
   > ![](https://latex.codecogs.com/png.latex?%5Ctiny%20p%28x%29%3D%20a_%7Bn%7Dx%5E%7Bn%7D%20&plus;%20a_%7Bn-1%7Dx%5E%7Bn-1%7D&plus;...&plus;a_%7B1%7Dx&plus;a_%7B0%7D)
   >
   > ```pseudocode
   > p := a0;
   > xpower := 1;
   > for i:= 1 to n do
   > 	xpower := x * xpower;
   > 	p := p + ai * xpower;
   > end
   > ```

   >
   >
   >How many multiplications are done in the worst-case and additions

   `n` additions and `2n` multiplication

   > How many multiplications are done on the average?

   `2n` multiplications

   > yes, using the  method of synthetic division

6. > Prove that the following algorithm for computing the maximum value in an array `A[1..n]` is correct
   >
   > ```pseudocode
   > function max(A)
   > 	m := A[1]
   > 	for i := 2 to n do
   > 		if A[i] > m then m:= A[i]
   > 	return (m)
   > ```

   *Base Case*

   IF the length of the algorithm is `1` then Loop isn't executed and `m` is returned. 

   Lets assume the algorithm is correct when `n = k`

   *Induction step* when `n = k + 1`,
   
   If `k+1`th element is the max then `k+1` is returned as `m`.  If `k+1` is not the  max then `k` is the max element.

##### Big Oh

- > True or False
  >
  > Is `2^(n+1)` = `O(2^(n))`?

  We can write ![](https://latex.codecogs.com/png.latex?%5Ctiny%202%5E%7Bn&plus;1%7D),

  ![](https://latex.codecogs.com/png.latex?2%5E%7Bn&plus;1%7D%20%3D%202%5Ccdot%202%5E%7Bn%7D)

  This is **TRUE**

  >Is `2^(2n)` = `O(2^n)`?

  We can write ![](https://latex.codecogs.com/png.latex?%5Ctiny%202%5E%7B2n%7D),

  ![](https://latex.codecogs.com/png.latex?%282%5E%7Bn%7D%29%5E%7B2%7D)

  Assuming that  ![](https://latex.codecogs.com/png.latex?%5Ctiny%20%282%5E%7Bn%7D%29%5E%7B2%7D%20%3D%20O%282%5E%7Bn%7D%29)Then there should be constant *c* greater than or equal to  ![](https://latex.codecogs.com/png.latex?%5Ctiny%202%5E%7B2n%7D),

  ![](https://latex.codecogs.com/png.latex?%282%5E%7Bn%7D%29%5E%7B2%7D%20%5Cleq%20c%20%5Ccdot%202%5E%7Bn%7D)

  Divide by `2^(n)`,

  ![](https://latex.codecogs.com/png.latex?2%5E%7Bn%7D%20%5Cleq%20c)

  There are no values for c that can make the above inequality *TRUE* therefore this is **FALSE**.

- > For each of the following pairs of functions. Determine which relationship is correct and briefly explain why

  > ![](https://latex.codecogs.com/png.latex?%5Csmall%20f%28n%29%20%3D%20%5Clog%20n%5E%7B2%7D%3B%20g%28n%29%20%3D%20%5Clog%20n%20&plus;%205)

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20%7B%5Ccolor%7BDarkBlue%7D%20f%28n%29%7D),

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20%7B%5Ccolor%7BDarkBlue%7D%20%5Clog%20n%5E%7B2%7D%7D)

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20%7B%5Ccolor%7BDarkBlue%7D%202%20%5Ctimes%20%5Clog%20n%7D)

  if ![](https://latex.codecogs.com/png.latex?%5Csmall%20%7B%5Ccolor%7BDarkBlue%7D%20f%28n%29%7D%20%3D%20%7B%5Ccolor%7BDarkRed%7D%20g%28n%29%7D),

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20%7B%5Ccolor%7BDarkBlue%7D%202%20%5Ctimes%20%5Clog%20n%7D%20%3D%20%7B%5Ccolor%7BDarkRed%7D%202%20%28%5Clog%20n%20&plus;%205%29%7D)

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20%5Ctherefore%20%5Clog%20n%5E%7B2%7D%20%3D%20C%5Ctimes%20O%28g%28n%29%29) where `C = 2`

  >![](https://latex.codecogs.com/png.latex?%5Csmall%20f%28n%29%20%3D%20%5Csqrt%20n%20%3B%20g%28n%29%20%3D%20%5Clog%20n%5E%7B2%7D)

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20%7B%5Ccolor%7BDarkRed%7D%20g%28n%29%7D),

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20%7B%5Ccolor%7BDarkRed%7D%202%20%5Ctimes%20%5Clog%20n%7D)

  Using the [*limit method*](https://latex.codecogs.com/png.latex?%5Csmall%20f%28n%29%20%3D%5Clog%5E%7B2%7D%28n%29%3B%20g%28n%29%20%3D%20%5Clog%28n%29),

  ![](https://latex.codecogs.com/png.latex?%5Clim_%7Bn%20%5Cto%20%5Cinfty%20%7D%20%5Cfrac%7Bf%28n%29%7D%7Bg%28n%29%7D%20%3D%20%5Cfrac%7B%5Csqrt%20n%7D%7B%5Clog%20n%5E%7B2%7D%7D)

  ![](https://latex.codecogs.com/png.latex?2%20%5Ctimes%20%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%20%5Cfrac%7B%5Csqrt%20n%7D%7B%5Clog%20n%7D%20%3D%20%5Cinfty)

  Above functions are valid when `f(n)= \omega(g(n))`

  > ![](https://latex.codecogs.com/png.latex?%5Csmall%20f%28n%29%20%3D%5Clog%5E%7B2%7D%28n%29%3B%20g%28n%29%20%3D%20%5Clog%28n%29)

  Using the *limit method*,

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%20%5Cfrac%7Bf%28n%29%7D%7Bg%28n%29%7D%20%3D%20%5Cfrac%7B%5Clog%5E%7B2%7D%28n%29%7D%7B%5Clog%28n%29%7D)

  ![](https://latex.codecogs.com/gif.latex?%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%20%3D%20%5Clog%28n%29%20%3D%20%5Cinfty)

  Above functions are valid when `f(n) = \omega(g(n))`

  > ![](https://latex.codecogs.com/gif.latex?%5Csmall%20f%28n%29%20%3D%20n%3B%20g%28n%29%20%3D%20%5Clog%5E%7B2%7D%28n%29)

  Using the *limit method*,

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%20%5Cfrac%7Bf%28n%29%7D%7Bg%28n%29%7D%20%3D%20%5Cfrac%7Bn%7D%7B%5Clog%5E%7B2%7D%28n%29%7D)

  ![](https://latex.codecogs.com/gif.latex?%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%20%28%5Cfrac%7B%5Csqrt%20n%7D%7B%5Clog%20%28n%29%7D%29%5E%7B2%7D%20%3D%20%5Cinfty)

  Above functions are valid when `f(n) = \omega(g(n))`

  > ![](https://latex.codecogs.com/png.latex?%5Csmall%20f%28n%29%20%3D%20n%20%5Clog%28n%29%20&plus;%20n%3Bg%28n%29%20%3D%20%5Clog%28n%29)

  Using the *limit method*,

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%20%5Cfrac%7Bf%28n%29%7D%7Bg%28n%29%7D%20%3D%20%5Cfrac%7Bn%5Clog%28n%29&plus;n%7D%7B%5Clog%28n%29%7D)

  ![](https://latex.codecogs.com/gif.latex?%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%20%5Cfrac%7Bn%5Clog%28n%29%7D%7B%5Clog%28n%29%7D%20&plus;%20%5Cfrac%7Bn%7D%7B%5Clog%28n%29%7D)

  ![](https://latex.codecogs.com/gif.latex?%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%20%28n&plus;%20%5Cfrac%7Bn%7D%7B%5Clog%28n%29%7D%29%20%3D%20%5Cinfty)

  Above functions are valid when `f(n) = \omega(g(n))`

  > ![](https://latex.codecogs.com/png.latex?%5Csmall%20f%28n%29%20%3D%2010%20%3Bg%28n%29%20%3D%20%5Clog%2810%29)

  Both are constant.

  Above function are valid when `f(n) = \theta(g(n))`

  > ![](https://latex.codecogs.com/png.latex?%5Csmall%20f%28n%29%20%3D%202%5E%7Bn%7D%20%3Bg%28n%29%20%3D%2010*n%5E%7B2%7D)

  Using the *limit method*,

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%20%5Cfrac%7Bf%28n%29%7D%7Bg%28n%29%7D%20%3D%20%5Cfrac%7B2%5E%7Bn%7D%7D%7B10n%5E%7B2%7D%7D)

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20%5Cfrac%7B1%7D%7B10%7D%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%5Cfrac%7B2%5E%7Bn%7D%7D%7Bn%5E%7B2%7D%7D)

  Using *L'Hopital's Rule* (taking the derivatives),

  ![](https://latex.codecogs.com/gif.latex?%5Cfrac%7B1%7D%7B10%7D%20%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%20%5Cfrac%7B%5Cln%282%29%5Ccdot2%5E%7Bn%7D%7D%7B2n%7D)

  ![](https://latex.codecogs.com/gif.latex?%5Cfrac%7B1%7D%7B10%7D%20%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%20%5Cfrac%7B2%5Cln%282%29%5Ccdot2%5E%7Bn%7D%7D%7B2%7D)

  ![](https://latex.codecogs.com/gif.latex?%5Cfrac%7B%5Cln%282%29%7D%7B10%7D%20%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%202%5E%7Bn%7D)

  ![](https://latex.codecogs.com/gif.latex?%5Cfrac%7B%5Cln%282%29%7D%7B10%7D%20%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%202%5E%7Bn%7D%20%3D%20%5Cinfty)

  Above function are valid when `f(n) = \theta(g(n))`

  > ![](https://latex.codecogs.com/png.latex?%5Csmall%20f%28n%29%20%3D%202%5E%7Bn%7D%20%3Bg%28n%29%20%3D%203%5E%7Bn%7D)

  Using the *limit method*,

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%5Cfrac%7Bf%28n%29%7D%7Bg%28n%29%7D%3D%5Cfrac%7B2%5E%7Bn%7D%7D%7B3%5E%7Bn%7D%7D)

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%28%5Cfrac%7B2%7D%7B3%7D%29%5E%7Bn%7D%20%3D%200)

  Above function are valid when `f(n) = O(g(n))`

  ---
  
- > For each of the following pairs of function `f(n)` and `g(n)`, determine whether `f(n)=O(g(n))`,`g(n)=O(f(n))` or both

  > ![](https://latex.codecogs.com/png.latex?%5Csmall%20f%28n%29%20%3D%20%28n%5E%7B2%7D-n%29/2%20%3Bg%28n%29%20%3D%206n)

  when ![](https://latex.codecogs.com/gif.latex?%5Csmall%20n%20%5Cto%20%5Cinfty),

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20f%28n%29%20%3E%20g%28n%29)

  Therefore `g(n)= O(f(n))`

  >![](https://latex.codecogs.com/gif.latex?%5Csmall%20f%28n%29%20%3D%20n%20&plus;%202%5Csqrt%20n%20%3B%20g%28n%29%20%3D%20n%5E%7B2%7D)

  when ![](https://latex.codecogs.com/gif.latex?%5Csmall%20n%20%5Cto%20%5Cinfty),

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20g%28n%29%20%3E%20f%28n%29)

  Therefore `f(n) = O(g(n))`

  > ![](https://latex.codecogs.com/gif.latex?%5Csmall%20f%28n%29%3Dn%5Clog%20n%20%3B%20g%28n%29%3Dn%5Csqrt%20n/%202)

  when ![](https://latex.codecogs.com/gif.latex?%5Csmall%20n%20%5Cto%20%5Cinfty),

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20g%28n%29%20%3E%20f%28n%29)

  Therefore `f(n) = O(g(n))`

  > ![](https://latex.codecogs.com/gif.latex?%5Csmall%20f%28n%29%3Dn&plus;%5Clog%20n%20%3B%20g%28n%29%3D%5Csqrt%20n)

  when ![](https://latex.codecogs.com/gif.latex?%5Csmall%20n%20%5Cto%20%5Cinfty),

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20f%28n%29%20%3E%20g%28n%29)

  Therefore `g(n) = O(f(n))`

  > ![](https://latex.codecogs.com/gif.latex?%5Csmall%20f%28n%29%20%3D%202%28%5Clog%20n%29%5E%7B2%7D%3B%20g%28n%29%3D%5Clog%20n&plus;%201)

  when ![](https://latex.codecogs.com/gif.latex?%5Csmall%20n%20%5Cto%20%5Cinfty),

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20f%28n%29%20%3E%20g%28n%29)

  Therefore `g(n) = O(f(n))`

  > ![](https://latex.codecogs.com/gif.latex?%5Csmall%20f%28n%29%3D4n%5Clog%20n&plus;n%3B%20g%28n%29%3D%28n%5E%7B2%7D-n%29/2)

  when ![](https://latex.codecogs.com/gif.latex?%5Csmall%20n%20%5Cto%20%5Cinfty),

  ![](https://latex.codecogs.com/png.latex?%5Csmall%20g%28n%29%20%3E%20f%28n%29)

  Therefore `f(n) = O(g(n))`

  ---
  
- > Prove that ![](https://latex.codecogs.com/gif.latex?n%5E%7B3%7D%20-%203n%5E%7B2%7D-n%20&plus;%201%20%3D%20%5Ctheta%28n%5E%7B3%7D%29)

  Using the *limit method*,

  ![](https://latex.codecogs.com/gif.latex?%5Clim_%7Bn%20%5Cto%20%5Cinfty%20%7D%5Cfrac%7Bn%5E%7B3%7D%20-%203n%5E%7B2%7D-n%20&plus;%201%7D%7Bn%5E%7B3%7D%7D)

  ![](https://latex.codecogs.com/gif.latex?%5Clim_%7Bn%20%5Cto%20%5Cinfty%20%7D%5Cfrac%7Bn%5E%7B3%7D%28%20%5Cfrac%7B3%7D%7Bn%7D-%5Cfrac%7B1%7D%7Bn%5E%7B2%7D%7D%20&plus;%20%5Cfrac%7B1%7D%7Bn%5E%7B3%7D%7D%29%7D%7Bn%5E%7B3%7D%7D)

  ![](https://latex.codecogs.com/gif.latex?%5Clim_%7Bn%20%5Cto%20%5Cinfty%20%7D%5Cfrac%7B%28%20%5Cfrac%7B3%7D%7Bn%7D-%5Cfrac%7B1%7D%7Bn%5E%7B2%7D%7D%20&plus;%20%5Cfrac%7B1%7D%7Bn%5E%7B3%7D%7D%29%7D%7B1%7D%20%3D%201)

  When `c > 0` then `f(n) = \theta(n^3)`

  ---
  
- > Prove that ![](https://latex.codecogs.com/gif.latex?n%5E%7B2%7D%20%3D%20O%282%5E%7Bn%7D%29)

  Using the *limit method*,

  ![](https://latex.codecogs.com/gif.latex?%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%20%5Cfrac%7Bn%5E%7B2%7D%7D%7B2%5E%7Bn%7D%7D)

  ![](https://latex.codecogs.com/gif.latex?%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%20n%5E%7B2%7D2%5E%7B-n%7D%20%3D%200)

  When `c=0` then `f(n) = O(2^n)`

  ---
  
- For each of the following pairs of functions `f(n)` and `g(n)` , give and appropriate positive constant `c` such that `f(n) <= c.g(n)` for all `n>1`

  > ![](https://latex.codecogs.com/gif.latex?f%28n%29%20%3D%20n%5E%7B2%7D%20&plus;%20n%20&plus;%201%20%3B%20g%28n%29%20%3D%202n%5E%7B3%7D)

  When `c=1` ,

  `f(1) = 3 and g(1) = 2`

  `is f(1) <= g(1)` *not true*

  When `c=2`,

  `f(2) = 7 and g(2) = 16`

  `is f(2) <= g(2)` *true*

  Therefore `c = 2`

  > ![](https://latex.codecogs.com/gif.latex?f%28n%29%20%3D%20n%5Csqrt%20n%20&plus;%20n%5E%7B2%7D%20%3B%20g%28n%29%20%3D%20n%5E%7B2%7D)

  *didn't show the working*

  When `c = 1`,

  `f(1) = 2 and g(1) = 1` *not true*

  When `c = 3`,

  `f(3)  <= g(3)` 

  Therefore `c = 3`

  > ![](https://latex.codecogs.com/gif.latex?f%28n%29%20%3D%20n%5E%7B2%7D%20-%20n%20&plus;%201%20%3B%20g%28n%29%20%3D%20%5Cfrac%7Bn%5E%7B2%7D%7D%7B2%7D)

  *didn't show the working*

  `c = 1`

  ---
  
- > Prove that if ![](https://latex.codecogs.com/gif.latex?%5Ctiny%20f_%7B1%7D%28n%29%20%3D%20O%28g_%7B1%7D%28n%29%29)and ![](https://latex.codecogs.com/gif.latex?%5Ctiny%20f_%7B2%7D%28n%29%20%3D%20O%28g_%7B2%7D%28n%29%29), then ![](https://latex.codecogs.com/gif.latex?%5Ctiny%20f_%7B1%7D%28n%29%20&plus;%20f_%7B2%7D%28n%29%20%3D%20O%28g_%7B1%7D%28n%29&plus;g_%7B2%7D%28n%29%29).

  ![](https://latex.codecogs.com/gif.latex?f_%7B1%7D%28n%29%20%5Cleq%20c%20%5Ccdot%20g_%7B1%7D%28n%29)

  <img src="https://latex.codecogs.com/gif.latex?f_%7B2%7D%28n%29%20%5Cleq%20c%20%5Ccdot%20g_%7B2%7D%28n%29" />

  ![](https://latex.codecogs.com/gif.latex?f_%7B1%7D%28n%29%20&plus;%20f_%7B2%7D%28n%29%20%5Cleq%20c%28g_%7B1%7D%28n%29&plus;g_%7B2%7D%28n%29)

  Therefore,

  ![](https://latex.codecogs.com/gif.latex?f_%7B1%7D%28n%29%20&plus;%20f_%7B2%7D%28n%29%20%3D%20O%28g_%7B1%7D%28n%29&plus;g_%7B2%7D%28n%29)

  > Prove that if ![](https://latex.codecogs.com/gif.latex?%5Ctiny%20f_%7B1%7D%28n%29%20%3D%20%5COmega%28g_%7B1%7D%28n%29%29)and ![](https://latex.codecogs.com/gif.latex?%5Ctiny%20f_%7B2%7D%28n%29%20%3D%20%5COmega%28g_%7B2%7D%28n%29%29), then ![](https://latex.codecogs.com/gif.latex?%5Ctiny%20f_%7B1%7D%28n%29%20&plus;%20f_%7B2%7D%28n%29%20%3D%20%5COmega%28g_%7B1%7D%28n%29&plus;g_%7B2%7D%28n%29%29)

  ![](https://latex.codecogs.com/gif.latex?c%20%5Ccdot%20f_%7B1%7D%28n%29%20%5Cgeq%20g_%7B1%7D%28n%29)

  ![](https://latex.codecogs.com/gif.latex?c%20%5Ccdot%20f_%7B2%7D%28n%29%20%5Cgeq%20g_%7B2%7D%28n%29)

  ![](https://latex.codecogs.com/gif.latex?c%20%5Ccdot%28f_%7B1%7D%28n%29%20&plus;%20f_%7B2%7D%28n%29%29%20%5Cgeq%20g_%7B1%7D%28n%29&plus;g_%7B2%7D%28n%29)

  Therefore,

  ![](https://latex.codecogs.com/gif.latex?f_%7B1%7D%28n%29%20&plus;%20f_%7B2%7D%28n%29%20%3D%20%5COmega%28g_%7B1%7D%28n%29&plus;g_%7B2%7D%28n%29%29)

  > Prove that if ![](https://latex.codecogs.com/gif.latex?%5Ctiny%20f_%7B1%7D%28n%29%20%3D%20O%28g_%7B1%7D%28n%29%29)and ![](https://latex.codecogs.com/gif.latex?%5Ctiny%20f_%7B2%7D%28n%29%20%3D%20O%28g_%7B2%7D%28n%29%29), then ![](https://latex.codecogs.com/gif.latex?%5Ctiny%20f_%7B1%7D%28n%29%20%5Ccdot%20f_%7B2%7D%28n%29%20%3D%20O%28g_%7B1%7D%28n%29%20%5Ccdot%20g_%7B2%7D%28n%29%29)
  
  ![](https://latex.codecogs.com/gif.latex?f_%7B1%7D%28n%29%20%5Cleq%20c%20%5Ccdot%20g_%7B1%7D%28n%29)
  
  <img src="https://latex.codecogs.com/gif.latex?f_%7B2%7D%28n%29%20%5Cleq%20c%20%5Ccdot%20g_%7B2%7D%28n%29"  />
  
  ![](https://latex.codecogs.com/gif.latex?f_%7B1%7D%28n%29%20%5Ccdot%20f_%7B2%7D%28n%29%20%3D%20C%20%28g_%7B1%7D%28n%29%20%5Ccdot%20g_%7B2%7D%28n%29%29)
  
  Therefore,
  
  ![](https://latex.codecogs.com/gif.latex?f_%7B1%7D%28n%29%20%5Ccdot%20f_%7B2%7D%28n%29%20%3D%20O%28g_%7B1%7D%28n%29%20%5Ccdot%20g_%7B2%7D%28n%29%29)
  
  ---
  
- >  Prove for all `k >= 1` and all sets of constants `{ak,ak-1,...,a1,a0} element of R`,
  >
  > ![](https://latex.codecogs.com/gif.latex?%5Ctiny%20a_%7Bk%7Dn%5E%7Bk%7D%20&plus;%20a_%7Bk-1%7Dn%5E%7Bk-1%7D&plus;...&plus;a_%7B1%7Dn&plus;a_%7B0%7D%20%3D%20O%28n%5E%7Bk%7D%29)

  *Base case*: when `k = 1`,

  ![](https://latex.codecogs.com/gif.latex?a_%7B1%7Dn%20&plus;%20a_%7B0%7D%20%3D%20O%28n%29)

  *Induction step*: Assuming **True** when `k = k + 1`,

  ![](https://latex.codecogs.com/gif.latex?a_%7Bk&plus;1%7Dn%5E%7Bk&plus;1%7D%20&plus;%20a_%7Bk%7Dn%5E%7Bk%7D&plus;...&plus;a_%7B1%7Dn&plus;a_%7B0%7D%20%3D%20O%28n%5E%7Bk&plus;1%7D%29)

  ![](https://latex.codecogs.com/gif.latex?a_%7Bk&plus;1%7Dn%5E%7Bk&plus;1%7D%20&plus;%20O%28n%29%20%3D%20O%28n%5E%7Bk&plus;1%7D%29)

  Therefore,

  ![](https://latex.codecogs.com/gif.latex?%5C%20a_%7Bk%7Dn%5E%7Bk%7D%20&plus;%20a_%7Bk-1%7Dn%5E%7Bk-1%7D&plus;...&plus;a_%7B1%7Dn&plus;a_%7B0%7D%20%3D%20O%28n%5E%7Bk%7D%29)

  ---

- > Show that for any real constants a and b, b > 0
  >
  > `(n + a)^b = \theta(n^b)`

  *Base case*: when `a = 0` and `b = 1`,

  `(n)^1 = \theta(n)`

  Using the *limit method*,

  ![](https://latex.codecogs.com/gif.latex?%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%20%3D%20%5Cfrac%7Bn%7D%7Bn%7D%20%3D%201)

  Therefore `n^(b) = \theta(n^b)` :black_medium_square:

  ---

- > List the functions below from the lowest to the highest order

  ```
  n! >> 2^n, e^n, 2^(n-1) >> n - n^3 + 7n^5 >> n^3 >> n^2, n^2 + lg n >> n^(1+e) >> \sqrt(n) >> n lg n >> (log n)^2 >> ln n, log n >> log log n    
  ```
  
- > List the functions below from the lowest to highest order

  ```
  n! >> 2^n, (3/2)^n >> n - n^3 + 7n^5 >> n^3 >> n^2 , n^2 log n >> n log n >> n >> n/log n >> \sqrt(n) >> log n + n^(0.3333) >> (log n)^2 >> log n/ ln n >> log log n >> 6 >> (1/3)^n
  ```

- > Find two functions `f(n)` and `g(n)` that satisfy the following relationship. If no such `f` and `g` *exist*, write **None**.

  >`f(n)=o(g(n))` and `f(n) != \theta(g(n))`

  **NONE**

  >`f(n)= \theta(g(n))` and `f(n) =o(g(n))`

  **NONE**

  > `f(n) = \theta(g(n))` and `f(n) != O(g(n))`

  **NONE**

  > `f(n) = \Omega(g(n))` and `f(n) != O(g(n))`

  `f(n) = n` and `g(n) = log n `
  
  using the *limit method*,
  
  ![](https://latex.codecogs.com/png.latex?%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%5Cfrac%7Bf%28n%29%7D%7Bg%28n%29%7D%20%3D%20%5Cfrac%7Bn%7D%7B%5Clog%20n%7D)
  
  ![](https://latex.codecogs.com/png.latex?%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%5Cfrac%7Bf%28n%29%7D%7Bg%28n%29%7D%20%3D%20%5Cfrac%7Bn%7D%7B%5Clog%20n%7D%20%3D%20%5Cinfty)
  
  If ![](https://latex.codecogs.com/png.latex?%5Ctiny%20%5Clim_%7Bn%20%5Cto%20%5Cinfty%7D%5Cfrac%7Bf%28n%29%7D%7Bg%28n%29%7D),
  
  - equal to zero then `f(n) = O(g(n))`
  - equal to infinity then `f(n)= \Omega(g(n))`
  - c > 0 then `f(n)= \theta(g(n))`
  
  ---
  
- > True or False?

  
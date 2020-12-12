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

   ![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D1%7D%5E%7Bn%7D%5Csum_%7Bj%20%3D%20i%20&plus;%201%7D%5E%7Bn%7Dn)

   ![](https://latex.codecogs.com/png.latex?%5Csum_%7Bi%20%3D1%7D%5E%7Bn%7Dn%5E%7B2%7D)

   ![](https://latex.codecogs.com/png.latex?%7B%5Ccolor%7BRed%7D%20%5Csum_%7Bi%20%3D1%7D%5E%7Bn%7Dn%5E%7B2%7D%7D)

   The **red** color term is the dominant term,

   ![](https://latex.codecogs.com/png.latex?%7B%5Ccolor%7BRed%7D%20n%5E%7B3%7D%7D)

   
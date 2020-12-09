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
a -----|       |------- b
	   |---c---|
```

- The knapsack problem.






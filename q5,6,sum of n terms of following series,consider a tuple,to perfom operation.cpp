 Q/5.Write a function that finds the sum of the n terms of the following series. Import the factorial 
function created in question 4.
Series : 1-x2/2!+x4/4!-x6/6!+…xn/n!
# Importing factorial function created previously
from ques_3 import factorial

# Function to find sum of given series
def sum_series(x, n):
    sum = 0
    for i in range(1, n+1, 1):
        term = ((-1)**(i+1))*(x**(2*i-2)/factorial(2*i-2)) #Calculating nth term
        sum += term
    return sum

if __name__ == "__main__":
    n = int(input("Enter n: "))
    x = int(input("Enter x: "))
    sum = sum_series(x, n)
    print("\nSum of {} terms of series for x={}: {}".format(n, x, sum))
    
   Q/6 Consider a tuple t1={1,2,5,7,9,2,4,6,8,10}. Write 
a program to perform following operations:
a) Print another tuple whose values are even numbers in the given tuple.
b) Concatenate a tuple t2 = {11,13,15) with t1.
c) Return maximum and minimum value from this tuple.
Solution 6 :
t1 = (1,2,5,7,9,2,4,6,8,10)
print("Given tuple: ", t1)
# a) Print another tuple whose values are even numbers in the given tuple.
t_even = () for i in 
range(0, len(t1)):
if t1[i] % 2 == 0:
t_even += (t1[i],)
print("New tuple with even values : ", t_even)
# b) Concatenate a tuple t2 = {11,13,15) with t1.
t2 = (11, 13, 15) 
t3 = t1 + t2
print("Concatented tuple : ", t3)
# c) Return maximum and minimum value from this tuple.
maximum = t3[0]
minimum = t3[0]
for i in range(0, len(t3), 1):
if t3[i] > maximum:
maximum = t3[i]
if t3[i] < minimum:
minimum = t3[i]
print("Maximum : ", maximum)
print("Minimum : ", minimum)


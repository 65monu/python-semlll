 Q/3 Write a Python function to find the nth term of Fibonacci sequence and its factorial.Return the 
result as a list.
Solution 3 :
def factorial(n):
if n <= 1:
return 1
else:
return n * factorial(n-1)
def fibonnaci(n):
if n <= 0:
return 0
if n == 1:
return 1
return fibonnaci(n-1) + fibonnaci(n-2)
if __name__ == '__main__':
num = int(input("Enter a number: "))
print(f"{num} term of fibonacci series : ", fibonnaci(num))
print(f"Factorial of {num} : ", factorial(num))


Q/4Write a function that takes a number (>=10) as an input and return the digits of the number as a 
set.
Solution 4 :
 num = int(input("Enter a number greater than or equal to 10 : "))
if num >= 10:
_set = set()
while num != 0:
_set.add(num%10)
num = int(num/10)
print("Set: ", _set) else:
print("Oops! Number is less than 10"


// Question 1 :
//Write a function that takes the lengths of three sides : side1,side2 and side3 of the triangle as the input from 
//the user using the input function and return the area and perimeter of the triangle as a tuple. Also, assert 
//that the sum of the length of any two sides is greater than the third side.
 //from math import *
side1=int(input("enter the side1: "))
side2=int(input("enter the side2: "))
side3=int(input("enter the side3: "))
if (side1+side2)<side3:
print("invalid sides")
perimeter=side1+side2+side3
area=sqrt((perimeter/2)*(perimeter/2-side1)*(perimeter/2-side2)*(perimeter/2-side3))
answer=(area,perimeter)
print("The Area and perimeter is",answer)

/*Q/2.Consider a showroom of electronic products, where there are various salesmen.Each salesman is 
given a commission of 5%, depending on the sales made per month. Incase the sale done is less than 
 
*/Solution 2 :
From math import *
i=0
commission=0
total=0
while i<4:
sales=int(input("enter the sales of the"+str(i+1)+"week"))
if sales>=80000:
print("excellent sales")
total+=sales
commission+=0.05*sales
elif sales>=60000 and sales <80000 :
print("good")
total+=sales
commission+=0.05*sales
elif sales>=40000 and sales <60000 :
print("average sales")
total+=sales
if sales>50000:
commission+=0.05*sales
elif sales<40000:
print("work hard")
total+=sales
i=i+1
answer=("total sale is:"+str(total),"total commission is: "+str(commission))
print(answer)


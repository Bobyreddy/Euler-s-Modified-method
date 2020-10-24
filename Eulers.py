yo = float(input("enter Y(0): "))
x = float(input("enter X value: "))
x0 = 0
h = (x - x0)

def f(X, Y):
    z = float((Y - X) / (Y + X))
    return z

#initital iteration 
A = float( yo + h * f(x0, yo))

#modified 
n = int(input("enter the number of iteration to be performed: "))   
for i in range(1, n+1):    
    A = float(yo + (h/2)*(f(x0, yo) + f(x, A)))
    print("y1(",i,") = %.4f"%A)
    i += 1

print("the value of Y at X =", x,"= %.4f"%A)

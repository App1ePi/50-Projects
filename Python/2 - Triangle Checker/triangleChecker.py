a = input("Enter line A: ")
b = input("Enter line B: ")
c = input("Enter line C: ")

def isTriangle(a, b, c):
    if a > 0 and b > 0 and c > 0:
        print("This is a valid Triangle")
        return True

    if a <= 0 or b <= 0 or c <= 0:
        print("This is not a valid Triangle")

if isTriangle(int(a), int(b), int(c)) == True:
    if a == b == c:
        print("This is an Equilateral Triangle")

    if a == b or a == c or b == c:
        if a == b == c:
            var = null

        else:
            print("This is an Isoceles Triangle")

    if a != b and a != c and b != c:
        print("This is a Scalene Triangle")
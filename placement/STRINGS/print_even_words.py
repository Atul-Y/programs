def printeven(s):
    s=s.split(" ")

    for i in s:
        if(len(i)%2==0):
            print(i)

s="My NAME is atul yadav"
printeven(s)
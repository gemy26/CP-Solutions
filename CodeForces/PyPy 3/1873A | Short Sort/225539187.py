 
t = int(input())
for _ in range(t):
    x = input()
    cnt=0
    if x[0] != "a":
            cnt=cnt+1
    if x[1] != "b":
            cnt=cnt+1
    if x[2] != "c":
            cnt=cnt+1
 
 
    if cnt > 2 :
         print("NO")
    else:
       print("YES")
 
 
 
 
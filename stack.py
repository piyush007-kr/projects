stack=[]
def display():
    if len(stack)<=0:
        print("stack is empty...")
    else:
        print("stack currently contains: ")
        for i in stack:
            print(i)
def push():
    size=int(input("Enter the number of elements: "))
    for i in range(size+1):
        if len(stack)<size:
            e=int(input("Enter the elements to push: "))
            stack.append(e)
        else:
            print("stack is full...")
            break
def pop():
    if len(stack)>0:
        print("pop element : ",stack.pop())
    else:
        print("stack is empty...")
while True:
    choice=input("press \n 1:display \n 2:push \n 3:pop \n 4:close >>> ")
    if choice=="1":
        display()
    elif choice=="2":
        push()
    elif choice=="3":
        pop()
    else:
        print("bye!! Bye!!")
        break
import csv
def write():
    f=open("student.csv",'a',newline="")
    student=csv.writer(f)
    header=["Roll_no","Name","marks"]
    student.writerow(header)
    choice="1"
    while choice=="1":
        a=int(input("Enter the Roll_no: "))
        b=input("Enter the Name: ")
        c=int(input("Enter the Marks: "))
        sub=[a,b,c]
        student.writerow(sub)
        choice=input("press 1 to add more data or enter 2 to exit: ")
    f.close()
    print("successfully write compelete.......")
def read():
    f=open("student.csv","r")
    sreader=csv.reader(f)
    for i in sreader:
        print(i)
    f.close()
while True:
    choice=input("press \n 1:write \n 2:read \n 3:exit ")
    if choice=="1":
        write()
    elif choice=="2":
        read()
    else:
        break




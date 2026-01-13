import pickle
def write():
    data={}
    f=open("bina.dat","ab")
    while True:
        a=input("Enter the name: ")
        b=int(input("Enter the roll no: "))
        c=int(input("Enter the marks: "))
        data['Name: ']=a
        data['Roll_no: ']=b
        data['Marks: ']=c
        pickle.dump(data,f)
        choice=input("press 1 to store more data or press 2 to exit: ")
        if choice=="2":
            break
    f.close()
def read():
    data={}
    f=open("bina.dat","rb")
    try:
        while True:
                data=pickle.load(f)
                print("*********************")
                print("Name: ",data['Name: '])
                print("Roll_no: ",data['Roll_no: '])
                print("Marks: ",data['Marks: '])
                print("*********************")
    except EOFError:
        print("read successfully........")
    f.close()
def search():
    data={}
    f=open("bina.dat","rb")
    found=False
    s=int(input("Enter the roll_no to search: "))
    try:
        while True:
            data=pickle.load(f)
            if data['Roll_no: ']==s:
                print("*********************")
                print("Name: ",data['Name: '])
                print("Roll_no: ",data['Roll_no: '])
                print("Marks: ",data['Marks: '])
                print("*********************")
                found=True          
    except EOFError:
        if found==False:
            print("No such records find")
        else:
            print("searching complete.......")
        f.close()
while True:
    choice=input("Enter digits to give commands....\n 1:write \n 2:read \n 3:search \n 4:close \n >>>>")
    if choice=="1":
        write()
    elif choice=="2":
        read()
    elif choice=="3":
        search()
    else:
        break

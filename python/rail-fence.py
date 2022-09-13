def main():
    print("""Rail-Fence Encryption/Decryption
    1. Encrypt
    2. Decrypt
    3. Exit""")
    choice = input("choice: ")
    if choice == str(1):
        encrypt()
    elif choice == str(2):
        decrypt()
    elif choice == str(3):
        exit()
    else:
        print("Invalid option")
        main()

def encrypt():
    print("Encrypt")
    text = input("String: ")
    row = int(input("Row: "))
    cipher = 0
    textLen = len(text)
    temp = textLen%row
    for i in range(temp):
        text += "@"
    
    textChar = []
    for i in range(textLen):
        textChar.append(text[i])



def decrypt



"""
def main():
    str1 = input("String: ")
    str1len = len(str1)
    col = int(input("Column: "))
    temp = str1len%col
    temp = col-temp
    for i in range(temp):
        str1 = str1+"@"
    
    str1CharArr = []
    for i in range(str1len):
        str1CharArr.append(str1[i])

    subArrLen = str1len/col
    subArr = {}
    for i in range(col):
        subArrName = "subArr%d" % (i)
        subArr[subArrName] = []

    choice = int(input("Choice: "))
    if choice == 1:
        subArr = encrypt(str1CharArr,col)
        for i in range(col):
            subArrName = "subArr%d" % (i)
            print(subArr[subArrName])
    elif choice == 2:
        subArr = decrypt(str1CharArr,col)
        for i in range(col):
            subArrName = "subArr%d" % (i)
            print(subArr[subArrName])
    elif choice == 3:
        exit()
    else:
        print("Invalid Choice")

    main()
            

def encrypt(str1CharArr,col):
    subArrLen = len(str1CharArr)/col
    subArr = {}
    for i in range(col):
        subArrName = "subArr%d" % (i)
        subArr[subArrName] = []
        
    for i in range(col):
        for j in range(int(subArrLen)):
            subArr[subArrName].append(str1CharArr[i+j*col])
    return subArr


def decrypt(str1CharArr,col):
    subArrLen = len(str1CharArr)/col
    subArr = {}
    for i in range(col):
        subArrName = "subArr%d" % (i)
        subArr[subArrName] = []
        
    for i in range(col):
        for j in range(int(subArrLen)):
            subArr[subArrName].append(str1CharArr[i+j*col])
    return subArr

main()"""
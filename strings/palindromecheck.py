

def palincheck(str1,str2):
    l1=list(str1)
    l2=list(str2)
    if len(l1)!=len(l2):
        return False
    else :
        i=len(l1)
        i-=1
        while(i>=0):
            if l1[i]!=l2[i]:
                return False
            else :
                i=i-1
        return True



#taketwostrings
str1=input("enter first string : ")
str2=input("enter second string : ")
if palincheck(str1,str2):
    print("yes palindrome")
else :
    print("Not palindrome")
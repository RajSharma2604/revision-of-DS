class rectangle:
    def __init__(self,length,width):
        self.length=length
        self.width=width
    def area(self):
        return self.length* self.width
    def parameter(self):
        return 2*(self.length+self.width)


#object creation

#take user input
len=int(input("enter length:"))
wid=int(input("enter width:"))
obj=rectangle(len,wid)
print(f"area of rectangle is:{obj.area()}")
print(f"parameter of rectangle is:{obj.parameter()}")
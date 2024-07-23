#creating paprent class
class animal:
    def __init__(self,weight,height):
        self.weight=weight
        self.height=height
    def action(self):
        print("bark")
    

#creating child classes

class dog(animal):
    def __init__(self,weight,height,color):
        #extra attribute
        self.color=color
        super().__init__(weight,height) #why inside this function? cause at the time of object creation this function will auto callled.
    # def action(self):
    #     pass          after commenting this fun here now it will run the same name function from parent class
    def info(self):
        print(f"height is : {self.height},weight is: {self.weight},color is: {self.color}")

class cat(animal):
    def __init__(self,weight,height,color):
        #extra attribute
        self.color=color
        super().__init__(weight,height) #why inside this function? cause at the time of object creation this function will auto callled.
    def action(self):
        print("meowww")
    def info(self):
        print(f"height is : {self.height},weight is: {self.weight},color is: {self.color}")

class cow(animal):
    def __init__(self,weight,height,color):
        #extra attribute
        self.color=color
        super().__init__(weight,height) #why inside this function? cause at the time of object creation this function will auto callled.
    def action(self):
        print("moouuuu")
    def info(self):
        print(f"height is : {self.height},weight is: {self.weight},color is: {self.color}")


#object creation  for classes.

obj1=dog("12kg","4ft","black")
obj2=cat("8kg","2ft","brown")
obj3=cow("25kg","6ft","white")

obj1.info()
obj2.info()
obj3.info()
obj1.action()
obj2.action()
obj3.action()
        
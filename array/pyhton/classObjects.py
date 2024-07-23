class vehicle:
    def __init__(self,brand,model):
        self.brand=brand
        self.model=model
    def action(self):
        print("move")
    def name(self):
        print(f"{self.brand} is of {self.model}")


#creating obj
obj1=vehicle("maruti","suzuki")
obj1.action()
obj1.name()
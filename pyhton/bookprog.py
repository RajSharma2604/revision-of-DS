class book:
    def __init__(self):
        pass
        # self.temp=temp
    def set(self,title,author,price):
        self.title=title
        self.author=author
        self.price=price
    def get(self):
        print(f"title:{self.title},author:{self.author},price:{self.price}")


#object create
obj=book()
obj.set("the last breathe","raj sharma","500rupee")
obj.get() 
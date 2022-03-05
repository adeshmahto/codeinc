class Person:
    department="school of information"

    def set_name(self,name):
        self.name=name
    def set_location(self,location):
        self.location=location
    def getinfo(self):
        print(f"my name is{self.name} and i live in {self.location}")
        
adesh=Person()
adesh.set_name("adesh")
adesh.set_location("dhanbad")




class Phone :
    
    def __init__(self):
        self.contacts = []
        
    def add_contact(self,contact):
        if contact in self.contacts :
            print(f"{contact} already exists in your contacts")
        else :
            self.contacts.append(contact)
            print (f"{contact} sucessfully added")
            
    def remove_contact(self,contact):
        if contact in self.contacts :
            self.contacts.remove(contact)
            print(f"{contact} sucessfully deleted")
        else :
            print(f"{contact} is not found in your contacts")
            
    def make_call(self,contact):
        if contact in self.contacts :
            print(f"calling {contact}")
        else :
            print(f"{contact} is not found in your contacts")
            
class Camera :
    def take_pic(self):
        print ("The picture was taken sucessfully")
        
class smartphone (Phone,Camera):
    pass
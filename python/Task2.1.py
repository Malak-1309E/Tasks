name = input("What's your name?")

def add(a,b) :
   return a + b 
   
def subtract(a,b) :
    return a - b

def multiply(a,b) :
    return a * b
    
def divide (a,b) :
    while b == 0 :
        b = float(input("This will give zero division error. Please enter the value again"))
    return a / b

def power(a,b) :
    return a ** b

math = {"add": add, "subtract" : subtract, "multiply" : multiply, "divide" : divide, "power" : power}
base_knowledge = {"What's your name?" : "I am a simple chatbot", "Who created you?" : "I am bulit by a student", "How many days are there in a year?" : "There are 365 days in a year",
                  "What are the primary digital colours?" : "Red, Green and Blue (RGB)", "What's the speed of light?" : "The speed of light is 3 x 10^8 m/s"}

while True :
    
    command = input(f"Hello {name}! How can I help you?")
   
    if command == "exit" or command == "bye" :
        break 
      
    elif command in base_knowledge :
        print(base_knowledge[command])
        
    else :
        operation = command.split()
        if operation[0] in math and len(operation) == 3 :
            num1 = float(operation[1])
            num2 = float(operation[2])
            print(math[operation[0]](num1,num2))
        else :   
            print("Sorry i don't have the answer for that. I will work on it")
    
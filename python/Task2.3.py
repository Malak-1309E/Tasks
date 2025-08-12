import random

upper_case = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
lower_case = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
special_characters = ['!', '"', '#', '$', '%', '&', "'", '(', ')', '*', '+', ',', '-', '.', '/',
 ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~']
digits = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
combined = upper_case + lower_case + digits + special_characters


length = int(input("Enter the desired length for the password"))
while length < 4 :
    length =  int(input("Invalid length. Please enter number greater than four"))

Password = []
Password.append(random.choice(upper_case))
Password.append(random.choice(lower_case))
Password.append(random.choice(digits))
Password.append(random.choice(special_characters))
Password += (random.choices(combined,k= (length-4)))

print(f"Your password is : {''.join(Password)}")
    
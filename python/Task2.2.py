K,M = map(int,input("Enter the number of lists and the value of M respectively").split())
while K > 7 or K < 1 :
    K = int(input("Invalid number of list. Please re-enter the number again (1-7)"))
while M > 1000 or M < 1 :
    M = int(input("Invalid value of M. Please re-enter the value again (1-1000)"))
    

all_lists= []

for i in range(K):
    Ni = int(input(f"Enter the number of elements in list {i+1}"))
    while Ni > 7 or Ni < 1:
        Ni=input("Invalid number of elements. Please re-enter the number again (1-7)")
    elements= []
    for j in range (Ni) :
        elements.append(input(f"Enter element number {j +1} in list {i + 1}"))
    
    all_lists.append(elements)

list_of_S = []

for m in all_lists[0] :
    for n in all_lists[1]:
        for z in all_lists[2]:
            list_of_S.append((((int(m)**2) + (int(n)**2) + (int(z)**2))%M))
            
print(f"The maximum value of S is {max(list_of_S)}")
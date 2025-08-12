
N,M = map(int,input("Enter the number of rows and cloumns of the matrix respectively").split())

while N <= 0 or N >= 100 :
    N = int(input("Invalid number of rows. Please re-enter the number again (1-99)"))
while M <=0 or M >= 100 :
    M = int(input("Invalid value of M. Please re-enter the value again (1-99)"))

matrix = []

for i in range(N) :
    matrix_row = []
    
    for j in range(M) :
        matrix_row.append(input(f"Enter the element of row {i+1}, column{j+1}"))
        
    matrix.append(matrix_row)    
    


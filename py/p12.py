# Program to multiply two matrices using nested loops

A = [[1,2,3],[4,5,6],[7,8,9]]
B = [[10,11,12],[13,14,15],[16,17,18]]
 
p = len(A)
q = len(A[0])
 
t = len(B)
r = len(B[0])
 
if(q!=t):
   print("Error! Matrix sizes are not compatible")
   quit()

C = []
for row in range(p):
   curr_row = []
   for col in range(r):
       curr_row.append(0)
   C.append(curr_row)

for i in range(p):
   for j in range(r):
       curr_val = 0
       for k in range(q):
           curr_val += A[i][k]*B[k][j]
       C[i][j] = curr_val
 
print(C)

n=int(input("Enter number of students: "))
record=[]
student_marks=[]

for i in range(n):
    name=input("Enter name: ")
    marks=float(input("Enter marks: "))
    student_marks.append(marks)
    record.append([name, marks])

minimum=min(student_marks)
count=0

for j in student_marks:
    if j == minimum:
        count=count+1

for k in range(count):
    student_marks.remove(minimum)

minimum=min(student_marks)

min_name=[]

for l in record:
    if l[1]==minimum:
        min_name.append(l[0])

min_name.sort()

print("Student(s) with 2nd lowest marks are: ", end=" ")
for m in min_name:
    print(m, end=" ")
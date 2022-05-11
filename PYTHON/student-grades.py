# Name: Justin Lewis              Date: May 5th, 2022
# variables to store first and last name
first_name,last_name="justin","lewis"
# full_name stores concatenation of first and last name
full_name=(first_name+" "+last_name).title()
# these six variables stores grades of all six quizes
grade_1,grade_2,grade_3,grade_4,grade_5,grade_6=90.5,90.5,90.5,90.5,90.5,90.5
# calculating average grade
average_grade=(grade_1+grade_2+grade_3+grade_4+grade_5+grade_6)/6
# printing student's grades
print(f"Your quiz grades are: {grade_1}, {grade_2}, {grade_3}, {grade_4}, {grade_5}, {grade_6}.")
# printing student's name and average grade
print(f"{full_name}'s grade average is {average_grade}.")
# updating grade of first quiz
grade_1+=5
# again calculating average grade after updating grade of first quiz
average_grade=(grade_1+grade_2+grade_3+grade_4+grade_5+grade_6)/6
# printing student's grades
print(f"Your quiz grades are: {grade_1}, {grade_2}, {grade_3}, {grade_4}, {grade_5}, {grade_6}.")
# printing students name in lower case and average grade
print(f"{full_name.lower()}'s grade average is {average_grade}.")

# you name need to modify the values stored in these variables yourself
Problem description - To create a menu driven, interactive program, that can read the data off of the given data sets and process them.

Here , for the purpose of storing data , we are using character arrays and integer arrays.
The program is based on hardcoded data-set values, hence un-alterable by the user. 
Student details like name,branch name and grade are stored in character arrays, while serial-numbers are stored in integer arrays.
The program is capable of sorting and searching students , based on grades they have recieved ,which will be displayed over to the user. 

As it is a menu driven program , we are using switch case to mae the user input a number according to given options , based on which , a task 
will be performed.
_________________________________________________________________________________________________________________________________________
display function : This function will take all the data-set values and display all the items in a neat and organised manner.
All details , from student name , to student branch, to student grades will be dislayed serially. 
_________________________________________________________________________________________________________________________________________
locate function : this will locate all students based on a common pre-defined key-word, that has to be enterred by the user.
the keywords as mentioned are 

"brilliant"
"excellent"
"good"
"fail"

Enterring the keyword will fetch the names of students , that have been assigned that particular grade.
_________________________________________________________________________________________________________________________________________
how the locate function works:
    the grade of each student is stored in an array called grades.
    A for loop is used to iterate over this array and wherever , we encounter the enterred keyword, the index value is stored in 
    another dummy array.
    then we match the index obtained, in the dummy array, with the array containing the names.
    this process is automated by another loop.
    the results are printed
    and voila
    we have the names.
_________________________________________________________________________________________________________________________________________
performance function :  calculates the overall performance of class of students by counting the number of good responses vs the number of
bad responses.
if(number of good responses > no of bad responses )
{
    good performance.
}
else
{
    bad or average.
}
___________________________________________________________________________________________________________________________________________
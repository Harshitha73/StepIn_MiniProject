# Introduction:

 Sorting the given elements using the Sorting Algorithms in C. A Soring Algorithm is an efficient way to perform the task that puts elements of a list in a certain order or arrange them into a particular order. Sorting data has been developed to arrange the array values in various ways for a database.

# Research:
 
 The Sorting Algorithms available are:
  1.Bubble Sort.
  
  2.Insertion Sort.
  
  3.Selection Sort.
  
  4.Quick Sort.
  
  5.Merge Sort. etc..
   
  These Algorithms are classified based on their efficiency, their time complexity, 
  memory usage and other such factors -
  
  Reference Journal on Sorting Algorithms:  https://www.irjet.net/archives/V3/i2/IRJET-V3I290.pdf
 
# Cost and Features:
  
   The only cost of the implementation of Sorting Algorithms is the memory usage and the time taken by the code execution, also known as Space Complexity and Time Complexity. 

   Table representing the Space and Time Complexities of various Sorting Techniques:
   
   <img src="https://github.com/Harshitha73/StepIn_MiniProject/blob/main/Requirements/TimeComplexity%20Table.png">
    

# Defining the System:
  The System is a user interactive interface that has a Menu providing the various Sorting Algorithms present in the System and the User can choose the required Algorithm and the system performs the selected sorting mechanismand provides the output to the User. 
   The System consists some of the various techniques available for Sorting a given list of elements. While each of the algorithms have a different methodolgy in sorting, the below flowwchart gives the basic idea on how the elements are sorted.
  
  <img src="https://github.com/Harshitha73/StepIn_MiniProject/blob/main/Requirements/Flowchart.png">

# SWOT Analysis:
  <img src="https://github.com/Harshitha73/StepIn_MiniProject/blob/main/Requirements/SWOT%20Analysis.png">
    
# 4W's and 1'H:
  
   ## WHO:  
   The Sorting Algorithms are used by almost everyone for various applications, like in searching applications, sorting the data in a database.

   ## WHAT: 
   The Sorting Algorithms are the techniques that are used to rearrange a given array or list elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of element in the respective data structure.
  
   ## WHEN: 
   The Sorting techniques are used to arrange elements of any list and in divide and conquer methods, and when a problem needs to be optimize,i.e., reduce the complexity of the problem. Efficient sorting is important for optimizing the efficiency of other algorithms (such as search and merge algorithms) that require input data to be in sorted lists.   

   ## WHERE: 
   These algorithms are used mostly in datastructure algorithms, numerical and lexical arranging problems, database algorithms and searching algorithms.

   ## HOW: 
   Sorting techniques generally arrange the elements of the list either in ascending or descending order. The algorithms based on the methodoly uses a comparision operator, or divide and conquer methodoly etc. 

# Detail Requirements:
    
 ## High Level Requirements:
 |ID | Description | Status | 
 | :-----: | :-----:  | :---------: |
 | HLR01 | User shall be able to see the available sorting algorithms | Implemented | 
 | HLR02 | User shall be able to select the  required option from the given algorithms | Implemented |
 | HLR03 | User shall be able to give the required array size | Implemented |
 | HLR04 | User shall be able to give the elements of the array | Implemented |
 | HLR05 |The System must give the output i.e., the Sorted elements of the array and the Time Complexity of the Algorithm  | Implemented |
 | HLR06 | User shall be able to repeat the task any number of times they want to | Implemented |
 | HLR07 | User shall be able to exit the system whenever they want to  | Implemented |
 
 ## Low LeveL Requirements:
 | ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LLR01 | When the system is trigged, the system will greet the User with a "Welcome" message | HR01 | Implemented |
| LLR02 | When the User enters into the system, the User will be given options to select from the available Sorting Algorithms | HLR01 | Implemented |
| LLR03 | The available options are the Sorting Algorithms and an "EXIT" option, which allows the User to logout off the system | HLR02 | Implemented |
| LLR04 | When the User selects the option, the system must check if it's a valid option or not and if the option is not not valid, the system should print an "INVALID" message | HLR02 | Implemented |
| LLR05 | If the User selects a "VALID" option, then the system calls the fuction corresponding to that Algorithm or option | HLR02 | Implemented |
| LLR06 | After selecting the Sorting Algorithm, the system requires the arguments for the function which were supposed to be given by the User, the input required is the size of the array and it's elements| HLR03, HLR04 | Implemented |
| LLR07 | The System must provide the output by sorting the elements of the array using the select approach and the Time Complexity of that particular Algorithm| HLR05 | Implemented |
| LLR08 | The System should be able to repeat the process any number of times by providing the "Sorting Menu" for the User to choose and respond with the choosen action| HLR02, HR06 | Implemented |
| LLR09 | If the User decides to exit the system, the system should prompt a "Thank you" message and should end the program | HR07 | Implemented |

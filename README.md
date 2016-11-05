## BTP Allocation Software
#### Issued in interest of all present and future 3rd year students of across all departments of IIT Kharagpur.

### What is it ?
Find out what BTP you will be allocated based on other students' choice and your preference. Just input your DR (department rank) followed by
your choices along with you batchmates, and it will pour out the list of alloted projects.

### How it works ?
1. Use the lookUp.txt file and figure out project number corresponding to various projects.
2. Fill up the choices.txt file which takes in input as - "DR" "no of choices" "choice1_code" "choice2_code" ....
** Example : DR 12 wants to include 4 projects AM1(code-8), DM2(code-25), NG6(code-42) and SKG1(code-81). So he should fill : 12 4 8 25 42 81
3. Fill the total number of students who gave choices as the first value in the file. 
4. Run the BTP_Alloc (.cpp program) with the given text file (choices.txt).

### How to customize ?
1. Change the lookUp file and include all projects currently offered in your dep or year.
2. Change the choices file.
3. Change the values initially in the capacity array to the actual capacity of that particular project in lookUp file.
4. If you dont get it, contact me anyways !!

### Future
1. Create a makefile.
2. Automate the generation of choices file from the projects' actual code directly without having to manually use lookUp.
3. Make the capacity filing process more intiutive for general public.
4. Extend functionality to more domains.

#### Created : 5th November 2016.

## BTP Allocation Software
#### Issued in interest of all present and future 3rd year students of across all departments of IIT Kharagpur.

### What is it ?
Find out what BTP you will be allocated based on other students' choice and your preference. Just input your DR (department rank) followed by
your choices along with you batchmates, and it will pour out the list of alloted projects.

### How it works ?
1. Run the generateChoices code.
2. choices.txt file gets filled up.
** Example : DR 12 wants to include 4 projects AM1(code-8), DM2(code-25), NG6(code-42) and SKG1(code-81). So this is filled : 12 4 8 25 42 81
3. Run the BTP_Alloc (.cpp program) with the given text file (choices.txt).

### How to customize ?
1. Change the generateChoices file and include all projects currently offered in your dep or year.
2. Change the choices file.
3. Change the values initially in the capacity array to the actual capacity of that particular project in lookUp file.
4. If you dont get it, contact me anyways !!

### Future
1. Create a makefile.
2. Automate the generation of choices file from the projects' actual code directly without having to manually use lookUp. (DONE)
3. Make the capacity filing process more intiutive for general public.
4. Extend functionality to more domains.

#### Created : 5th November 2016.

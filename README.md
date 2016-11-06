## BTP Allocation Software
#### Issued in interest of all present and future 3rd year students of across all departments of IIT Kharagpur.

### What is it ?
Find out what BTP you will be allocated based on other students' choice and your preference. Just input your DR (department rank) followed by
your choices along with you batchmates, and it will pour out the list of alloted projects.

### How it works ?
1. Modify the choicesActual.txt file with your actual choices.
2. Compile using "make" and run using "make run".
3. The allocation file and projectsLeft file gets generated automatically.

### How to customize ?
1. Change the generateChoices method and include all projects currently offered in your dep or year.
2. Change the choicesActual.txt file.
3. Change the values initially in the capacity array to the actual capacity of that particular project in lookUp file.
4. If you dont get it, contact me anyways !!

### Future
1. Create a makefile. (DONE)
2. Automate the generation of choices file from the projects' actual code directly without having to manually use lookUp. (DONE)
3. Make the capacity filing process more intiutive for general public. (Almost Done!)
4. Extend functionality to more domains.

#### Created : 5th November 2016.

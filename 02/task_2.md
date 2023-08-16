## Task 2
In this task, the code is attempting to use the `strcopy` function to copy a string into the memory location pointed to by the `line` pointer. However, the `line` pointer is initialized to `nullptr`, which means it doesn't point to any valid memory location.

When `strcopy` tries to copy the string `Dette er en tekst` to the memory location pointed to by `line`, it will try to access an invalid memory location, as the pointer is null.

## Result
This attempt to access invalid memory location will cause a **segmentation fault** and terminate the program, because the program is trying to access memory that it does not have permission to access.



## Task 3 

The provided code snippet has a number of issues that can lead to errors or undesirable behavior.

One common outcome in these case is a segmentation fault (SIGSEGV), which occurs when a program tries to read or write in a memory location that it does not have permission to access.


### 1. Buffer overflow

```cpp
char text[5];
cout << "Enter a word: ";
cin >> text;
```
The code defines an array of `char` named `text` with the size of 5 characters, but it does not validate the length of the input received from the user.

If the user input is longer than 4 characters (plus the null terminator), the extra characters will be written into memory beyond the end of the buffer. This is known as a buffer overflow.
Buffer overflow in this context can lead to undefined behavior, potentially corrupting adjacent memory or causing a crash, often resulting in a segmentation fault.
### 2. Undefined behavior

The code uses a `while` loop to modify the characters in the input until it encounters the character `e`.

```cpp
while (*pointer != search_for) {
*pointer = search_for;
pointer++;
}
```

If the input word does not contain the letter `e`, the loop will continue indefinitely and eventually access memory outside the `text` array, causing undefined behavior. When the program tries to read or write at that memory location, it can trigger a segmentation fault because it is trying to access memory it doesn't have permission to access.










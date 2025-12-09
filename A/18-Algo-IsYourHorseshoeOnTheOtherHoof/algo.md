# **Algorithm Explanation**

The goal of this problem is to determine how many numbers are **unique** among a set of four values.  
This method also works for **any number of elements**, not just four.

---

## **Code Explanation (C/C++)**

```c
int changes = 0; // counts how many different numbers appear in the array

for (int i = 0; i < 4; i++) {

    bool isnew = true; // assume the current number has not appeared before

    // check all previous numbers
    for (int j = 0; j < i; j++) {

        // if the same number was already found
        if (shoe[i] == shoe[j]) {
            isnew = false; // it's not new
            break;         // stop checking
        }
    }

    // if the number is unique (not found earlier)
    if (isnew)
        changes++; // increase the count of unique numbers
}
```

For any question or help u welcome.
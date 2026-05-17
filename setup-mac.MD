# Mac is already preinstalled with Clang/Clang++.

1. Open terminal and run the following command "brew install python"

# VSCode setup.

1. Open VSCode
2. Press "ctrl + shift + X" to open extension primary side bar.
3. Search and install C/C++ and Python by Microsoft.
4. Test if Python/C/C++ IntelliSense is working properly.
5. Press "ctrl + shift + P" and search "User Settings JSON".
6. Open "https://pastebin.com/m52m8s2t" 
7. Copy the content, add it inside settings.json.
8. Test by running all the Test files.

# Running file by hand.

1. Press "ctrl + `" to open a terminal.
1) Full version (Custom output file)
For C       "clang -std=c23 FILENAME.c -o FILENAME && ./FILENAME"
For C++     "clang++ -std=c++23 FILENAME.cpp -lstdc++exp -o FILENAME && ./FILENAME"
For Python  "python FILENAME.py"
2) Lazy version 
For C       "clang -std=c23 FILENAME.c && ./a"
For C++     "clang++ -std=c++23 FILENAME.cpp -lstdc++exp && ./a" 
For Python  "python FILENAME.py"

# Run via extension -> Use "ctrl + F5".
# Debugging -> Use "F5".
# It's normal for MacOS to miss bits/stdc++.h header. Consider manually include each header.
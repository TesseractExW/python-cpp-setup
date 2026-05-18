# I don't recommend to download Python/GCC/G++/Clang/Clang++ via Microsoft Store or non MSYS2 enviroment.

1. Install MSYS2 from "https://www.msys2.org/".
2. Open UCRT64 enviroment terminal. 
3. Run the following command `pacman -S mingw-w64-ucrt-x86_64-toolchain`.
4. Check if GCC and python is installed by run the following command in the URCT64 terminal `gcc --version && python --version`
5. Run the following command to install python-pip `pacman -S mingw-w64-ucrt-x86_64-python-pip`.
6. Add your ".../msys2/ucrt64/bin" into system enviroment path.

# VSCode setup.

1. Open VSCode
2. Press `ctrl + shift + X` to open extension primary side bar.
3. Search and install C/C++ and Python by Microsoft.
4. Test if Python/C/C++ IntelliSense is working properly.
5. Press `ctrl + shift + P` and search `User Settings JSON`.
6. Open "https://pastebin.com/Wtm15nc0".
7. Copy the content, change the `"path": "...\"` to your MSYS2 path add it inside settings.json.
8. Test by running all the Test files.

# Running file by hand.

1. Press ``ctrl + ` `` to open a terminal.
1) Full version (Custom output file)

| Language | Compilation & Execution Command |
| :--- | :--- |
| **C** | `gcc -std=c23 FILENAME.c -o FILENAME.exe && ./FILENAME` |
| **C++** | `g++ -std=c++23 FILENAME.cpp -lstdc++exp -o FILENAME.exe && ./FILENAME` |
| **Python** | `python3 FILENAME.py` |
2) Lazy version 

| Language | Compilation & Execution Command |
| :--- | :--- |
| **C** | `gcc -std=c23 FILENAME.c && ./a` |
| **C++** | `g++ -std=c++23 FILENAME.cpp -lstdc++exp && ./a` |
| **Python** | `python3 FILENAME.py` |

# Run via extension -> Use `ctrl + F5`.
# Debugging -> Use `F5`.
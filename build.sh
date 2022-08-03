gcc -Wall -Werror -fPIC ./lib.cpp -shared -o libfoo.so -g
g++ main.cpp -o test -ldl -g

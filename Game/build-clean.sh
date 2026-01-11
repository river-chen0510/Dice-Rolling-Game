if [ "$1" = "build" ]; then

    echo "Building project..."

    gcc -Wall -Wextra -g \
        main.c \
        game.c \
        -o main.out

    echo "Build completed"

elif [ "$1" = "clean" ]; then

    echo "Cleaning project..."

    rm main.out
    rm -r main.out.dSYM

    echo "Clean completed"

fi
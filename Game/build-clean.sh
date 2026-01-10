if [ "$1" = "build"]; then

    echo "Building project..."

    gcc -Wall -Wextra -g \
        main.c \
        game.c\
        game.h \
        -o main.out

    echo "Project built!"

elif [ "$1" = "clean"]; then

    echo "Cleaning project..."

    rm main.out
    rm -r main.out.DYSM

    echo "Project cleaned!"

fi
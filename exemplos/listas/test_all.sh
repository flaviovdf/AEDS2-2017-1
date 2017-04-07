for folder in */; do
  cd $folder
  make
  valgrind --tool=callgrind --tool=memcheck --leak-check=full \
    --show-reachable=yes --num-callers=20 --track-fds=yes --track-origins=yes \
    ./main > /dev/null
  make clean
  cd -
done

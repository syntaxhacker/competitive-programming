# noob testing///
for((i = 0 ; i<=20 ; ++i)); do
    echo $i
    # ./testgen $i > in
    # ./a < in > out1
    # ./brute < in > out2
    # diff -w out1 out2 || break
done 
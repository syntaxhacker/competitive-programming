# noob testing///
for((i = 0 ; i<=400 ; ++i)); do
    echo $i
    ./temptest.oup $i > in
    ./1.oup < in > out1
    ./2.oup < in > out2
    diff -w out1 out2 || break
done 
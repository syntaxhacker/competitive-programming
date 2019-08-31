# noob testing///
for((i = 0 ; i<=5 ; ++i)); do
    echo $i
    ./temptest.oup $i > in
    ./teste.oup < in > out1
    ./2.oup < in > out2
    diff -w out1 out2 || break
done 
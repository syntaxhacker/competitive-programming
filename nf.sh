for((i = 1 ; i<= $1 ; ++i)); do
    touch $i.cpp 
    cat mytemp.cpp > $i.cpp
    echo $i
done
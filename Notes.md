1. Dutch National flag algotithm
        for example we have given a array [0 1 2 2 1 2]
        to sort it we maintain 3 pointers namely low at 0 , mid at 0,and high at n-1
        than we try to move all zero to starting ,one at mid, 2 at end by assuming the array be something like
        [all-zeroes all-ones unsorted-Array all-twos ]
        0           low      mid            high   n
 
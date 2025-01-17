 A superpermutation of N different characters is a string consisting of an arrangement of multiple copies of those N different characters in which every permutation of those characters can be found as a substring.

 For example, representing the characters as A..Z, using N=2 we choose to use the first two characters 'AB'.
 The permutations of 'AB' are the two, (i.e. two-factorial), strings: 'AB' and 'BA'.

 A too obvious method of generating a superpermutation is to just join all the permutations together forming 'ABBA'.

 A little thought will produce the shorter (in fact the shortest) superpermutation of 'ABA' - it contains 'AB' at the beginning and contains 'BA' from the middle to the end.

 The "too obvious" method of creation generates a string of length N!\*N. Using this as a yardstick, the task is to investigate other methods of generating superpermutations of N from 1-to-7 characters, that never generate larger superpermutations.

 Show descriptions and comparisons of algorithms used here, and select the "Best" algorithm as being the one generating shorter superpermutations.

 The problem of generating the shortest superpermutation for each N might be NP complete, although the minimal strings for small values of N have been found by brute -force searches.

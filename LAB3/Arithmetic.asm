# Arithmetic.asm
# Does some math

.text
main:
li $t0, 15  #A
li $t1, 10  #B
li $t2, 7   #C
li $t3, 2   #D
li $t4, 18  #E
li $t5, -3  #F
li $t6, 0   #temp

add $s0, $t0, $t1 # Z = A + B
sub $t6, $t2, $t3 # C - D
add $s0, $s0, $t6 # Z = (A+B) + (C-D)
add $t6, $t4, $t5 # E + F
add $s0, $s0, $t6 # Z = (A+B) + (C-D) + (E+F)
sub $t6, $t0, $t2 # A - C
sub $s0, $s0, $t6 # Z = (A+B) + (C-D) + (E+F) - (A-C)

sw $s0, Z

li $v0, 10
syscall

.data
Z:      .word
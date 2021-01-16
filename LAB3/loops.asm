#  loops.asm | Lab 03
#  Eric Diaz | Dylan Monterrosa | Jacob Villa
# CSE 4010 Winter Intersession
# 
#
# The following program adds some numbers. I've run the problem 3 into my compiler and learned that the output is 405 by the end of the loop.
# This sum, $s0, adds up to 405 by the time I exit out and exit the program.;
# s0 = sum
# s1 = i
# t2 = i * 2



.text
main:
add $s0 $zero $zero	# Set sum = 0
add $s1 $zero $zero	# set i = 0

iLoop:

	add $s2, $s1, $zero	# j  = i


jLoop:
	li $t4, 2		# MIPS was complaining because I had an integer in mult
	mult $s1, $t4		# 2 * i... for the while condition
	mflo $t2		# 10 * 2 only goes to 20 so we only need the first 32 bits. Not the higher 32 bits in mfhi


	add $s0, $s0, $s2	# sum = sum + j
	add $s2, $s2, 1		# j++

	sub $t3, $s2, $t2	# if j < 2 * i;
	blt $t3, $zero, jLoop	# goto jLoop



	add $t0, $s1, -9       # if i < 10;
	beq $t0, $zero, exit	# exit


	add $s1, $s1, 1		# i++
	j iLoop			# goto iLoop

exit:
li $v0, 10
syscall

.globl main
.text

main:
	lw $s0, A		# Loading A, B, C and Z into registers (integer assignments)
	lw $s1, B
	lw $s2, C
	lw $s3, Z
	
	bgt $s0, $s1, L1	# if ( A > B ) go to L1. Since this translation roots from an OR statement, we can jump if either clause is true.
	blt $s2, 5, L1		# if ( C < 5 ) go to L1. The program will simply proceed to this line if the previous jump didn't execute.
	
	add $t0, $s2, 1		# ( C + 1 ), saved to be utilized later 
	bgt $s0, $s1, AND	# if ( A > B ) go to AND, a second check for statement to jump to L2.
	j L3			# if we dont jump to AND, 'and' statement is incorrect, and thus we jump to L3

AND:
	beq $t0, 7, L2		# Second check for and Statement
	j L3 			# and if we dont jump, again we jump to L3
	
L1: 	add $s3, $s3, -1	# Load '-1' into register $s3
	sw $s3, Z		# Store register $s3 in Z
	j Exit			# get out 
	
L2: 	add $s3, $s3, -2	# Load '-2' into register $s3
	sw $s3, Z		# Store register $s3 in Z
	j Exit			# get out
	
L3: 	add $s3, $s3, 0		# Load '0' into register $s3
	sw $s3, Z		# Store register $s3 in Z
	
Exit:
	li $v0 10
	syscall
	
.data				# Changeable Input Values to test program.

A: .word 10
B: .word 15
C: .word 6
Z: .word 0

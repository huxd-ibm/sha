	.file	"test.s"
	.machinemode	"zarch"
	.machine	"zEC12"
.data
	.align	4
	.type	SHA256_H0, @object
	.size	SHA256_H0, 40
SHA256_H0:
	.long	0x6A09E667
	.long	0xBB67AE85
	.long	0x3C6EF372
	.long	0xA54FF53A
	.long	0x510E527F
	.long	0x9B05688C
	.long	0x1F83D9AB
	.long	0x5BE0CD19
	.long	0x00000000
	.long	0x00000018
	.align	4
	.type	msg, @object
	.size	msg, 3
msg:
	.ascii	"abc"
.text
	.align	8
.globl	main
	.type	main, @function
main:
	lghi	%r0, 2
	larl	%r1, SHA256_H0
	larl	%r2, msg
	lghi	%r3, 3
	klmd	%r0, %r2
	lghi	%r2,0
	brasl	%r14,exit@PLT
	.size	main, .-main

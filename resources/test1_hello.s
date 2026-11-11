		B	main

hello		DEFB	"Hello World\n",0

		ALIGN

main		ADRL	R0,hello
		SWI	3

		SWI	2

	.text
quoted:
	mov	"x(y)", %eax
	mov	"x(y)"(%eax), %eax
	mov	%es:"x(y)", %eax
	mov	%es:"x(y)"(%eax), %eax

	call	*"x(y)"
	call	*%es:"x(y)"
	call	%es:*"x(y)"

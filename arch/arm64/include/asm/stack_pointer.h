/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ASM_STACK_POINTER_H
#define __ASM_STACK_POINTER_H

/*
 * how to get the current stack pointer from C
 */
#define current_stack_pointer ({ \
	unsigned long __sp; \
	asm volatile("mov %0, sp" : "=r" (__sp)); \
	__sp; \
})

#endif /* __ASM_STACK_POINTER_H */

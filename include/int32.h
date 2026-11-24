#ifndef INT32_H
#define INT32_H

/* The 32-bit integers the game works in: GPU words and colour codes, packed screen coordinates,
 * GTE depths and flags, file words and offsets. On the PlayStation these are long and unsigned long,
 * the types the kit's headers give them (u_long is unsigned long), so the build is unchanged. A host
 * where long is 64 bits wide (LP64) gets int and unsigned int, which keep the 32 bits the game means. */
#if defined(__LP64__) || defined(_LP64)
typedef int s32;
typedef unsigned int u32;
#else
typedef long s32;
typedef unsigned long u32;
#endif

#endif

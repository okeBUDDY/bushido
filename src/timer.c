/* Root counter 1, counting horizontal blanks, free running. 0xf2000001 is kernel.h's RCntCNT1 and
 * 0x2000 its RCntMdNOINTR, written as numbers because kernel.h is not included (SetRCnt below). */

#include "int32.h"
#include "timer.h"

s32 SetRCnt(); /* not kernel.h's prototype: the original passes the target -1 as an int */
s32 StartRCnt(u32 spec);
s32 GetRCnt(u32 spec);

void InitHBlankRootCounter(void)
{
    SetRCnt(0xf2000001, -1, 0x2000);
    StartRCnt(0xf2000001);
}

/* Nothing calls it. */
static int GetHBlankRootCounter(void)
{
    return GetRCnt(0xf2000001);
}

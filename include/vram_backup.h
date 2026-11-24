#ifndef VRAM_BACKUP_H
#define VRAM_BACKUP_H

#include <sys/types.h>
#include "int32.h"

u32 *BackupVramStrip(u32 *buffer);
int RestoreVramStrip(void);

#endif

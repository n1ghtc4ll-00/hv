#ifndef __LKM_CR_H__
#define __LKM_CR_H__

#include <linux/types.h>

typedef union
{
   u64 value;
   struct
   {
      u64 PE : 1;
      u64 MP : 1;
      u64 EM : 1;
      u64 TS : 1;
      u64 ET : 1;
      u64 NE : 1;
      u64 reserved_0 : 10;
      u64 WP : 1;
      u64 reserved_1 : 1;
      u64 AM : 1;
      u64 reserved_2 : 11;
      u64 NW : 1;
      u64 CD : 1;
      u64 PG : 1;
   } flags;
} cr0_t;

typedef union
{
   u64 value;
   struct
   {

   } flags;
} cr3_t;

typedef union
{
   u64 value;
   struct
   {
      u64 VME        : 1;
      u64 PVI        : 1;
      u64 TSD        : 1;
      u64 DE         : 1;
      u64 PSE        : 1;
      u64 PAE        : 1;
      u64 MCE        : 1;
      u64 PGE        : 1;
      u64 PCE        : 1;
      u64 OSFXR      : 1;
      u64 OSXMMEXCPT : 1;
      u64 UMIP       : 1;
      u64 LA57       : 1;
      u64 VMXE       : 1;
      u64 SMXE       : 1;
      u64 reserved_0 : 1;
      u64 FSGSBASE   : 1;
      u64 PCIDE      : 1;
      u64 OSXSAVE    : 1;
      u64 KL         : 1;
      u64 SMEP       : 1;
      u64 SMAP       : 1;
      u64 PKE        : 1;
      u64 CET        : 1;
      u64 PKS        : 1;
      u64 UINTR      : 1;
      u64 reserved_1 : 2;
      u64 LAM_SUP    : 1;
   } flags;
} cr4_t;

#endif // __LKM_CR_H__

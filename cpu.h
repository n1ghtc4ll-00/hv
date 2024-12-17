#ifndef __LKM_CPU_H__
#define __LKM_CPU_H__

#include "common.h"
#include "vmm.h"

int cpu_hotplug_register (void);
void cpu_hotplug_unregister (void);

int max_logical_cpu (void);
int cur_logical_cpu (void);

vcpu_ctx_t* vcpu_alloc (void);
void vcpu_free (vcpu_ctx_t *vcpu_ctx);

void vcpu_init (void *info);
void vcpu_restore (void *info);

#endif // __LKM_CPU_H__
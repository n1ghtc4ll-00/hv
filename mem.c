// mem.c

#include "mem.h"
#include "common.h"

#include <linux/gfp.h>
#include <asm/io.h>

unsigned long mem_alloc_pages (unsigned int order)
{
   unsigned long page_addr = __get_free_pages (GFP_KERNEL, order);
   if (!page_addr)
   {
      LOG_DBG ("failed to allocate pages - order: %d\n", order);
      return -ENOMEM;
   }
   if (page_addr & (PAGE_SIZE - 1))
   {
      LOG_DBG ("allocated pages were not page aligned.\n");
      mem_free_pages (page_addr, order);
      return -ENOMEM;
   }
   return page_addr;
}

void mem_free_pages (unsigned long page_addr, unsigned int order)
{
   free_pages (page_addr, order);
}

u64 mem_virt_to_phys (void *virt_addr)
{
   return (u64)virt_to_phys (virt_addr);
}

// eof
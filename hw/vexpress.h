#ifndef QEMU_HW_VEXPRESS_H
#define QEMU_HW_VEXPRESS_H

/* hot-initialize secondary cpu */
ARMCPU *vexpress_a15_cpu_init_sec(const char *cpu_model, int cpu_idx);
/* disconnect irqs and free the CPU object completely */
void vexpress_a15_cpu_free_sec(ARMCPU *cpu);

#endif /* QEMU_HW_VEXPRESS_H */

# Automatically generated by configure - do not modify
CONFIG_QEMU_INTERP_PREFIX="/usr/gnemul/qemu-ppc64"
TARGET_SHORT_ALIGNMENT=2
TARGET_INT_ALIGNMENT=4
TARGET_LONG_ALIGNMENT=8
TARGET_LLONG_ALIGNMENT=8
TARGET_ARCH=ppc64
TARGET_PPC64=y
TARGET_ARCH2=ppc64
TARGET_BASE_ARCH=ppc
TARGET_ABI_DIR=ppc
CONFIG_NO_XEN=y
TARGET_WORDS_BIGENDIAN=y
TARGET_PHYS_ADDR_BITS=64
CONFIG_SOFTMMU=y
LIBS+=-lutil -lasound  
HWDIR=../libhw64
TARGET_XML_FILES= /home/mnavaki/faros-faros_panda/panda/qemu/gdb-xml/power64-core.xml /home/mnavaki/faros-faros_panda/panda/qemu/gdb-xml/power-fpu.xml /home/mnavaki/faros-faros_panda/panda/qemu/gdb-xml/power-altivec.xml /home/mnavaki/faros-faros_panda/panda/qemu/gdb-xml/power-spe.xml
CONFIG_I386_DIS=y
CONFIG_PPC_DIS=y
LDFLAGS+=
QEMU_CFLAGS+=-DHAS_AUDIO -DHAS_AUDIO_CHOICE 
QEMU_INCLUDES+=-I$(SRC_PATH)/linux-headers -I$(SRC_PATH)/panda -I$(SRC_PATH)/tcg -I$(SRC_PATH)/tcg/i386 

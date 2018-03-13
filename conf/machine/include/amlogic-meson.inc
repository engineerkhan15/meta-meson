# Amlogic Meson SoCs configurations

MACHINE_EXTRA_RRECOMMENDS = "kernel-modules kernel-devicetree"

SERIAL_CONSOLE = "115200 ttyAML0"

KERNEL_IMAGETYPE = "uImage"
UBOOT_LOADADDRESS = "0x1080000"
UBOOT_ENTRYSYMBOL = "0x1080000"

IMAGE_BOOT_FILES ?= "uImage"

IMAGE_ROOTFS_SIZE = "1048576"
IMAGE_FSTYPES = "ext4 tar.bz2"
WKS_FILE = "sdimage-bootpart.wks"
do_image_wic[depends] += "mtools-native:do_populate_sysroot dosfstools-native:do_populate_sysroot"

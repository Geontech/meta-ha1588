# HA1588 IP Core Driver
# USAGE:
#   Add ha1588.scc to KERNEL_FEATURES
#   Add a device tree node at the core's address space
#   with the following properties:
#
#       compatible = "ha1588,rtc-1.0";
#       ha1588,period = <0x19 0x00000000>;

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"
SRC_URI_append = " file://ha1588;type=kmeta;name=ha1588;destsuffix=ha1588"


# Release name
PRODUCT_RELEASE_NAME := gtexswifi

$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

$(call inherit-product, vendor/deso/common.mk)

$(call inherit-product, device/samsung/gtexswifi/device.mk)

# Call the proprietary setup
$(call inherit-product, vendor/samsung/gtexswifi/gtexswifi-vendor.mk)

# Use specific resolution for bootanimation
TARGET_BOOTANIMATION_SIZE := 720x480

## Device identifier. This must come after all inclusions
PRODUCT_NAME := deso_gtexswifi
PRODUCT_DEVICE := gtexswifi
PRODUCT_BRAND := samsung
PRODUCT_MODEL := SM-T280
PRODUCT_MANUFACTURER := samsung

TARGET_SCREEN_WIDTH := 800
TARGET_SCREEN_HEIGHT := 1280

PRODUCT_BRAND := samsung
TARGET_VENDOR := samsung
TARGET_VENDOR_PRODUCT_NAME := gtexswifi

PRODUCT_BUILD_PROP_OVERRIDES += \
	DEVICE_MAINTAINERS="Fabio-San"

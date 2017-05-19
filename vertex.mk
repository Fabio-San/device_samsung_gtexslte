# Release name
PRODUCT_RELEASE_NAME := gtexswifi

$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

$(call inherit-product, vendor/vertex/config/common_full_phone.mk)

$(call inherit-product, device/samsung/gtexswifi/device_gtexsifi.mk)

# Use specific resolution for bootanimation
TARGET_BOOTANIMATION_SIZE := 720x480

## Device identifier. This must come after all inclusions
PRODUCT_DEVICE := gtexswifi
PRODUCT_NAME := vertex_gtexswifi
PRODUCT_BRAND := samsung
PRODUCT_MODEL := SM-T280
PRODUCT_MANUFACTURER := samsung

TARGET_SCREEN_WIDTH := 800
TARGET_SCREEN_HEIGHT := 1280

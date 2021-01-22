// FIXME: your file license if you have one

#include "Vehicle.h"

namespace android::hardware::automotive::vehicle::implementation {

// Methods from ::android::hardware::automotive::vehicle::V2_0::IVehicle follow.
Return<void> Vehicle::getAllPropConfigs(getAllPropConfigs_cb _hidl_cb) {
    // TODO implement
    return Void();
}

Return<void> Vehicle::getPropConfigs(const hidl_vec<int32_t>& props, getPropConfigs_cb _hidl_cb) {
    // TODO implement
    return Void();
}

Return<void> Vehicle::get(const ::android::hardware::automotive::vehicle::V2_0::VehiclePropValue& requestedPropValue, get_cb _hidl_cb) {
    // TODO implement
    return Void();
}

Return<::android::hardware::automotive::vehicle::V2_0::StatusCode> Vehicle::set(const ::android::hardware::automotive::vehicle::V2_0::VehiclePropValue& propValue) {
    // TODO implement
    return ::android::hardware::automotive::vehicle::V2_0::StatusCode {};
}

Return<::android::hardware::automotive::vehicle::V2_0::StatusCode> Vehicle::subscribe(const sp<::android::hardware::automotive::vehicle::V2_0::IVehicleCallback>& callback, const hidl_vec<::android::hardware::automotive::vehicle::V2_0::SubscribeOptions>& options) {
    // TODO implement
    return ::android::hardware::automotive::vehicle::V2_0::StatusCode {};
}

Return<::android::hardware::automotive::vehicle::V2_0::StatusCode> Vehicle::unsubscribe(const sp<::android::hardware::automotive::vehicle::V2_0::IVehicleCallback>& callback, int32_t propId) {
    // TODO implement
    return ::android::hardware::automotive::vehicle::V2_0::StatusCode {};
}

Return<void> Vehicle::debugDump(debugDump_cb _hidl_cb) {
    // TODO implement
    return Void();
}


// Methods from ::android::hidl::base::V1_0::IBase follow.

//IVehicle* HIDL_FETCH_IVehicle(const char* /* name */) {
    //return new Vehicle();
//}
//
}  // namespace android::hardware::automotive::vehicle::implementation

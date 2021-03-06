//  Copyright © 2018 650 Industries. All rights reserved.

#import <ABI35_0_0UMCore/ABI35_0_0UMExportedModule.h>
#import <ABI35_0_0UMCore/ABI35_0_0UMModuleRegistryConsumer.h>
#import <Foundation/Foundation.h>
#import <ABI35_0_0UMCore/ABI35_0_0UMEventEmitter.h>
#import <ABI35_0_0UMCore/ABI35_0_0UMEventEmitterService.h>

NS_ASSUME_NONNULL_BEGIN

// Keep this enum in sync with JavaScript
typedef NS_ENUM(NSInteger, ABI35_0_0EXBatteryState) {
  ABI35_0_0EXBatteryStateUnknown = 0,
  ABI35_0_0EXBatteryStateUnplugged,
  ABI35_0_0EXBatteryStateCharging,
  ABI35_0_0EXBatteryStateFull
};


@interface ABI35_0_0EXBattery : ABI35_0_0UMExportedModule <ABI35_0_0UMModuleRegistryConsumer, ABI35_0_0UMEventEmitter>

@end

NS_ASSUME_NONNULL_END

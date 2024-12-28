//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol ASUIServer <NSObject>
- (void)renameAccessory:(NSString *)arg1 currentName:(NSString *)arg2 updateSSID:(NSNumber *)arg3 overrideBundleID:(NSString *)arg4;
- (void)showMigrationPickerWithOverrideBundleID:(NSString *)arg1;
- (void)showPickerWithOverrideBundleID:(NSString *)arg1 shouldRetrieveDisplayItems:(NSNumber *)arg2 needsBluetooth:(NSNumber *)arg3 needsWiFi:(NSNumber *)arg4;
- (void)updateMigrationDisplayCount:(NSNumber *)arg1;
- (void)failAccessory:(NSString *)arg1;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber, NSString, NSUserDefaults;

@interface _TtC20ScreenTimeSettingsUI23STUsageDetailsSelection : NSObject
{
    MISSING_TYPE *logger;	// 0 = 0x0
    MISSING_TYPE *userDefaults;	// 0 = 0x0
    MISSING_TYPE *persistenceController;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_localUserDSID;	// 0 = 0x0
}

+ (id)shared;	// IMP=0x004000000010df00
- (void).cxx_destruct;	// IMP=0x00000000001103a0
- (id)init;	// IMP=0x0000000000110350
- (void)setUsageReportTypeTo:(id)arg1 forChildUserDSID:(id)arg2;	// IMP=0x0000000000110290
- (id)usageReportTypeForChildUserDSID:(id)arg1;	// IMP=0x000000000010ff30
- (id)observeDeviceIdentifierChangesForChildUserDSID:(id)arg1 onChange:(CDUnknownBlockType)arg2;	// IMP=0x000000000010fbe0
- (void)setDeviceIdentifierTo:(id)arg1 forChildUserDSID:(id)arg2;	// IMP=0x000000000010f380
- (id)deviceIdentifierForChildUserDSID:(id)arg1;	// IMP=0x000000000010efe0
@property(nonatomic, retain) NSNumber *usageReportTypeForLocalUser;
@property(nonatomic, copy) NSString *deviceIdentifierForLocalUser;
@property(nonatomic, readonly) NSUserDefaults *userDefaults; // @synthesize userDefaults;

@end

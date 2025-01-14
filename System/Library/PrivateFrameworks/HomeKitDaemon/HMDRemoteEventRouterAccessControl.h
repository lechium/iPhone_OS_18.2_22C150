//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterAccessControl : NSObject
{
    unsigned long long _allowedUserTypes;	// 8 = 0x8
    unsigned long long _allowedDeviceTypes;	// 16 = 0x10
}

+ (unsigned long long)remoteDeviceAccessControlFromNumber:(id)arg1;	// IMP=0x0060000000a76fcf
+ (unsigned long long)remoteUserAccessControlFromNumber:(id)arg1;	// IMP=0x0060000000a76f7f
+ (id)allowSharedAdminsAndAllDevicesAccessControl;	// IMP=0x0060000000a76f4f
+ (id)allowAllUsersAndDevicesAccessControl;	// IMP=0x0060000000a76f1f
@property(readonly) unsigned long long allowedDeviceTypes; // @synthesize allowedDeviceTypes=_allowedDeviceTypes;
@property(readonly) unsigned long long allowedUserTypes; // @synthesize allowedUserTypes=_allowedUserTypes;
- (id)initWithAllowedUserTypes:(unsigned long long)arg1 deviceCategories:(unsigned long long)arg2;	// IMP=0x0000000000a76ec3

@end


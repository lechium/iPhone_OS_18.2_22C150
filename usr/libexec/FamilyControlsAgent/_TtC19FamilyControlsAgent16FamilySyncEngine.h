//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC19FamilyControlsAgent16FamilySyncEngine : _TtCs12_SwiftObject
{
    MISSING_TYPE *authorizationManager;	// 16 = 0x10
    MISSING_TYPE *collectActivity;	// 152 = 0x98
    MISSING_TYPE *dailyWebSync;	// 160 = 0xa0
    MISSING_TYPE *dataSource;	// 168 = 0xa8
    MISSING_TYPE *defaults;	// 176 = 0xb0
    MISSING_TYPE *familyCircle;	// 184 = 0xb8
    MISSING_TYPE *locations;	// 0 = 0x0
    MISSING_TYPE *privateEngine;	// 0 = 0x0
    MISSING_TYPE *retrySharing;	// 0 = 0x0
    MISSING_TYPE *sharedEngine;	// 0 = 0x0
    MISSING_TYPE *sharingCoordinator;	// 0 = 0x0
    MISSING_TYPE *usageReporting;	// 0 = 0x0
}

- (void)retrySharingWithNotification:(id)arg1;	// IMP=0x0040000000048a70
- (void)privateAuthorizationKeyNeedsUpdateWithNotification:(id)arg1;	// IMP=0x00100000000462f0
- (void)recordZoneWasDeletedWithNotification:(id)arg1;	// IMP=0x0010000000046110
- (void)recordZoneWasSavedWithNotification:(id)arg1;	// IMP=0x0010000000045f90

@end


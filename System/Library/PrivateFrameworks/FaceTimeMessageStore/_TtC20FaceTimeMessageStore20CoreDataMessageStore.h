//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC20FaceTimeMessageStore20CoreDataMessageStore : _TtCs12_SwiftObject
{
    MISSING_TYPE *config;	// 16 = 0x10
    MISSING_TYPE *protectedAppsProvider;	// 272 = 0x110
    MISSING_TYPE *storeType;	// 312 = 0x138
    MISSING_TYPE *userDefaults;	// 320 = 0x140
    MISSING_TYPE *migrationStatus;	// 328 = 0x148
    MISSING_TYPE *notificationCenter;	// 336 = 0x150
    MISSING_TYPE *contextProvider;	// 344 = 0x158
    MISSING_TYPE *queue;	// 0 = 0x0
    MISSING_TYPE *voicemailController;	// 0 = 0x0
    MISSING_TYPE *wrappedAccountInfo;	// 0 = 0x0
    MISSING_TYPE *accountInfoLock;	// 0 = 0x0
    MISSING_TYPE *badgeManager;	// 0 = 0x0
    MISSING_TYPE *deduplicationInProgress;	// 0 = 0x0
    MISSING_TYPE *deviceSupport;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 0 = 0x0
    MISSING_TYPE *analyticsManager;	// 1163157343 = 0x45545f5f
}

- (void)storeDidSave:(id)arg1;	// IMP=0x000000000003ba8b
- (void)storeMergedChanges:(id)arg1;	// IMP=0x000000000003b20f
- (void)didResetSync:(id)arg1;	// IMP=0x0000000000035338
- (void)willResetSync:(id)arg1;	// IMP=0x000000000003486e

@end

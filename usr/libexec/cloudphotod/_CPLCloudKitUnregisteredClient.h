//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _CPLCloudKitUnregisteredClient : NSObject
{
    NSString *_cloudKitClientIdentifier;	// 8 = 0x8
    NSString *_defaultSourceBundleIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000005d9c2
@property(readonly) NSString *defaultSourceBundleIdentifier; // @synthesize defaultSourceBundleIdentifier=_defaultSourceBundleIdentifier;
@property(readonly) NSString *cloudKitClientIdentifier; // @synthesize cloudKitClientIdentifier=_cloudKitClientIdentifier;
- (_Bool)isInterestedInZoneID:(id)arg1 forCoordinator:(id)arg2;	// IMP=0x001000000005d8b0
- (id)interestingZoneIDsForCoordinator:(id)arg1;	// IMP=0x001000000005d7cc
- (void)coordinatorDidReceiveAPushNotification:(id)arg1;	// IMP=0x001000000005d6e8
- (void)coordinator:(id)arg1 provideCKAssetWithRecordID:(id)arg2 fieldName:(id)arg3 recordType:(id)arg4 signature:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000005d5e2
- (id)initWithCloudKitClientIdentifier:(id)arg1 defaultSourceBundleIdentifier:(id)arg2;	// IMP=0x001000000005d511

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


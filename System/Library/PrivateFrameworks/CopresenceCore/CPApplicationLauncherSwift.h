//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CPApplicationLauncherSwift : NSObject
{
    MISSING_TYPE *behaviors;	// 8 = 0x8
    MISSING_TYPE *featureFlags;	// 16 = 0x10
    MISSING_TYPE *pegasusLaunchBehavior;	// 24 = 0x18
    MISSING_TYPE *placementSceneIdentifier;	// 32 = 0x20
    MISSING_TYPE *placementSceneIdentifierContinuation;	// 2746064 = 0x29e6d0
}

- (void).cxx_destruct;	// IMP=0x0000000000080730
- (void)authorizePiPForActivitySession:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000800b0
- (void)revokeBackgroundAuthorizationForSession:(id)arg1;	// IMP=0x000000000007fd30
- (void)revokeBackgroundAuthorizationForBundleID:(id)arg1;	// IMP=0x000000000007fba0
- (void)launchAppForActivitySession:(id)arg1 options:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007ea40
- (id)init;	// IMP=0x000000000007e760
@property(nonatomic, copy) NSString *placementSceneIdentifier;

@end

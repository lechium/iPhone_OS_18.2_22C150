//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FMFSession, NSString;

__attribute__((visibility("hidden")))
@interface FMFSessionProxy : NSObject
{
    FMFSession *_session;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001dcd7
@property(nonatomic) __weak FMFSession *session; // @synthesize session=_session;
- (oneway void)didReceiveServerError:(id)arg1;	// IMP=0x000000000001dc47
- (oneway void)didUpdateLocations:(id)arg1;	// IMP=0x000000000001dbde
- (oneway void)didUpdateFollowing:(id)arg1;	// IMP=0x000000000001db75
- (oneway void)didUpdateFollowers:(id)arg1;	// IMP=0x000000000001db0c
- (oneway void)abPreferencesDidChange;	// IMP=0x000000000001dacf
- (oneway void)abDidChange;	// IMP=0x000000000001da92
- (oneway void)didUpdatePreferences:(id)arg1;	// IMP=0x000000000001da29
- (oneway void)didUpdateFences:(id)arg1;	// IMP=0x000000000001d9c0
- (oneway void)didUpdateFavorites:(id)arg1;	// IMP=0x000000000001d957
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;	// IMP=0x000000000001d8cc
- (oneway void)didUpdateActiveDeviceList:(id)arg1;	// IMP=0x000000000001d863
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;	// IMP=0x000000000001d7fa
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;	// IMP=0x000000000001d791
- (oneway void)didUpdateHideFromFollowersStatus:(_Bool)arg1;	// IMP=0x000000000001d747
- (void)didReceiveFriendshipRequest:(id)arg1;	// IMP=0x000000000001d6de
- (oneway void)didStopFollowingHandle:(id)arg1;	// IMP=0x000000000001d675
- (oneway void)didStartFollowingHandle:(id)arg1;	// IMP=0x000000000001d60c
- (oneway void)didRemoveFollowerHandle:(id)arg1;	// IMP=0x000000000001d5a3
- (oneway void)didAddFollowerHandle:(id)arg1;	// IMP=0x000000000001d53a
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;	// IMP=0x000000000001d4af
- (oneway void)setLocations:(id)arg1;	// IMP=0x000000000001d446
- (oneway void)networkReachabilityUpdated:(_Bool)arg1;	// IMP=0x000000000001d3fc
- (oneway void)modelDidLoad;	// IMP=0x000000000001d3bf
- (id)initWithFMFSession:(id)arg1;	// IMP=0x000000000001d357

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

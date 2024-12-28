//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKGameService
{
}

+ (id)sharedGameActivityStore;	// IMP=0x0020000000047d95
+ (unsigned long long)requiredEntitlements;	// IMP=0x0010000000047d8a
+ (Class)interfaceClass;	// IMP=0x0010000000047d79
- (oneway void)fetchMostRecentGameActivityForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x002000000004ca25
- (oneway void)storeGameForBundleIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004bfdd
- (oneway void)_getPerGameFriendsPlayerIDForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004acd1
- (oneway void)resetTCCAuthorization:(CDUnknownBlockType)arg1;	// IMP=0x001000000004a9ef
- (oneway void)checkTCCAuthorization:(CDUnknownBlockType)arg1;	// IMP=0x001000000004a636
- (oneway void)getPerGameFriendsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000049fb4
- (oneway void)setPerGameSettings:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000049391
- (oneway void)getPerGameSettingsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000048966
- (oneway void)getArcadeHighlightForAdamID:(id)arg1 count:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000047dea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

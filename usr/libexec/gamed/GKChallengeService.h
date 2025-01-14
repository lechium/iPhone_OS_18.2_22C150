//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

@interface GKChallengeService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0020000000084dcb
+ (Class)interfaceClass;	// IMP=0x0010000000084dba
- (oneway void)abortChallenges:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000089c9d
- (oneway void)issueChallenge:(id)arg1 toPlayers:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000898b1
- (void)getChallengeDetailsForChallengeIDs:(id)arg1 receiverID:(id)arg2 clientBundleID:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000879cb
- (oneway void)getChallengeDetailsForChallengeIDs:(id)arg1 receiverID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000879b3
- (oneway void)getChallengeDetailsForChallengeIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000087999
- (oneway void)getChallengesForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000868e8
- (void)loadChallengesForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000086169
- (void)fetchChallengesForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000085dd3
- (void)_updateGamesForChallenges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x0010000000085a4d
- (void)_determineCompatibleGamesForChallenges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00100000000854bb
- (MISSING_TYPE *)_filterChallenges:compatibleWithBundleID: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000085345
- (void)_updatePlayersForChallenges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x0010000000084dd6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


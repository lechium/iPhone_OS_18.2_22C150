//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@interface GEOExperimentServer : GEOServer
{
}

+ (unsigned long long)launchMode;	// IMP=0x0020000000012747
+ (id)identifier;	// IMP=0x001000000001273a
- (void)fetchAssignUUIDSyncWithMessage:(id)arg1;	// IMP=0x0020000000019d46
- (void)fetchAssignUUIDWithMessage:(id)arg1;	// IMP=0x0010000000019b1f
- (void)fetchAllExperimentsWithMessage:(id)arg1;	// IMP=0x0010000000019956
- (void)setBucketIdWithMessage:(id)arg1;	// IMP=0x00100000000198be
- (void)setActiveBranchWithMessage:(id)arg1;	// IMP=0x0010000000019826
- (void)setQuerySubstringWithMessage:(id)arg1;	// IMP=0x00100000000196b6
- (void)refreshDatasetWithMessage:(id)arg1;	// IMP=0x00100000000195f0
- (void)updateWithMessage:(id)arg1;	// IMP=0x00100000000195ac
- (id)initWithDaemon:(id)arg1;	// IMP=0x0010000000019542
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3 signpostId:(unsigned long long)arg4;	// IMP=0x0010000000012752

@end


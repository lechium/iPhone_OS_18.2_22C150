//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PLExcessiveDatabaseSizeMaintenanceTask
{
}

- (_Bool)isOrphanedSceneClassificationsCountExcessiveWithPathManager:(id)arg1;	// IMP=0x0020000000014d73
- (id)isHistorySizeExcessiveWithPathManager:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001472e
- (_Bool)isHistorySizeExcessiveWithPathManager:(id)arg1;	// IMP=0x00100000000145a4
- (void)_forceRebuildWithReason:(long long)arg1 pathManager:(id)arg2 transaction:(id)arg3;	// IMP=0x0010000000014382
- (_Bool)runTaskWithTransaction:(id)arg1;	// IMP=0x001000000001422f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

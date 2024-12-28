//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDDatabaseManager;

@interface PDCardCloudManagerChangeRegistry : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000043b36a
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x001000000043b276
- (void)unregisterAllChanges;	// IMP=0x001000000043b260
- (void)unregisterChangesForPassesWithUniqueIDs:(id)arg1;	// IMP=0x001000000043b0de
- (void)eraseChangeEvents:(id)arg1;	// IMP=0x001000000043b0c8
- (id)retryDateForEvent:(id)arg1;	// IMP=0x001000000043b0b2
- (void)increaseRetryCountForRecordUniqueIdenifier:(id)arg1 recordType:(long long)arg2;	// IMP=0x001000000043b09c
- (id)fetchChangeEvents;	// IMP=0x001000000043b011
- (unsigned long long)numberOfChangeEvents;	// IMP=0x001000000043affb
- (id)createAndCoalsesceEvent:(long long)arg1 forRecordWithType:(long long)arg2 andRecordIUniqueID:(id)arg3 timestamp:(id)arg4 eventsToDelete:(id)arg5;	// IMP=0x001000000043ab3e
- (id)addChangeEventsOfType:(long long)arg1 withRecordType:(long long)arg2 andRecordUniqueIDs:(id)arg3 timestampByUniqueID:(id)arg4 coalescePreviousEvents:(_Bool)arg5;	// IMP=0x001000000043a7b1
- (id)recordUpdateOfCatalog:(id)arg1;	// IMP=0x001000000043a6fb
- (id)recordRemovalOfPassesWithUniqueIDs:(id)arg1;	// IMP=0x001000000043a6cc
- (id)recordUpdateOfPasses:(id)arg1;	// IMP=0x001000000043a63a
- (id)recordAdditionOfPasses:(id)arg1;	// IMP=0x001000000043a38b
- (id)initWithDatabaseManager:(id)arg1;	// IMP=0x001000000043a251

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

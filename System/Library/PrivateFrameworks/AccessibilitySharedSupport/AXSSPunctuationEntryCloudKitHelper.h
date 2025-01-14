//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AXSSCloudKitHelper.h"

@class AXDispatchTimer;

__attribute__((visibility("hidden")))
@interface AXSSPunctuationEntryCloudKitHelper : AXSSCloudKitHelper
{
    AXDispatchTimer *_changeCoalescer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000029296
- (void)processRecordDeletionsFromServer:(id)arg1;	// IMP=0x0000000000028fc2
- (void)processServerUpdateChanges:(id)arg1 moc:(id)arg2 recordNameToManagedObject:(id)arg3;	// IMP=0x0000000000028df5
- (void)retrieveLocalChangesForCloud:(CDUnknownBlockType)arg1;	// IMP=0x000000000002812c
- (void)clearRecordsForPurging:(id)arg1;	// IMP=0x0000000000027eaa
- (void)punctuationGroupChanged:(id)arg1;	// IMP=0x0000000000027c83
- (void)beginWatchingForChanges;	// IMP=0x0000000000027b8c
- (void)_processPunctuationEntryFromCKRecord:(id)arg1;	// IMP=0x00000000000276ba
- (id)createCKRecordFromObject:(id)arg1;	// IMP=0x0000000000027488
- (id)createCKRecordFromEntry:(id)arg1;	// IMP=0x0000000000027207
- (id)testRecordForSchemaCreation:(id)arg1;	// IMP=0x00000000000270f6
- (void)dealloc;	// IMP=0x0000000000027081
- (Class)managedObjectClass;	// IMP=0x0000000000027070
- (id)apsEnvironment;	// IMP=0x000000000002705c
- (id)recordType;	// IMP=0x000000000002704f

@end


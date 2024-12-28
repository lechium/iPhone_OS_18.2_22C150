//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AXSSCloudKitHelper.h"

@class AXDispatchTimer;

__attribute__((visibility("hidden")))
@interface AXSSPunctuationGroupCloudKitHelper : AXSSCloudKitHelper
{
    AXDispatchTimer *_changeCoalescer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001ed54
- (void)processRecordDeletionsFromServer:(id)arg1;	// IMP=0x000000000001ea80
- (void)processServerUpdateChanges:(id)arg1 moc:(id)arg2 recordNameToManagedObject:(id)arg3;	// IMP=0x000000000001e5e7
- (void)punctuationGroupsChanged:(id)arg1;	// IMP=0x000000000001e3be
- (void)beginWatchingForChanges;	// IMP=0x000000000001e2c7
- (void)retrieveLocalChangesForCloud:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d608
- (void)clearRecordsForPurging:(id)arg1;	// IMP=0x000000000001d386
- (id)createCKRecordFromObject:(id)arg1;	// IMP=0x000000000001d15d
- (id)createCKRecordFromGroup:(id)arg1;	// IMP=0x000000000001cf34
- (id)testRecordForSchemaCreation:(id)arg1;	// IMP=0x000000000001ce72
- (id)apsEnvironment;	// IMP=0x000000000001ce5e
- (void)dealloc;	// IMP=0x000000000001cde9
- (Class)managedObjectClass;	// IMP=0x000000000001cdd8
- (id)recordType;	// IMP=0x000000000001cdcb

@end

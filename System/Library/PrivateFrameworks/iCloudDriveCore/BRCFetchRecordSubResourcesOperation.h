//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_BRCOperation.h"

@class BRCPendingChangesStream, BRCServerZone, NSError, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_group, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCFetchRecordSubResourcesOperation : _BRCOperation
{
    BRCServerZone *_serverZone;	// 40 = 0x28
    BRCPendingChangesStream *_pendingChangesStream;	// 48 = 0x30
    NSMutableDictionary *_recordsByID;	// 56 = 0x38
    NSMutableDictionary *_subResourceRecordsByID;	// 64 = 0x40
    NSMutableArray *_deletedRecordIDs;	// 72 = 0x48
    NSMutableArray *_deletedShareIDs;	// 80 = 0x50
    NSMutableSet *_movedZoneNames;	// 88 = 0x58
    NSObject<OS_dispatch_group> *_operationGroup;	// 96 = 0x60
    NSObject<OS_dispatch_group> *_xattrFetchingGroup;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_xattrFetchingSource;	// 112 = 0x70
    NSObject<OS_dispatch_group> *_deserializeGroup;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_deserializeSource;	// 128 = 0x80
    unsigned int _loopDetectionCacheSize;	// 136 = 0x88
    NSMutableOrderedSet *_loopDetectionCache;	// 144 = 0x90
    NSError *_error;	// 152 = 0x98
    unsigned char _deserializeState;	// 160 = 0xa0
    _Bool _isDoneFetchingRecords;	// 161 = 0xa1
    _Bool _isDeltaSync;	// 162 = 0xa2
    _Bool _canSaveDirectly;	// 163 = 0xa3
    _Bool _canSaveDirectlyWithDeletes;	// 164 = 0xa4
    _Bool _contentRecordsFetchedInline;	// 165 = 0xa5
    unsigned long long _recordsRequested;	// 168 = 0xa8
    unsigned long long _recordsRequestedTotalMetadataSize;	// 176 = 0xb0
    unsigned long long _xattrsFetchedTotalSize;	// 184 = 0xb8
    CDUnknownBlockType _queryFinishedServerTruthCallback;	// 192 = 0xc0
    CDUnknownBlockType _queryFinishedClientTruthCallback;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000313c6e
@property(copy, nonatomic) CDUnknownBlockType queryFinishedClientTruthCallback; // @synthesize queryFinishedClientTruthCallback=_queryFinishedClientTruthCallback;
@property(copy, nonatomic) CDUnknownBlockType queryFinishedServerTruthCallback; // @synthesize queryFinishedServerTruthCallback=_queryFinishedServerTruthCallback;
@property(readonly, nonatomic) BRCPendingChangesStream *pendingChangesStream; // @synthesize pendingChangesStream=_pendingChangesStream;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (_Bool)saveRecordsWithQueryCursor:(id)arg1;	// IMP=0x00000000003130cd
- (_Bool)saveRecordsWithServerChangeToken:(id)arg1 clientChangeToken:(long long)arg2 syncStatus:(long long)arg3;	// IMP=0x00000000003127ab
- (_Bool)_hasRecordsPendingSubResources;	// IMP=0x000000000031275e
- (void)_saveRecordsToPendingChangesWithServerChangeToken:(id)arg1 clientChangeToken:(long long)arg2;	// IMP=0x0000000000312673
- (void)_cleanUpAfterSavingRecords;	// IMP=0x00000000003125b8
- (void)_fetchRecordsBlockingSaveIfNecessary;	// IMP=0x0000000000311e3a
- (void)_prepareToSaveRecords;	// IMP=0x000000000031062d
- (long long)_compareRecordsForSaveWithFirstRecord:(id)arg1 secondRecord:(id)arg2;	// IMP=0x000000000031052f
- (void)_createSubResourceGroupsFromPendingChangesStreamIfNecessary;	// IMP=0x00000000003103f2
- (void)_scheduleXattrFetch;	// IMP=0x000000000030e9b2
- (void)_dump;	// IMP=0x000000000030e700
- (_Bool)_markSubResourceRecordAsFetchedIfNecessary:(id)arg1;	// IMP=0x000000000030e4a5
- (void)_scheduleDeserialize;	// IMP=0x000000000030cde4
- (_Bool)_willFetchRecordForDeserialize:(id)arg1;	// IMP=0x000000000030cc74
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000030c906
- (void)main;	// IMP=0x000000000030c810
- (void)stop;	// IMP=0x000000000030c314
- (void)cancel;	// IMP=0x000000000030c1c1
- (void)stopWithError:(id)arg1;	// IMP=0x000000000030bf95
- (void)_startWithParentOperation:(id)arg1;	// IMP=0x000000000030becc
- (void)notifyWhenRecordsAreFetchedAndFinish:(CDUnknownBlockType)arg1;	// IMP=0x000000000030beb2
- (void)notifyWhenCaughtUp:(_Bool)arg1 whenRecordsAreFetchedAndFinish:(CDUnknownBlockType)arg2;	// IMP=0x000000000030bb8c
- (void)_notifyWhenRecordsAreFetched:(CDUnknownBlockType)arg1;	// IMP=0x000000000030b929
- (void)shareIDWasDeleted:(id)arg1;	// IMP=0x000000000030b65f
- (void)recordIDWasDeleted:(id)arg1;	// IMP=0x000000000030af71
- (void)addRecordIDToDeserialize:(id)arg1 recordType:(long long)arg2;	// IMP=0x000000000030a963
- (void)addRecordIDToDeserialize:(id)arg1;	// IMP=0x000000000030a94f
- (void)addRecord:(id)arg1;	// IMP=0x0000000000308a00
- (_Bool)shouldRetryForError:(id)arg1;	// IMP=0x000000000030898f
- (id)createActivity;	// IMP=0x0000000000308966
- (id)initAndScheduleWithServerZone:(id)arg1 parentOperation:(id)arg2 pendingChangesStream:(id)arg3 contentRecordsFetchedInline:(_Bool)arg4 sessionContext:(id)arg5;	// IMP=0x0000000000307e8c
- (id)movedZoneNames;	// IMP=0x0000000000307e77
- (id)records;	// IMP=0x0000000000307daa
@property(readonly, nonatomic) unsigned long long xattrsFetchedTotalSize; // @synthesize xattrsFetchedTotalSize=_xattrsFetchedTotalSize;
@property(readonly, nonatomic) unsigned long long recordsFetchedTotalMetadataSize; // @synthesize recordsFetchedTotalMetadataSize=_recordsRequestedTotalMetadataSize;
@property(readonly, nonatomic) unsigned long long recordsFetched; // @synthesize recordsFetched=_recordsRequested;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


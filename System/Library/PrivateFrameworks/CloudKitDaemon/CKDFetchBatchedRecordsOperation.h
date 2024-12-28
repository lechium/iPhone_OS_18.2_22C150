//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDRecordFetchAggregator, NSArray, NSDictionary, NSObject, NSSet, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CKDFetchBatchedRecordsOperation
{
    _Bool _shouldFetchAssetContents;	// 8 = 0x8
    _Bool _fetchAllChanges;	// 9 = 0x9
    _Bool _forcePCSDecryptionAttempt;	// 10 = 0xa
    NSObject<OS_dispatch_group> *_fetchRecordsGroup;	// 16 = 0x10
    NSSet *_desiredAssetKeys;	// 24 = 0x18
    NSArray *_recordZoneIDs;	// 32 = 0x20
    NSDictionary *_configurationsByRecordZoneID;	// 40 = 0x28
    unsigned long long _numRequestsSent;	// 48 = 0x30
    CKDRecordFetchAggregator *_recordFetcher;	// 56 = 0x38
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;	// 64 = 0x40
    long long _errorReportingStyle;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000002f0be5
@property(nonatomic) long long errorReportingStyle; // @synthesize errorReportingStyle=_errorReportingStyle;
@property(nonatomic) _Bool forcePCSDecryptionAttempt; // @synthesize forcePCSDecryptionAttempt=_forcePCSDecryptionAttempt;
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property(retain, nonatomic) CKDRecordFetchAggregator *recordFetcher; // @synthesize recordFetcher=_recordFetcher;
@property(nonatomic) unsigned long long numRequestsSent; // @synthesize numRequestsSent=_numRequestsSent;
@property(retain, nonatomic) NSDictionary *configurationsByRecordZoneID; // @synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID;
@property(retain, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property(retain, nonatomic) NSSet *desiredAssetKeys; // @synthesize desiredAssetKeys=_desiredAssetKeys;
@property(nonatomic) _Bool fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(nonatomic) _Bool shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup; // @synthesize fetchRecordsGroup=_fetchRecordsGroup;
- (_Bool)supportsClearAssetEncryption;	// IMP=0x00000000002f0a5b
- (void)_noteOperationFinishedBlockEnd;	// IMP=0x00000000002f09e1
- (void)_noteOperationEnding;	// IMP=0x00000000002f0967
- (void)_noteOperationBeginning;	// IMP=0x00000000002f08ed
- (void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2;	// IMP=0x00000000002f0873
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1;	// IMP=0x00000000002f07f6
- (id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2;	// IMP=0x00000000002f0779
- (void)_noteAttributesChangedForZone:(id)arg1;	// IMP=0x00000000002f06ff
- (void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2;	// IMP=0x00000000002f0685
- (void)_noteChangedRecordWithID:(id)arg1 record:(id)arg2 error:(id)arg3;	// IMP=0x00000000002f060b
- (id)activityCreate;	// IMP=0x00000000002f058e
@property(readonly, nonatomic) NSString *pipeliningDescription;
- (int)operationType;	// IMP=0x00000000002f0509
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000002f03be
- (void)main;	// IMP=0x00000000002ef810
- (id)_possiblyWrapError:(id)arg1 forRecordWithID:(id)arg2 withCode:(long long)arg3 format:(id)arg4;	// IMP=0x00000000002ef5ee
- (void)_sendFetchChangesRequestForZoneIDs:(id)arg1 withOptions:(id)arg2 previousRequestSchedulerInfo:(id)arg3;	// IMP=0x00000000002ee579
- (void)_processZonePCSChanges:(id)arg1;	// IMP=0x00000000002ee1eb
- (void)_handleAttributesChangedForZone:(id)arg1 perRequestSchedulerInfo:(id)arg2;	// IMP=0x00000000002ee014
- (void)_handleRecordDelete:(id)arg1 recordType:(id)arg2 perRequestSchedulerInfo:(id)arg3;	// IMP=0x00000000002edd73
- (void)_handleChangedRecords:(id)arg1 perRequestSchedulerInfo:(id)arg2;	// IMP=0x00000000002ece55
- (void)_handleFetchChangesRequestFinishedWithSchedulerInfo:(id)arg1;	// IMP=0x00000000002ecddb
- (id)relevantZoneIDs;	// IMP=0x00000000002ecdc9
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000002ecc56

// Remaining properties
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

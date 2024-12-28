//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKQuery, NSDate, NSDictionary, NSMutableSet, NSString, PDCloudStoreContainerDatabase, PDCloudStoreRecordsRequestModificationOperationConfiguration, PKCloudStoreZone;

@interface PDCloudStoreRecordsRequest : NSObject
{
    _Bool _storeChangesInDatabase;	// 8 = 0x8
    _Bool _returnRecords;	// 9 = 0x9
    _Bool _formReport;	// 10 = 0xa
    _Bool _useLastChangeToken;	// 11 = 0xb
    _Bool _shouldSaveToken;	// 12 = 0xc
    _Bool _detectConflicts;	// 13 = 0xd
    _Bool _isModifyingShare;	// 14 = 0xe
    _Bool _ignoreChangesMadeByThisDevice;	// 15 = 0xf
    _Bool _ignoreExistingRecordHash;	// 16 = 0x10
    NSString *_groupName;	// 24 = 0x18
    NSString *_groupNameSuffix;	// 32 = 0x20
    long long _qualityOfService;	// 40 = 0x28
    unsigned long long _requestType;	// 48 = 0x30
    PDCloudStoreContainerDatabase *_containerDatabase;	// 56 = 0x38
    PKCloudStoreZone *_cloudStoreZone;	// 64 = 0x40
    CKQuery *_ckQuery;	// 72 = 0x48
    long long _batchLimit;	// 80 = 0x50
    CDUnknownBlockType _batchHandler;	// 88 = 0x58
    NSDictionary *_recordsToSaveByDatabaseIdentifier;	// 96 = 0x60
    NSDictionary *_recordIDsByDatabaseIdentifier;	// 104 = 0x68
    PDCloudStoreRecordsRequestModificationOperationConfiguration *_recordModificationOperationConfiguration;	// 112 = 0x70
    NSString *_recordName;	// 120 = 0x78
    NSDate *_ignoreRecordsBeforeDate;	// 128 = 0x80
    NSDate *_ignoreRecordsAfterDate;	// 136 = 0x88
    NSMutableSet *_completionHandlers;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00200000003854ea
@property(retain, nonatomic) NSMutableSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(nonatomic) _Bool ignoreExistingRecordHash; // @synthesize ignoreExistingRecordHash=_ignoreExistingRecordHash;
@property(retain, nonatomic) NSDate *ignoreRecordsAfterDate; // @synthesize ignoreRecordsAfterDate=_ignoreRecordsAfterDate;
@property(retain, nonatomic) NSDate *ignoreRecordsBeforeDate; // @synthesize ignoreRecordsBeforeDate=_ignoreRecordsBeforeDate;
@property(retain, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property(retain, nonatomic) PDCloudStoreRecordsRequestModificationOperationConfiguration *recordModificationOperationConfiguration; // @synthesize recordModificationOperationConfiguration=_recordModificationOperationConfiguration;
@property(retain, nonatomic) NSDictionary *recordIDsByDatabaseIdentifier; // @synthesize recordIDsByDatabaseIdentifier=_recordIDsByDatabaseIdentifier;
@property(retain, nonatomic) NSDictionary *recordsToSaveByDatabaseIdentifier; // @synthesize recordsToSaveByDatabaseIdentifier=_recordsToSaveByDatabaseIdentifier;
@property(copy, nonatomic) CDUnknownBlockType batchHandler; // @synthesize batchHandler=_batchHandler;
@property(nonatomic) long long batchLimit; // @synthesize batchLimit=_batchLimit;
@property(retain, nonatomic) CKQuery *ckQuery; // @synthesize ckQuery=_ckQuery;
@property(retain, nonatomic) PKCloudStoreZone *cloudStoreZone; // @synthesize cloudStoreZone=_cloudStoreZone;
@property(retain, nonatomic) PDCloudStoreContainerDatabase *containerDatabase; // @synthesize containerDatabase=_containerDatabase;
@property(nonatomic) _Bool ignoreChangesMadeByThisDevice; // @synthesize ignoreChangesMadeByThisDevice=_ignoreChangesMadeByThisDevice;
@property(nonatomic) _Bool isModifyingShare; // @synthesize isModifyingShare=_isModifyingShare;
@property(nonatomic) _Bool detectConflicts; // @synthesize detectConflicts=_detectConflicts;
@property(nonatomic) _Bool shouldSaveToken; // @synthesize shouldSaveToken=_shouldSaveToken;
@property(nonatomic) _Bool useLastChangeToken; // @synthesize useLastChangeToken=_useLastChangeToken;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(retain, nonatomic) NSString *groupNameSuffix; // @synthesize groupNameSuffix=_groupNameSuffix;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) _Bool formReport; // @synthesize formReport=_formReport;
@property(nonatomic) _Bool returnRecords; // @synthesize returnRecords=_returnRecords;
@property(nonatomic) _Bool storeChangesInDatabase; // @synthesize storeChangesInDatabase=_storeChangesInDatabase;
- (_Bool)canCoalesceWithRequest:(id)arg1;	// IMP=0x0010000000384c3c
- (id)description;	// IMP=0x001000000038492a
- (void)callCompletionsWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x00100000003847a5
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000384762
- (id)initWithRequestType:(unsigned long long)arg1 storeChanges:(_Bool)arg2 returnRecords:(_Bool)arg3 qualityOfService:(long long)arg4 groupName:(id)arg5 groupNameSuffix:(id)arg6;	// IMP=0x0010000000384684

@end

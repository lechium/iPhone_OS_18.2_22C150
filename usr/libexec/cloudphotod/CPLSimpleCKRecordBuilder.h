//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, CKRecordID, CPLRecordTargetMapping, MISSING_TYPE, NSString;
@protocol CPLCloudKitScopeProvider;

@interface CPLSimpleCKRecordBuilder : NSObject
{
    MISSING_TYPE *_ckRecord;	// 8 = 0x8
    id <CPLCloudKitScopeProvider> _scopeProvider;	// 16 = 0x10
    CKRecordID *_currentUserRecordID;	// 24 = 0x18
    CPLRecordTargetMapping *_targetMapping;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000003e163
@property(readonly, nonatomic) CPLRecordTargetMapping *targetMapping; // @synthesize targetMapping=_targetMapping;
@property(readonly, nonatomic) CKRecordID *currentUserRecordID; // @synthesize currentUserRecordID=_currentUserRecordID;
@property(readonly, nonatomic) id <CPLCloudKitScopeProvider> scopeProvider; // @synthesize scopeProvider=_scopeProvider;
@property(readonly, nonatomic) CKRecord *ckRecord; // @synthesize ckRecord=_ckRecord;
- (void)requestRecordWithID:(id)arg1 cloudKitScope:(id)arg2 forKey:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000003e04b
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000003e035
- (void)setLegacyEncryptedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000003e01f
- (void)setEncryptedObject:(id)arg1 forKey:(id)arg2 validateClass:(Class)arg3;	// IMP=0x001000000003e009
- (void)setCKReferenceWithScopedIdentifier:(id)arg1 forKey:(id)arg2 referenceAction:(unsigned long long)arg3;	// IMP=0x001000000003de8f
- (void)setCKAsset:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000003de7d
- (id)recordIDForResourcesOfRecordWithScopedIdentifier:(id)arg1 cloudKitScope:(id *)arg2 error:(id *)arg3;	// IMP=0x001000000003dd9a
- (id)_recordIDFromScopedIdentifier:(id)arg1 cloudKitScope:(id *)arg2 error:(id *)arg3;	// IMP=0x001000000003dc40
- (id)initWithBaseCKRecord:(id)arg1 scopeProvider:(id)arg2 currentUserRecordID:(id)arg3 targetMapping:(id)arg4;	// IMP=0x001000000003db58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


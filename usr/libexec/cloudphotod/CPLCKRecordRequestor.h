//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLCKRecordFetchCache, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol CPLCloudKitScopeProvider;

@interface CPLCKRecordRequestor : NSObject
{
    NSMutableSet *_requestedRecordIDs;	// 8 = 0x8
    NSMutableArray *_requests;	// 16 = 0x10
    NSMutableDictionary *_requestedRecordIDsPerOperationType;	// 24 = 0x18
    CPLCKRecordFetchCache *_fetchCache;	// 32 = 0x20
    id <CPLCloudKitScopeProvider> _scopeProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000b3062
@property(readonly, nonatomic) id <CPLCloudKitScopeProvider> scopeProvider; // @synthesize scopeProvider=_scopeProvider;
@property(readonly, nonatomic) CPLCKRecordFetchCache *fetchCache; // @synthesize fetchCache=_fetchCache;
- (_Bool)processedFetchedRequestedRecordsWithError:(id *)arg1;	// IMP=0x00100000000b2bb7
@property(readonly, nonatomic) NSArray *requestedRecordIDs;
- (void)fetchRequestedRecordsForTransportTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b29e4
- (void)_fetchRecordsForNextOperationTypeInEnumerator:(id)arg1 task:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b2726
@property(readonly, nonatomic) _Bool needsRequestedRecords;
- (void)requestRecordWithRecordID:(id)arg1 operationType:(long long)arg2 forRecordWithRecordID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b245c
- (id)initWithFetchCache:(id)arg1 scopeProvider:(id)arg2;	// IMP=0x00100000000b23aa

@end

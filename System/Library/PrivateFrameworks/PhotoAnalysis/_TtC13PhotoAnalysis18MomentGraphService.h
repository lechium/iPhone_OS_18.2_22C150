//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSArray, NSData, NSDictionary, NSSet, NSString;

@interface _TtC13PhotoAnalysis18MomentGraphService : _TtCs12_SwiftObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *identifier;	// 112 = 0x70
    MISSING_TYPE *worker;	// 128 = 0x80
    MISSING_TYPE *associatedWorkers;	// 136 = 0x88
    MISSING_TYPE *taskScheduler;	// 144 = 0x90
    MISSING_TYPE *requestOrigin;	// 152 = 0x98
    MISSING_TYPE *stateHolder;	// 160 = 0xa0
    MISSING_TYPE *operationManager;	// 168 = 0xa8
    MISSING_TYPE *queryAnnotatorSessionManager;	// 176 = 0xb0
}

- (void)fetchUnvalidatedPromptSuggestionsWithFetchLimit:(long long)arg1 reply:(void (^)(NSData *, NSError *))arg2;	// IMP=0x00000000000cf1a0
- (void)performPromptSuggestionCachingWithOperationID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;	// IMP=0x00000000000cefe0
- (void)requestPersonalTraitsForHighlightUUIDs:(NSArray *)arg1 operationID:(NSString *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;	// IMP=0x00000000000cea60
- (void)requestPersonalTraitsForAssetUUIDs:(NSArray *)arg1 operationID:(NSString *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;	// IMP=0x00000000000cdda0
- (void)requestQueryAnnotationForQuery:(NSString *)arg1 originatorPID:(long long)arg2 operationID:(NSString *)arg3 reply:(void (^)(NSData *, NSError *))arg4;	// IMP=0x00000000000cd2f0
- (void)requestPrewarmQueryAnnotatorForOriginatorPID:(long long)arg1 operationID:(NSString *)arg2 reply:(void (^)(NSError *))arg3;	// IMP=0x00000000000cc4f0
- (void)requestPersonRelationshipByUUIDForPersonUUIDs:(NSSet *)arg1 operationID:(NSString *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;	// IMP=0x00000000000cbc00
- (void)requestLocationRetrievalResultsWithQueryTokenAsData:(NSData *)arg1 operationID:(NSString *)arg2 reply:(void (^)(NSData *, NSError *))arg3;	// IMP=0x00000000000cb230
- (void)requestPersonalEventAssetsForQueryTokenAsData:(NSData *)arg1 associatedPersonUUID:(NSString *)arg2 scopedAssetUUIDs:(NSSet *)arg3 momentUUIDByAssetUUID:(NSDictionary *)arg4 retrievalResultsByQueryTokenAsData:(NSData *)arg5 operationID:(NSString *)arg6 reply:(void (^)(NSData *, NSError *))arg7;	// IMP=0x00000000000ca190
- (void)requestPersonalTraitsForAssetUUIDs:(NSArray *)arg1 momentUUIDByAssetUUID:(NSDictionary *)arg2 extendedTokenCollectionAsData:(NSData *)arg3 configurationAsData:(NSData *)arg4 operationID:(NSString *)arg5 reply:(void (^)(NSData *, NSError *))arg6;	// IMP=0x00000000000c8fb0
- (void)requestMeaningsForMomentUUIDs:(NSSet *)arg1 operationID:(NSString *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;	// IMP=0x00000000000c75f0
- (void)requestExtendedTokenCollectionFromQueryTokensAsData:(NSData *)arg1 representativeMomentUUIDByAssetUUID:(NSDictionary *)arg2 personOrPetUUIDsWithNegativeFeedback:(NSSet *)arg3 operationID:(NSString *)arg4 reply:(void (^)(NSData *, NSError *))arg5;	// IMP=0x00000000000c6930
- (void)requestContextInfoWithConfigurationAsData:(NSData *)arg1 operationID:(NSString *)arg2 reply:(void (^)(NSData *, NSError *))arg3;	// IMP=0x00000000000c5930
- (void)performGraphSearchEntityRankingDonationWithOperationID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;	// IMP=0x00000000000c47f0
- (void)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(NSArray *)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(_Bool)arg3 operationID:(NSString *)arg4 reply:(void (^)(NSDictionary *, NSError *))arg5;	// IMP=0x00000000000c4130
- (void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(NSArray *)arg1 ofType:(unsigned long long)arg2 operationID:(NSString *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;	// IMP=0x00000000000c3620
- (void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(NSArray *)arg1 ofType:(unsigned long long)arg2 operationID:(NSString *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;	// IMP=0x00000000000c2ca0
- (void)requestGraphSearchMetadataWithOptions:(NSDictionary *)arg1 operationID:(NSString *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;	// IMP=0x00000000000c2330
- (void)requestSynonymsDictionariesWithOperationID:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;	// IMP=0x00000000000c1820
- (void)requestZeroKeywordsWithOptions:(NSDictionary *)arg1 operationID:(NSString *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;	// IMP=0x00000000000c0de0
- (void)generateMagicSlotSuggestionsWithOptions:(NSDictionary *)arg1 reply:(void (^)(_Bool, NSError *))arg2;	// IMP=0x00000000000c0350
- (void)requestGraphIsAvailableWithReply:(void (^)(NSNumber *, NSError *))arg1;	// IMP=0x00000000000bf750
- (void)requestGraphStatusWithReply:(void (^)(NSDictionary *, NSError *))arg1;	// IMP=0x00000000000bf4e0
- (void)performLocalMemoryEnrichmentForMemoryCategory:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000be970
- (void)performLocalMemoryEnrichmentForUUIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000be8f0
- (void)performLocalMemoryEventElectionWithElectionMode:(NSString *)arg1 operationID:(NSString *)arg2 reply:(void (^)(NSError *))arg3;	// IMP=0x00000000000be700
- (void)performMemoryNodesRebuildForCategory:(long long)arg1 operationID:(NSString *)arg2 reply:(void (^)(NSError *))arg3;	// IMP=0x00000000000be0e0
- (void)performGraphIncrementalUpdateWithOptions:(NSDictionary *)arg1 operationID:(NSString *)arg2 reply:(void (^)(NSError *))arg3;	// IMP=0x00000000000bd660
- (void)performGraphRebuildWithOptions:(NSDictionary *)arg1 operationID:(NSString *)arg2 reply:(void (^)(NSError *))arg3;	// IMP=0x00000000000bcad0
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bbfc0

@end

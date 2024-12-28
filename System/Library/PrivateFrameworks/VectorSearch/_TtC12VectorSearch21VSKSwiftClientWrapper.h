//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12VectorSearch21VSKSwiftClientWrapper : NSObject
{
    MISSING_TYPE *wrappedClient;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000048d60
- (id)init;	// IMP=0x0000000000048d00
- (id)getStatisticsAndReturnError:(id *)arg1;	// IMP=0x0000000000048c30
- (_Bool)rebuildAndReturnError:(id *)arg1;	// IMP=0x0000000000048ae0
- (id)embeddingCountAndReturnError:(id *)arg1;	// IMP=0x00000000000489f0
- (id)countAndReturnError:(id *)arg1;	// IMP=0x0000000000048960
- (_Bool)dropAndReturnError:(id *)arg1;	// IMP=0x0000000000048920
- (_Bool)deleteAllAndReturnError:(id *)arg1;	// IMP=0x00000000000488e0
- (id)deleteWithStringIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000487c0
- (id)deleteWithIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000048730
- (id)insertWithAssets:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000048650
- (id)getStringIdentifiersWithApplyingFilters:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000047bf0
- (id)getIdentifiersWithApplyingFilters:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000047930
- (id)getStringIdentifiedAssetsWithIdentifiers:(id)arg1 attributeFilters:(id)arg2 pagination:(id)arg3 includeVectors:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00000000000477a0
- (id)getAssetsWithIdentifiers:(id)arg1 attributeFilters:(id)arg2 pagination:(id)arg3 includeVectors:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00000000000472e0
- (id)searchByBatch:(id)arg1 stringIdentifiers:(id)arg2 attributeFilters:(id)arg3 limit:(long long)arg4 fullScan:(_Bool)arg5 includePayload:(_Bool)arg6 numberOfProbes:(long long)arg7 batchSize:(id)arg8 numConcurrentReaders:(long long)arg9 error:(id *)arg10;	// IMP=0x0000000000046060
- (id)searchByBatch:(id)arg1 identifiers:(id)arg2 attributeFilters:(id)arg3 limit:(long long)arg4 fullScan:(_Bool)arg5 includePayload:(_Bool)arg6 numberOfProbes:(long long)arg7 batchSize:(id)arg8 numConcurrentReaders:(long long)arg9 error:(id *)arg10;	// IMP=0x00000000000458d0
- (id)searchByVector:(id)arg1 stringIdentifiers:(id)arg2 attributeFilters:(id)arg3 limit:(long long)arg4 fullScan:(_Bool)arg5 includePayload:(_Bool)arg6 numberOfProbes:(long long)arg7 batchSize:(id)arg8 numConcurrentReaders:(long long)arg9 error:(id *)arg10;	// IMP=0x0000000000044fa0
- (id)searchByVector:(id)arg1 identifiers:(id)arg2 attributeFilters:(id)arg3 limit:(long long)arg4 fullScan:(_Bool)arg5 includePayload:(_Bool)arg6 numberOfProbes:(long long)arg7 batchSize:(id)arg8 numConcurrentReaders:(long long)arg9 error:(id *)arg10;	// IMP=0x0000000000044810
- (void)cooldown;	// IMP=0x0000000000044170
- (void)warmupWithNumConcurrentReaders:(long long)arg1;	// IMP=0x00000000000440f0
- (void)warmup;	// IMP=0x0000000000044090
- (id)initWithConfig:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000043f60

@end

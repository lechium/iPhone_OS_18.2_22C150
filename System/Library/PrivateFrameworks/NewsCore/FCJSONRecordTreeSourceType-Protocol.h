//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCachePolicy, FCEdgeCacheHint, NSArray, NSDictionary;

@protocol FCJSONRecordTreeSourceType
- (void)fetchRecordTreeWithRootIDs:(NSArray *)arg1 branchKeysByRecordType:(NSDictionary *)arg2 cachePolicy:(FCCachePolicy *)arg3 edgeCacheHint:(FCEdgeCacheHint *)arg4 completion:(void (^)(NSDictionary *, NSError *))arg5;
- (void)fetchRecordTreeWithRootIDs:(NSArray *)arg1 branchKeysByRecordType:(NSDictionary *)arg2 cachePolicy:(FCCachePolicy *)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
@end

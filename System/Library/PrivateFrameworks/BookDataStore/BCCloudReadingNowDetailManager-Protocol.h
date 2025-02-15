//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookDataStore/NSObject-Protocol.h>

@class BCMutableCloudSyncVersions, NSArray, NSDictionary, NSString;

@protocol BCCloudReadingNowDetailManager <NSObject>
- (void)needsReadingNowAssetTypePopulation:(void (^)(_Bool, NSError *))arg1;
- (void)getReadingNowDetailChangesSince:(BCMutableCloudSyncVersions *)arg1 completion:(void (^)(NSSet *, NSSet *, BCMutableCloudSyncVersions *, NSError *, _Bool))arg2;
- (void)readingNowDetailsForAssetIDs:(NSArray *)arg1 completion:(void (^)(NSArray *, BCMutableCloudSyncVersions *, NSError *))arg2;
- (void)deleteReadingNowDetailForAssetID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setReadingNowDetails:(NSDictionary *)arg1 completion:(void (^)(_Bool, _Bool, NSError *))arg2;
- (void)currentReadingNowDetailCloudSyncVersions:(void (^)(BCMutableCloudSyncVersions *))arg1;
@end


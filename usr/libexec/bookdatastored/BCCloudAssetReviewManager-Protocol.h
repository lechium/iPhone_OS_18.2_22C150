//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BDSCloudKitSupportZoneRecovery-Protocol.h"
#import "NSObject-Protocol.h"

@class BCMutableAssetReview, BCMutableCloudSyncVersions, NSArray, NSDictionary, NSString;

@protocol BCCloudAssetReviewManager <NSObject, BDSCloudKitSupportZoneRecovery>
- (void)getAssetReviewChangesSince:(BCMutableCloudSyncVersions *)arg1 completion:(void (^)(NSSet *, NSSet *, BCMutableCloudSyncVersions *, NSError *, _Bool))arg2;
- (void)fetchAssetReviewsForUserID:(NSString *)arg1 includingDeleted:(_Bool)arg2 completion:(void (^)(NSArray *, BCMutableCloudSyncVersions *, NSError *))arg3;
- (void)assetReviewsForAssetReviewIDs:(NSArray *)arg1 completion:(void (^)(NSArray *, BCMutableCloudSyncVersions *, NSError *))arg2;
- (void)assetReviewForAssetReviewID:(NSString *)arg1 completion:(void (^)(BCMutableAssetReview *, NSError *))arg2;
- (void)deleteAssetReviewForAssetReviewIDs:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)deleteAssetReviewForAssetReviewID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setAssetReviews:(NSDictionary *)arg1 completion:(void (^)(_Bool, _Bool, NSError *))arg2;
- (void)setAssetReview:(BCMutableAssetReview *)arg1 completion:(void (^)(_Bool, _Bool, NSError *))arg2;
@end

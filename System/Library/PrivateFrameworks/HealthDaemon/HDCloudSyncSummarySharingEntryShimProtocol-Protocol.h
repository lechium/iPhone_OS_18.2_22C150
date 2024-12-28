//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDCloudSyncOperationConfiguration, HDSQLitePredicate, NSArray, NSSet, NSUUID;

@protocol HDCloudSyncSummarySharingEntryShimProtocol <NSObject>
- (void)insertOrReplaceCodableSharingEntries:(NSArray *)arg1 shouldResolveCNContact:(_Bool)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)codableEntryWithUUID:(NSUUID *)arg1 configuration:(HDCloudSyncOperationConfiguration *)arg2 completion:(void (^)(HDCodableSummarySharingEntry *, NSError *))arg3;
- (void)authorizationIdentifiersByContactIdentifierForParticipants:(NSSet *)arg1 configuration:(HDCloudSyncOperationConfiguration *)arg2 completion:(void (^)(NSDictionary *, _Bool, NSError *))arg3;
- (void)pauseStatusForEntriesWithUUIDs:(NSArray *)arg1 configuration:(HDCloudSyncOperationConfiguration *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)authorizationIdentifiersForEntriesNotExistingParticipants:(NSSet *)arg1 configuration:(HDCloudSyncOperationConfiguration *)arg2 completion:(void (^)(NSDictionary *, _Bool, NSError *))arg3;
- (void)sharingEntryExistsWithPredicate:(HDSQLitePredicate *)arg1 configuration:(HDCloudSyncOperationConfiguration *)arg2 completion:(void (^)(_Bool, _Bool, NSError *))arg3;
- (void)disableAllSharingEntriesWithConfiguration:(HDCloudSyncOperationConfiguration *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

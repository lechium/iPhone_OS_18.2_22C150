//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookDataStore/NSObject-Protocol.h>

@protocol BDSCloudSyncDiagnosticServiceProtocol <NSObject>
- (void)cloudSyncDiagnosticFindLocalIdDupesWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)cloudSyncDiagnosticInfoWithCompletionHandler:(void (^)(BDSCloudSyncDiagnosticInfo *, NSError *))arg1;
- (void)cloudSyncDiagnosticDetachWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)forceFetchRemoteChanges:(void (^)(NSError *))arg1;
- (void)clearSyncMetadata:(void (^)(NSError *))arg1;
@end

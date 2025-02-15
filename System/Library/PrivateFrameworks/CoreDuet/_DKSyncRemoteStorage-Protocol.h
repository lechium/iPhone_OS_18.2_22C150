//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _DKSyncPeer;

@protocol _DKSyncRemoteStorage
- (long long)transportType;
- (NSString *)name;
- (void)fetchSourceDeviceIDFromPeer:(_DKSyncPeer *)arg1 highPriority:(_Bool)arg2 completion:(void (^)(NSUUID *, NSString *, NSError *))arg3;
- (void)cancelOutstandingOperations;
- (_Bool)isAvailable;
- (void)start;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSArray;

@protocol HKSharingRecipientAuthorizationStoreServerInterface <NSObject>
- (void)remote_unregisterObservers;
- (void)remote_registerObservers;
- (void)remote_revokeWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_removeSharingAuthorizations:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_addSharingAuthorizations:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchSharingAuthorizationsMarkedForDeletionWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_fetchSharingAuthorizationsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

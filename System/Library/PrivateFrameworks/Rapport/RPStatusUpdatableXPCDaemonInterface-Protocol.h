//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, RPStatusProvider, RPStatusSubscriber;

@protocol RPStatusUpdatableXPCDaemonInterface
- (void)xpcStatusSubscriberActivate:(RPStatusSubscriber *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)xpcStatusProviderActivate:(RPStatusProvider *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)xpcStatusUpdatableUnsubscribeToStatus:(NSString *)arg1;
- (void)xpcStatusUpdatableSubscribeToStatus:(NSString *)arg1;
- (void)xpcStatusUpdatableCancelProvideStatus:(NSString *)arg1;
- (void)xpcStatusUpdatableProvideStatus:(NSString *)arg1 statusInfo:(NSDictionary *)arg2;
@end

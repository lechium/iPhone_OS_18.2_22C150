//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSError, TVPSecureKeyDeliveryCoordinator, TVPSecureKeyRequest;

@protocol TVPSecureKeyDeliveryCoordinatorDelegate
- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 didReceiveUpdatedRentalExpirationDate:(NSDate *)arg2;
- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 willFailWithError:(NSError *)arg2;
- (void)secureKeyDeliveryCoordinatorWillSucceed:(TVPSecureKeyDeliveryCoordinator *)arg1;

@optional
- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 didReceiveUpdatedRentalExpirationDate:(NSDate *)arg2 playbackStartDate:(NSDate *)arg3;
- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 didReceiveUpdatedRentalPlaybackStartDate:(NSDate *)arg2;
- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 didReceiveOfflineKeyData:(NSData *)arg2 forKeyRequest:(TVPSecureKeyRequest *)arg3;
- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 willFailWithError:(NSError *)arg2 forKeyRequest:(TVPSecureKeyRequest *)arg3;
- (void)secureKeyDeliveryCoordinatorWillSucceed:(TVPSecureKeyDeliveryCoordinator *)arg1 forKeyRequest:(TVPSecureKeyRequest *)arg2;
@end


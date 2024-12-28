//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafetyMonitor/NSObject-Protocol.h>

@class SMConversation, SMMessage;

@protocol SMIDSMessengerProtocolPrivate <NSObject>
- (void)sendIDSMessageToMyNearbyDevices:(SMMessage *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)sendIDSMessageToPairedDevice:(SMMessage *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)sendIDSMessageToMyDevices:(SMMessage *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)sendIDSMessage:(SMMessage *)arg1 toConversation:(SMConversation *)arg2 completion:(void (^)(_Bool, NSError *))arg3;

@optional
- (void)cancelSubscriptionOnNearbyDevicesChanged;
- (void)startSubscriptionOnNearbyDevicesChanged;
@end

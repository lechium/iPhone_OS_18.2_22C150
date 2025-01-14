//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StatusKitAgentCore/NSObject-Protocol.h>

@class NSArray, NSData, NSDate;
@protocol SKAPushManagingDelegate;

@protocol SKAPushManaging <NSObject>
@property(nonatomic) __weak id <SKAPushManagingDelegate> delegate;
- (NSData *)pushToken;
- (NSDate *)serverTime;
- (void)disableActivityTracking;
- (void)enableActivityTracking;
- (void)switchPresenceFilterToEnabled;
- (void)switchPresenceFilterToNonwaking;
- (void)switchStatusFilterToEnabled;
- (void)switchStatusFilterToNonwaking;
- (void)subscribedPresenceChannelsWithCompletion:(void (^)(NSArray *))arg1;
- (void)unsubscribeFromPresenceChannels:(NSArray *)arg1;
- (void)subscribeToPresenceChannels:(NSArray *)arg1;
- (void)subscribedStatusChannelsWithCompletion:(void (^)(NSArray *))arg1;
- (void)unsubscribeFromStatusChannels:(NSArray *)arg1;
- (void)subscribeToStatusChannels:(NSArray *)arg1;
- (void)sendPresenceMessage:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)provisionPayload:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)publishStatus:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)createChannelWithProtoData:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
@end


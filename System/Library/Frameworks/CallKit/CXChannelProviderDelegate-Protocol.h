//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/CXAbstractProviderDelegate-Protocol.h>

@class AVAudioSession, CXChannelJoinAction, CXChannelLeaveAction, CXChannelProvider, CXChannelTransmitStartAction, CXChannelTransmitStopAction, NSData, NSDictionary, NSUUID;

@protocol CXChannelProviderDelegate <CXAbstractProviderDelegate>

@optional
- (void)provider:(CXChannelProvider *)arg1 didDeactivateAudioSession:(AVAudioSession *)arg2;
- (void)provider:(CXChannelProvider *)arg1 didActivateAudioSession:(AVAudioSession *)arg2;
- (void)provider:(CXChannelProvider *)arg1 performChannelTransmitStopAction:(CXChannelTransmitStopAction *)arg2;
- (void)provider:(CXChannelProvider *)arg1 performChannelTransmitStartAction:(CXChannelTransmitStartAction *)arg2;
- (void)provider:(CXChannelProvider *)arg1 performChannelLeaveAction:(CXChannelLeaveAction *)arg2;
- (void)provider:(CXChannelProvider *)arg1 performChannelJoinAction:(CXChannelJoinAction *)arg2;
- (void)provider:(CXChannelProvider *)arg1 didReceiveCheckInResult:(long long)arg2 channelUUID:(NSUUID *)arg3;
- (void)provider:(CXChannelProvider *)arg1 didReceivePushPayload:(NSDictionary *)arg2 channelUUID:(NSUUID *)arg3 reply:(void (^)(long long, CXParticipant *))arg4 isServiceUpdateMessage:(_Bool)arg5 isHighPriority:(_Bool)arg6 remainingHighPriorityBudget:(long long)arg7;
- (void)provider:(CXChannelProvider *)arg1 didReceivePushPayload:(NSDictionary *)arg2 channelUUID:(NSUUID *)arg3;
- (void)provider:(CXChannelProvider *)arg1 didReceivePushPayload:(NSDictionary *)arg2;
- (void)provider:(CXChannelProvider *)arg1 didReceiveChannelPushToken:(NSData *)arg2;
@end


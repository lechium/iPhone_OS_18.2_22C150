//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/CXServiceClientDelegate-Protocol.h>

@class CXAction, CXChannelProviderConfiguration, CXChannelUpdate, CXServiceClient, CXTransaction, NSDate, NSUUID;

@protocol CXChannelServiceClientDelegate <CXServiceClientDelegate>
- (void)serviceClient:(CXServiceClient *)arg1 requestedTransaction:(CXTransaction *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)serviceClient:(CXServiceClient *)arg1 reportedIncomingTransmissionStartedForChannelWithUUID:(NSUUID *)arg2 update:(CXChannelUpdate *)arg3 shouldReplaceOutgoingTransmission:(_Bool)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)serviceClient:(CXServiceClient *)arg1 reportedIncomingTransmissionEndedForChannelWithUUID:(NSUUID *)arg2 reason:(long long)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)serviceClient:(CXServiceClient *)arg1 reportedChannelWithUUID:(NSUUID *)arg2 updated:(CXChannelUpdate *)arg3;
- (void)serviceClient:(CXServiceClient *)arg1 reportedChannelWithUUID:(NSUUID *)arg2 disconnectedAtDate:(NSDate *)arg3 disconnectedReason:(long long)arg4;
- (void)serviceClient:(CXServiceClient *)arg1 reportedChannelWithUUID:(NSUUID *)arg2 connectedAtDate:(NSDate *)arg3;
- (void)serviceClient:(CXServiceClient *)arg1 reportedChannelWithUUID:(NSUUID *)arg2 startedConnectingAtDate:(NSDate *)arg3;
- (void)serviceClient:(CXServiceClient *)arg1 reportedAudioFinishedForChannelWithUUID:(NSUUID *)arg2;
- (void)serviceClient:(CXServiceClient *)arg1 registeredWithConfiguration:(CXChannelProviderConfiguration *)arg2;
- (void)serviceClient:(CXServiceClient *)arg1 actionCompleted:(CXAction *)arg2;
@end


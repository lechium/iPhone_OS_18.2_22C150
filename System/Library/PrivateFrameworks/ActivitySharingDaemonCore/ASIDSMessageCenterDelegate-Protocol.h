//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivitySharingDaemonCore/NSObject-Protocol.h>

@class ASCodableFinalizeHandshake, ASCodableInviteRequest, ASCodableInviteResponse, ASCodableWithdrawInviteRequest, ASIDSMessageCenter, NSString;

@protocol ASIDSMessageCenterDelegate <NSObject>
- (void)messageCenter:(ASIDSMessageCenter *)arg1 didReceiveWithdrawInviteRequest:(ASCodableWithdrawInviteRequest *)arg2 fromSenderAddress:(NSString *)arg3 receiverAddress:(NSString *)arg4 messageHandledCompletion:(void (^)(long long))arg5;
- (void)messageCenter:(ASIDSMessageCenter *)arg1 didReceiveFinalizeHandshake:(ASCodableFinalizeHandshake *)arg2 fromSenderAddress:(NSString *)arg3 receiverAddress:(NSString *)arg4 messageHandledCompletion:(void (^)(long long))arg5;
- (void)messageCenter:(ASIDSMessageCenter *)arg1 didReceiveInviteResponse:(ASCodableInviteResponse *)arg2 fromSenderAddress:(NSString *)arg3 receiverAddress:(NSString *)arg4 messageHandledCompletion:(void (^)(long long))arg5;
- (void)messageCenter:(ASIDSMessageCenter *)arg1 didReceiveInviteRequest:(ASCodableInviteRequest *)arg2 fromSenderAddress:(NSString *)arg3 receiverAddress:(NSString *)arg4 messageHandledCompletion:(void (^)(long long))arg5;

@optional
- (void)messageCenter:(ASIDSMessageCenter *)arg1 errorSendingWithdrawInviteRequest:(ASCodableWithdrawInviteRequest *)arg2;
- (void)messageCenter:(ASIDSMessageCenter *)arg1 errorSendingFinalizeHandshake:(ASCodableFinalizeHandshake *)arg2;
- (void)messageCenter:(ASIDSMessageCenter *)arg1 errorSendingInviteResponse:(ASCodableInviteResponse *)arg2;
- (void)messageCenter:(ASIDSMessageCenter *)arg1 errorSendingInviteRequest:(ASCodableInviteRequest *)arg2;
@end


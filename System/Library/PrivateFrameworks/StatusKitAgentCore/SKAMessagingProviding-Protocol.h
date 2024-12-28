//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StatusKitAgentCore/NSObject-Protocol.h>
#import <StatusKitAgentCore/SKAIDSDeviceProviding-Protocol.h>

@class IDSURI, NSArray, NSData, NSDictionary, NSString, SKHandle;
@protocol SKAMessagingProvidingDelegate;

@protocol SKAMessagingProviding <NSObject, SKAIDSDeviceProviding>
@property(nonatomic) __weak id <SKAMessagingProvidingDelegate> delegate;
- (void)verifySignedPayload:(NSData *)arg1 matchesPayload:(NSData *)arg2 fromTokenURI:(NSString *)arg3 completion:(void (^)(NSError *, _Bool))arg4;
- (void)signPayload:(NSData *)arg1 completion:(void (^)(NSError *, NSData *))arg2;
- (SKHandle *)resolveSenderHandleWithPreferredSenderHandle:(SKHandle *)arg1;
- (_Bool)isFromIDFromSelfAccount:(NSString *)arg1;
- (_Bool)isHandleAvailableToMessageFrom:(SKHandle *)arg1;
- (void)isHandleMessageableForPresence:(SKHandle *)arg1 completion:(void (^)(_Bool))arg2;
- (void)isHandleMessageable:(SKHandle *)arg1 completion:(void (^)(_Bool))arg2;
- (SKHandle *)handleForTokenURI:(NSString *)arg1;
- (NSData *)deviceTokenForTokenURI:(NSString *)arg1;
- (NSData *)deviceToken;
- (NSString *)selfAddressedURIForURI:(IDSURI *)arg1;
- (_Bool)isValidURI:(IDSURI *)arg1;
- (NSString *)tokenURI;
- (_Bool)sendMessageToSelfDevices:(NSDictionary *)arg1 limitToPresenceCapable:(_Bool)arg2 identifier:(id *)arg3 error:(id *)arg4;
- (_Bool)sendMessage:(NSDictionary *)arg1 toHandles:(NSArray *)arg2 fromHandle:(SKHandle *)arg3 limitToPresenceCapable:(_Bool)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (_Bool)sendMessage:(NSDictionary *)arg1 toHandle:(SKHandle *)arg2 fromHandle:(SKHandle *)arg3 limitToPresenceCapable:(_Bool)arg4 identifier:(id *)arg5 error:(id *)arg6;
@end

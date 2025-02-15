//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Rapport/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString, RPNearbyInvitationDiscovery, RPNearbyInvitationServer, RPNearbyInvitationSession;

@protocol RPNearbyInvitationXPCDaemonInterface <NSObject>
- (void)nearbyInvitationSendRequestID:(NSString *)arg1 request:(NSDictionary *)arg2 options:(NSDictionary *)arg3 responseHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg4;
- (void)nearbyInvitationSendEventID:(NSString *)arg1 event:(NSDictionary *)arg2 options:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)nearbyInvitationInvalidateClientSession;
- (void)nearbyInvitationInvalidateSessionID:(NSNumber *)arg1;
- (void)nearbyInvitationActivateSession:(RPNearbyInvitationSession *)arg1 completion:(void (^)(NSError *))arg2;
- (void)nearbyInvitationActivateServer:(RPNearbyInvitationServer *)arg1 completion:(void (^)(NSError *))arg2;
- (void)nearbyInvitationActivateDiscovery:(RPNearbyInvitationDiscovery *)arg1 completion:(void (^)(NSError *))arg2;
@end


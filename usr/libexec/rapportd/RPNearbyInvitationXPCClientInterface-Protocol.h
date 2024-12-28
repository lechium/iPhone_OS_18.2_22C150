//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSNumber, NSString, RPNearbyInvitationDevice;

@protocol RPNearbyInvitationXPCClientInterface <NSObject>

@optional
- (void)nearbyInvitationReceivedRequestID:(NSString *)arg1 request:(NSDictionary *)arg2 options:(NSDictionary *)arg3 responseHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg4 sessionID:(NSNumber *)arg5;
- (void)nearbyInvitationReceivedEventID:(NSString *)arg1 event:(NSDictionary *)arg2 options:(NSDictionary *)arg3 sessionID:(NSNumber *)arg4;
- (void)nearbyInvitationSessionError:(NSError *)arg1 withID:(NSNumber *)arg2;
- (void)nearbyInvitationSessionEndedWithID:(NSNumber *)arg1;
- (void)nearbyInvitationStartServerSessionID:(NSNumber *)arg1 device:(RPNearbyInvitationDevice *)arg2 completion:(void (^)(NSError *))arg3;
- (void)nearbyInvitationSessionError:(NSError *)arg1;
- (void)nearbyInvitationChangedDevice:(RPNearbyInvitationDevice *)arg1 changes:(unsigned int)arg2;
- (void)nearbyInvitationLostDevice:(RPNearbyInvitationDevice *)arg1;
- (void)nearbyInvitationFoundDevice:(RPNearbyInvitationDevice *)arg1;
@end

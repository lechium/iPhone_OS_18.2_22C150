//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, RTIDataPayload, TVRCButtonEvent, TVRCGameControllerEvent, TVRCPlayItemInfo, TVRCTouchEvent, TVRDClientProcessConnection;

@protocol TVRDClientProcessConnectionDelegate <NSObject>
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 playItem:(TVRCPlayItemInfo *)arg2 deviceIdentifier:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 removeItemForDeviceWithIdentifier:(NSString *)arg2 mediaIdentifier:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 addItemForDeviceWithIdentifier:(NSString *)arg2 mediaIdentifier:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 markAsWatchedForDeviceWithIdentifier:(NSString *)arg2 mediaIdentifier:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 fetchUpNextInfoForDeviceWithIdentifier:(NSString *)arg2 paginationToken:(NSString *)arg3 completion:(void (^)(NSString *, NSDictionary *, NSError *))arg4;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 requestsEnablingFindingSession:(_Bool)arg2 forDeviceWithIdentifier:(NSString *)arg3;
- (_Bool)clientConnection:(TVRDClientProcessConnection *)arg1 isConnectedToDeviceWithIdentifier:(NSString *)arg2;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 requestsEnablingRemoteOnLockscreen:(_Bool)arg2 forDeviceWithIdentifier:(NSString *)arg3;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 requestsSendingEvent:(NSString *)arg2 toDeviceWithIdentifier:(NSString *)arg3 options:(NSDictionary *)arg4 response:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg5;
- (void)clientConnectionSeveredConnection:(TVRDClientProcessConnection *)arg1;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 requestsSuggestedDeviceWithResponse:(void (^)(NSArray *))arg2;
- (void)clientConnectionRequestsEndingDeviceQuery:(TVRDClientProcessConnection *)arg1;
- (void)clientConnectionRequestsStartingDeviceQuery:(TVRDClientProcessConnection *)arg1 withResponse:(void (^)(_Bool))arg2;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 requestsSendingInputDataPayload:(RTIDataPayload *)arg2 toDeviceIdentifier:(NSString *)arg3;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 requestsSendingInputReturnKeyToDeviceIdentifier:(NSString *)arg2;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 requestsSendingInputText:(NSString *)arg2 toDeviceIdentifier:(NSString *)arg3;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 requestsSendingGameControllerEvent:(TVRCGameControllerEvent *)arg2 toDeviceIdentifier:(NSString *)arg3;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 requestsSendingTouchEvent:(TVRCTouchEvent *)arg2 toDeviceIdentifier:(NSString *)arg3;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 requestsSendingButtonEvent:(TVRCButtonEvent *)arg2 toDeviceIdentifier:(NSString *)arg3;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 cancelledAuthChallengeForDeviceIdentifier:(NSString *)arg2;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 receivedAuthChallengeLocallyEnteredCode:(NSString *)arg2 forDeviceIdentifier:(NSString *)arg3;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 removedInterestedDeviceIdentifier:(NSString *)arg2;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 reiteratedInterestInDeviceIdentifier:(NSString *)arg2 connectionContext:(long long)arg3;
- (void)clientConnection:(TVRDClientProcessConnection *)arg1 addedInterestedDeviceIdentifier:(NSString *)arg2 connectionContext:(long long)arg3;
@end

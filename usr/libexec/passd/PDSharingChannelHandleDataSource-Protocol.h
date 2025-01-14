//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class PDShareURLDecorationConfiguration, PDSharingChannelHandle, PKContinuityProximityAdvertisement, PKSharingMessage;

@protocol PDSharingChannelHandleDataSource <NSObject>
- (void)universalShareURLForHandle:(PDSharingChannelHandle *)arg1 urlDecoration:(PDShareURLDecorationConfiguration *)arg2 completion:(void (^)(NSURL *, NSError *))arg3;
- (void)descriptorsForAccountDevicesForHandle:(PDSharingChannelHandle *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)startProximityDetectionForHandle:(PDSharingChannelHandle *)arg1 advertisement:(PKContinuityProximityAdvertisement *)arg2 completion:(void (^)(PKContinuityProximityVerification *))arg3;
- (void)startProximityAdvertisementForHandle:(PDSharingChannelHandle *)arg1 type:(unsigned long long)arg2 completion:(void (^)(PKContinuityProximityAdvertisement *))arg3;
- (void)remoteDeviceInformationForHandle:(PDSharingChannelHandle *)arg1 completion:(void (^)(PKRemoteDevice *))arg2;
- (void)fetchHandleTransferTokenForHandle:(PDSharingChannelHandle *)arg1 completion:(void (^)(NSString *))arg2;
- (void)didHandleMessageForHandle:(PDSharingChannelHandle *)arg1 message:(PKSharingMessage *)arg2 completion:(void (^)(void))arg3;
- (void)relinquishForHandle:(PDSharingChannelHandle *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)closeForHandle:(PDSharingChannelHandle *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)attachForHandle:(PDSharingChannelHandle *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)sendMessageTo:(PDSharingChannelHandle *)arg1 message:(PKSharingMessage *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)pingForHandle:(PDSharingChannelHandle *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end


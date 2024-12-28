//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, PDSharingLocalOnDeviceEndpoint, PKSharingMessage;
@protocol PDSharingChannelEndpoint;

@protocol PDSharingLocalOnDeviceServiceDelegate <NSObject>
- (void)endpointWasRemotelyTerminated:(id <PDSharingChannelEndpoint>)arg1;
- (void)didReceiveLocalShareMessage:(PKSharingMessage *)arg1 endpoint:(PDSharingLocalOnDeviceEndpoint *)arg2;
- (void)endpointWasUpdated:(id <PDSharingChannelEndpoint>)arg1 oldTransportIdentifier:(NSString *)arg2;
@end

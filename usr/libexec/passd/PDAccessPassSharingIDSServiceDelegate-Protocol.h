//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, PDSharingIDSEndpoint, PKSharingMessage;
@protocol PDSharingChannelEndpoint;

@protocol PDAccessPassSharingIDSServiceDelegate <NSObject>
- (void)endpointWasUpdated:(PDSharingIDSEndpoint *)arg1 oldTransportIdentifier:(NSString *)arg2 allowCreation:(_Bool)arg3;
- (void)endpointWasRemotelyTerminated:(id <PDSharingChannelEndpoint>)arg1;
- (void)didReceiveIDSShareMessage:(PKSharingMessage *)arg1 endpoint:(PDSharingIDSEndpoint *)arg2;
@end


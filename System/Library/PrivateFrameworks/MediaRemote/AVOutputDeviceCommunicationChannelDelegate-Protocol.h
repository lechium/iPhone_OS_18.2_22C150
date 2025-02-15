//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/NSObject-Protocol.h>

@class AVOutputDevice, AVOutputDeviceCommunicationChannel, NSData;

@protocol AVOutputDeviceCommunicationChannelDelegate <NSObject>

@optional
- (void)communicationChannelDidClose:(AVOutputDeviceCommunicationChannel *)arg1;
- (void)communicationChannel:(AVOutputDeviceCommunicationChannel *)arg1 didReceiveData:(NSData *)arg2;
- (void)outputDevice:(AVOutputDevice *)arg1 didCloseCommunicationChannel:(AVOutputDeviceCommunicationChannel *)arg2;
- (void)outputDevice:(AVOutputDevice *)arg1 didReceiveData:(NSData *)arg2 fromCommunicationChannel:(AVOutputDeviceCommunicationChannel *)arg3;
@end


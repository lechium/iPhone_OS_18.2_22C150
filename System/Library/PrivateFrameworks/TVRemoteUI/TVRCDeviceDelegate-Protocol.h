//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVRemoteUI/NSObject-Protocol.h>

@class NSError, NSSet, TVRCDevice, TVRCDeviceAuthenticationChallenge, TVRCNowPlayingInfo;

@protocol TVRCDeviceDelegate <NSObject>

@optional
- (void)device:(TVRCDevice *)arg1 updatedAttentionState:(long long)arg2;
- (void)device:(TVRCDevice *)arg1 updatedSiriRemoteFindingSessionState:(long long)arg2;
- (void)device:(TVRCDevice *)arg1 updatedNowPlayingInfo:(TVRCNowPlayingInfo *)arg2;
- (void)device:(TVRCDevice *)arg1 supportsFindMyRemote:(_Bool)arg2;
- (void)device:(TVRCDevice *)arg1 removedSupportedButtons:(NSSet *)arg2 added:(NSSet *)arg3;
- (void)deviceNameChanged:(TVRCDevice *)arg1;
- (void)device:(TVRCDevice *)arg1 disconnectedForReason:(long long)arg2 error:(NSError *)arg3;
- (void)deviceConnected:(TVRCDevice *)arg1;
- (void)device:(TVRCDevice *)arg1 encounteredAuthenticationChallenge:(TVRCDeviceAuthenticationChallenge *)arg2;
- (_Bool)deviceShouldAllowConnectionAuthentication:(TVRCDevice *)arg1;
- (void)deviceBeganConnecting:(TVRCDevice *)arg1;
@end


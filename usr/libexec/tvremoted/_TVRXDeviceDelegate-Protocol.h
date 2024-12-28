//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSError, NSSet, TVRCNowPlayingInfo, TVRCSiriRemoteInfo, TVRXDevice, TVRXDeviceAuthenticationChallenge;

@protocol _TVRXDeviceDelegate <NSObject>

@optional
- (void)device:(TVRXDevice *)arg1 supportsFindMyRemote:(_Bool)arg2;
- (void)device:(TVRXDevice *)arg1 updatedNowPlayingInfo:(TVRCNowPlayingInfo *)arg2;
- (void)device:(TVRXDevice *)arg1 updatedPairedRemoteInfo:(TVRCSiriRemoteInfo *)arg2;
- (void)device:(TVRXDevice *)arg1 updatedSiriRemoteFindingState:(long long)arg2;
- (void)device:(TVRXDevice *)arg1 updatedAttentionState:(long long)arg2;
- (void)device:(TVRXDevice *)arg1 updatedSupportedButtons:(NSSet *)arg2;
- (void)deviceNameChanged:(TVRXDevice *)arg1;
- (void)device:(TVRXDevice *)arg1 disconnectedForReason:(long long)arg2 error:(NSError *)arg3;
- (void)deviceConnected:(TVRXDevice *)arg1;
- (void)device:(TVRXDevice *)arg1 encounteredAuthenticationChallenge:(TVRXDeviceAuthenticationChallenge *)arg2;
- (_Bool)deviceShouldAllowConnectionAuthentication:(TVRXDevice *)arg1;
- (void)deviceBeganConnecting:(TVRXDevice *)arg1;
@end

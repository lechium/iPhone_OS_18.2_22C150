//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/AVCVideoStreamDelegate-Protocol.h>

@class NSData, NSDictionary, NSError;
@protocol HMDAVCVideoStream;

@protocol HMDAVCVideoStreamDelegate <AVCVideoStreamDelegate>
- (void)streamDidServerDie:(id <HMDAVCVideoStream>)arg1;
- (void)streamDidRTCPTimeOut:(id <HMDAVCVideoStream>)arg1;
- (void)streamDidRTPTimeOut:(id <HMDAVCVideoStream>)arg1;
- (void)streamDidStop:(id <HMDAVCVideoStream>)arg1;
- (void)stream:(id <HMDAVCVideoStream>)arg1 didGetLastDecodedFrame:(NSData *)arg2;
- (void)stream:(id <HMDAVCVideoStream>)arg1 downlinkQualityDidChange:(NSDictionary *)arg2;
- (void)stream:(id <HMDAVCVideoStream>)arg1 didUpdateVideoConfiguration:(_Bool)arg2 error:(NSError *)arg3;
- (void)stream:(id <HMDAVCVideoStream>)arg1 didStart:(_Bool)arg2 error:(NSError *)arg3;
@end

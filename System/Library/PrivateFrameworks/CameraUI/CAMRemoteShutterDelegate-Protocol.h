//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMRemoteShutterController;

@protocol CAMRemoteShutterDelegate <NSObject>
- (_Bool)remoteShutterShouldSuspendApp:(CAMRemoteShutterController *)arg1;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setCaptureDevice:(long long)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setZoomFactor:(double)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setZoomAmount:(double)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setSharedLibraryMode:(long long)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setIrisMode:(long long)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setHDRMode:(long long)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setFlashMode:(long long)arg2;
- (_Bool)remoteShutterStopCapture:(CAMRemoteShutterController *)arg1;
- (_Bool)remoteShutterResumeCapture:(CAMRemoteShutterController *)arg1;
- (_Bool)remoteShutterPauseCapture:(CAMRemoteShutterController *)arg1;
- (_Bool)remoteShutterStartCapture:(CAMRemoteShutterController *)arg1;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 focusOn:(struct CGPoint)arg2;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 setMode:(long long)arg2;
- (_Bool)remoteShutterEndBurstCapture:(CAMRemoteShutterController *)arg1;
- (_Bool)remoteShutterBeginBurstCapture:(CAMRemoteShutterController *)arg1;
- (void)remoteShutterCancelCountdown:(CAMRemoteShutterController *)arg1;
- (void)remoteShutter:(CAMRemoteShutterController *)arg1 takePhotoWithCountdown:(unsigned long long)arg2;
@end


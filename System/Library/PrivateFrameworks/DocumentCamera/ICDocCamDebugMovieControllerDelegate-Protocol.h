//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DocumentCamera/NSObject-Protocol.h>

@class AVCaptureVideoPreviewLayer, NSError, NSString;

@protocol ICDocCamDebugMovieControllerDelegate <NSObject>
- (void)changeRecordButtonTitle:(NSString *)arg1;
- (void)enableRecordButton:(_Bool)arg1;
- (void)resumeCaptureSessionForMovieRecording;
- (void)pauseCaptureSessionForMovieRecording;
- (void)showErrorForMovieRecording:(NSError *)arg1;
- (AVCaptureVideoPreviewLayer *)videoPreviewLayer;
- (long long)statusBarOrientation;
- (void)enableUIElementsForMovieRecording:(_Bool)arg1;
@end


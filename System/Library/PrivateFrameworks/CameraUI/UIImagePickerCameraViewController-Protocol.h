//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/NSObject-Protocol.h>

@class NSDictionary, UIView;

@protocol UIImagePickerCameraViewController <NSObject>
- (void)_stopVideoCapture;
- (_Bool)_startVideoCapture;
- (void)_setCameraFlashMode:(long long)arg1;
- (long long)_cameraFlashMode;
- (void)_setCameraCaptureMode:(long long)arg1;
- (long long)_cameraCaptureMode;
- (void)_setCameraDevice:(long long)arg1;
- (long long)_cameraDevice;
- (void)_takePicture;
- (void)_setCameraViewTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)_cameraViewTransform;
- (void)_setCameraOverlayView:(UIView *)arg1;
- (UIView *)_cameraOverlayView;
- (void)_setShowsCameraControls:(_Bool)arg1;
- (_Bool)_showsCameraControls;
- (id)initWithInitialImagePickerProperties:(NSDictionary *)arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMFullscreenViewfinder, NSArray, UIView, UIViewController;
@protocol CEKCaptureStyle;

@protocol CAMFullscreenViewfinderDelegate <NSObject>
- (void)fullscreenViewfinderDidCreateSpotlightSmartStyleStatusIndicator:(CAMFullscreenViewfinder *)arg1;
- (void)addChildViewController:(UIViewController *)arg1 toView:(UIView *)arg2;
- (void)fullscreenViewfinderDidChangeSelectedSmartStyle:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinder:(CAMFullscreenViewfinder *)arg1 didChangeSmartStyleControlsVisibility:(_Bool)arg2 animated:(_Bool)arg3;
- (void)fullscreenViewfinderDidCreateSmartStyleControls:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinderDidCreateExternalStorageButton:(CAMFullscreenViewfinder *)arg1;
- (_Bool)fullscreenViewfinderCanUpdatePreviewSemanticStyles:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewFinder:(CAMFullscreenViewfinder *)arg1 willDismissControlDrawerModallyForControlType:(long long)arg2 reason:(long long)arg3;
- (void)fullscreenViewFinder:(CAMFullscreenViewfinder *)arg1 willPresentControlDrawerModallyForControlType:(long long)arg2 reason:(long long)arg3;
- (void)fullscreenViewfinder:(CAMFullscreenViewfinder *)arg1 didChangeExpanded:(_Bool)arg2 forDrawerControlOfType:(long long)arg3 animated:(_Bool)arg4 updatePreferredDrawerControl:(_Bool)arg5;
- (void)fullscreenViewfinder:(CAMFullscreenViewfinder *)arg1 didChangeControlDrawerVisibility:(_Bool)arg2 animated:(_Bool)arg3 forReason:(long long)arg4;
- (long long)expandedControlTypeForExpandingDrawerInFullscreenViewfinder:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinder:(CAMFullscreenViewfinder *)arg1 didCreateInstructionLabel:(long long)arg2;
- (void)fullscreenViewfinderDidChangeSemanticStyle:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinderDidCreateSemanticStyleControls:(CAMFullscreenViewfinder *)arg1;
- (id <CEKCaptureStyle>)fullscreenViewfinderSelectedSemanticStyle:(CAMFullscreenViewfinder *)arg1;
- (NSArray *)fullscreenViewfinderSemanticStyleList:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinderDidCreateSpatialCaptureButton:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinderDidCreatePortraitControls:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinderDidCreateDepthEffectSuggestionButton:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinderDidCreateAutoMacroButton:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinderDidCreateSpotlightControlPanel:(CAMFullscreenViewfinder *)arg1;
- (void)fullscreenViewfinderDidCreateControlDrawer:(CAMFullscreenViewfinder *)arg1;
@end


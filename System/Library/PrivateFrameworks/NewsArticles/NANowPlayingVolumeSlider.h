//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, NSString, UIWindowScene;

__attribute__((visibility("hidden")))
@interface NANowPlayingVolumeSlider : UIView
{
    MISSING_TYPE *volumeController;	// 8 = 0x8
    MISSING_TYPE *isTracking;	// 16 = 0x10
    MISSING_TYPE *volumeCommitTimer;	// 24 = 0x18
    MISSING_TYPE *slider;	// 32 = 0x20
    MISSING_TYPE *trackingColor;	// 40 = 0x28
    MISSING_TYPE *volumeChangeHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000fe2e0
- (void)didMoveToWindow;	// IMP=0x00000000000fe280
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fe1b0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000fe180
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x00000000000fe3c0
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;	// IMP=0x00000000000fe370
- (_Bool)isOnScreenForVolumeDisplay;	// IMP=0x00000000000fe580
@property(nonatomic, readonly) NSString *volumeAudioCategory;
@property(nonatomic, readonly) UIWindowScene *windowSceneForVolumeDisplay;
- (void)accessibilityDecrement;	// IMP=0x00000000000fe760
- (void)accessibilityIncrement;	// IMP=0x00000000000fe730
@property(nonatomic) struct CGPoint accessibilityActivationPoint;
@property(nonatomic, copy) NSString *accessibilityValue;

// Remaining properties
@property(nonatomic, readonly) _Bool onScreenForVolumeDisplay;

@end


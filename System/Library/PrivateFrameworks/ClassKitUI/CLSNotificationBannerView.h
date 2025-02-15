//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIStackView;

@interface CLSNotificationBannerView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_messageLabel;	// 24 = 0x18
    UIStackView *_labelsStackView;	// 32 = 0x20
    double _preferredWidthPad;	// 40 = 0x28
    double _duration;	// 48 = 0x30
    CDUnknownBlockType _completionHandler;	// 56 = 0x38
}

+ (id)bundle;	// IMP=0x0060000000002717
+ (id)bannerMessageAttributes;	// IMP=0x00600000000025a6
+ (id)bannerTitleAttributes;	// IMP=0x0060000000002435
+ (_Bool)_preventsAppearanceProxyCustomization;	// IMP=0x006000000000242d
- (void).cxx_destruct;	// IMP=0x0000000000003938
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double preferredWidthPad; // @synthesize preferredWidthPad=_preferredWidthPad;
@property(retain, nonatomic) UIStackView *labelsStackView; // @synthesize labelsStackView=_labelsStackView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)callCompletionHandler;	// IMP=0x00000000000037ff
- (void)hideBanner;	// IMP=0x00000000000037ae
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003779
- (void)applyConstraints;	// IMP=0x000000000000303c
- (id)initWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x0000000000002f75
- (id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3;	// IMP=0x0000000000002e6b
- (id)initWithTitle:(id)arg1 imageView:(id)arg2 message:(id)arg3;	// IMP=0x0000000000002795

@end


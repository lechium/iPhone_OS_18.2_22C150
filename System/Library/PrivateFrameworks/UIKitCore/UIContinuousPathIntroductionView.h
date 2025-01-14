//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerLayer, AVPlayerLooper, AVQueuePlayer, NSArray, NSLayoutConstraint, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface UIContinuousPathIntroductionView
{
    struct CGSize _videoSize;	// 8 = 0x8
    double _textMargin;	// 24 = 0x18
    double _paddingAdjust;	// 32 = 0x20
    AVPlayerLooper *_playerLooper;	// 40 = 0x28
    AVQueuePlayer *_player;	// 48 = 0x30
    UIView *_textVideoContainer;	// 56 = 0x38
    UILabel *_landscapeTextBody;	// 64 = 0x40
    UIView *_keyboardView;	// 72 = 0x48
    UIButton *_landscapeButton;	// 80 = 0x50
    NSArray *_portraitConstraints;	// 88 = 0x58
    NSArray *_landscapeConstraints;	// 96 = 0x60
    AVPlayerLayer *_videoLayer;	// 104 = 0x68
    NSLayoutConstraint *_videoWidth;	// 112 = 0x70
    NSLayoutConstraint *_videoHeight;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000002ae8c2
@property(retain, nonatomic) NSLayoutConstraint *videoHeight; // @synthesize videoHeight=_videoHeight;
@property(retain, nonatomic) NSLayoutConstraint *videoWidth; // @synthesize videoWidth=_videoWidth;
@property(retain, nonatomic) AVPlayerLayer *videoLayer; // @synthesize videoLayer=_videoLayer;
@property(retain, nonatomic) NSArray *landscapeConstraints; // @synthesize landscapeConstraints=_landscapeConstraints;
@property(retain, nonatomic) NSArray *portraitConstraints; // @synthesize portraitConstraints=_portraitConstraints;
@property(retain, nonatomic) UIButton *landscapeButton; // @synthesize landscapeButton=_landscapeButton;
@property(retain, nonatomic) UIView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(retain, nonatomic) UILabel *landscapeTextBody; // @synthesize landscapeTextBody=_landscapeTextBody;
@property(retain, nonatomic) UIView *textVideoContainer; // @synthesize textVideoContainer=_textVideoContainer;
- (void)extraButtonTapAction;	// IMP=0x00000000002ae69b
- (void)removeFromSuperview;	// IMP=0x00000000002ae635
- (long long)textBodyMaxLines;	// IMP=0x00000000002ae62a
- (double)mediaLayoutWidthAdjustment;	// IMP=0x00000000002ae56f
- (id)textBodyDescriptions;	// IMP=0x00000000002ae483
- (id)textTitleDescriptions;	// IMP=0x00000000002ae476
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000002ae06b
- (void)updateVideoLayerWithNewVideo:(_Bool)arg1;	// IMP=0x00000000002ada2c
- (id)mediaContents;	// IMP=0x00000000002ac261
- (id)_introductionMovieAssetURL;	// IMP=0x00000000002ac1a5
- (void)setupConstraintData;	// IMP=0x00000000002abea3
- (id)initWithKeyboardAppearance:(long long)arg1;	// IMP=0x00000000002abd5c

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class ASCScreenshots, NSMutableArray, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface ASCMiniProductPageMediaView : UIControl
{
    _Bool _showsPlaceholderContent;	// 8 = 0x8
    unsigned long long _maxScreenshotsCount;	// 16 = 0x10
    double _screenshotSpacing;	// 24 = 0x18
    ASCScreenshots *_screenshots;	// 32 = 0x20
    NSMutableArray *_imageViews;	// 40 = 0x28
    UIColor *_placeholderColor;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004d26d
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(nonatomic) _Bool showsPlaceholderContent; // @synthesize showsPlaceholderContent=_showsPlaceholderContent;
@property(readonly, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(copy, nonatomic) ASCScreenshots *screenshots; // @synthesize screenshots=_screenshots;
@property(nonatomic) double screenshotSpacing; // @synthesize screenshotSpacing=_screenshotSpacing;
@property(nonatomic) unsigned long long maxScreenshotsCount; // @synthesize maxScreenshotsCount=_maxScreenshotsCount;
- (void)updateImageViews;	// IMP=0x000000000004cc3f
- (double)widthOfScreenshotCount:(unsigned long long)arg1;	// IMP=0x000000000004cba9
- (id)preferredScreenshotDisplayConfiguration;	// IMP=0x000000000004cab1
- (double)firstScreenshotVerticalFraction;	// IMP=0x000000000004c90b
- (struct CGSize)screenshotSizeForBoundingSize:(struct CGSize)arg1;	// IMP=0x000000000004c805
@property(readonly, nonatomic) struct CGSize preferredScreenshotSize;
- (_Bool)shouldPeekNextScreenshot;	// IMP=0x000000000004c6a6
- (unsigned long long)actualScreenshotCount;	// IMP=0x000000000004c5bf
- (unsigned long long)preferredScreenshotCount;	// IMP=0x000000000004c4b4
- (void)layoutSubviews;	// IMP=0x000000000004c169
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000004c120
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000004c0fb
- (void)setVideoView:(id)arg1;	// IMP=0x000000000004bfd8
- (void)setScreenshots:(id)arg1 andTrailers:(id)arg2;	// IMP=0x000000000004bf23
- (void)setImage:(id)arg1 atIndex:(long long)arg2;	// IMP=0x000000000004be54
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004be3f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004be14
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004bd65

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class ASCScreenshots, ASCTrailers, ASCVideoView, NSArray, NSMutableArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface ASCLockupMediaView : UIControl
{
    _Bool _videoLoopingEnabled;	// 8 = 0x8
    _Bool _videoMuted;	// 9 = 0x9
    ASCVideoView *_videoView;	// 16 = 0x10
    NSString *_context;	// 24 = 0x18
    unsigned long long _numberOfViews;	// 32 = 0x20
    ASCScreenshots *_screenshots;	// 40 = 0x28
    ASCTrailers *_trailers;	// 48 = 0x30
    NSMutableArray *_imageViews;	// 56 = 0x38
    UIView *_containerView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000038773
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(copy, nonatomic) ASCTrailers *trailers; // @synthesize trailers=_trailers;
@property(copy, nonatomic) ASCScreenshots *screenshots; // @synthesize screenshots=_screenshots;
@property(nonatomic) unsigned long long numberOfViews; // @synthesize numberOfViews=_numberOfViews;
@property(nonatomic, getter=isVideoMuted) _Bool videoMuted; // @synthesize videoMuted=_videoMuted;
@property(nonatomic, getter=isVideoLoopingEnabled) _Bool videoLoopingEnabled; // @synthesize videoLoopingEnabled=_videoLoopingEnabled;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) ASCVideoView *videoView; // @synthesize videoView=_videoView;
- (id)accessibilityElements;	// IMP=0x00000000000382b0
- (void)setImage:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000037d44
- (void)setScreenshots:(id)arg1 andTrailers:(id)arg2;	// IMP=0x0000000000037b7f
- (void)prepareForReuse;	// IMP=0x00000000000379b0
- (void)updateImageViews;	// IMP=0x0000000000037695
- (unsigned long long)numberOfImageViews;	// IMP=0x000000000003762c
- (struct UIEdgeInsets)layoutMarginsForCurrentContext;	// IMP=0x0000000000037596
- (void)layoutSubviews;	// IMP=0x000000000003730a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000371b6
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000003716d
- (void)invalidateIntrinsicContentSize;	// IMP=0x00000000000370ec
- (struct CGSize)estimatedMediaContentSize;	// IMP=0x0000000000036fdb
- (id)makeSizingLayout;	// IMP=0x0000000000036ecf
- (id)makeLayout;	// IMP=0x0000000000036dc3
- (void)layoutMarginsDidChange;	// IMP=0x0000000000036d5b
@property(readonly, nonatomic) NSArray *mediaViews;
@property(readonly, nonatomic) struct CGSize preferredScreenshotSize;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000367f5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000367ca
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000036639

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


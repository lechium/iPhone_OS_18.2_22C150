//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, UIImage;

@interface _TtC16LinkPresentation19LPAnimationMaskView : UIView
{
    MISSING_TYPE *imageView;	// 8 = 0x8
    MISSING_TYPE *animationOrigin;	// 16 = 0x10
    MISSING_TYPE *image;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001282e0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000128220
- (void)layoutSubviews;	// IMP=0x00000000001280d0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000127e00
- (id)init;	// IMP=0x0000000000127d60
@property(nonatomic, retain) UIImage *image; // @synthesize image;
@property(nonatomic) long long animationOrigin; // @synthesize animationOrigin;
@property(nonatomic, readonly) UIView *imageView; // @synthesize imageView;

@end

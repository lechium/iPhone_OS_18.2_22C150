//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, NSString;

@interface _TtC16HealthArticlesUI9VideoView : UIView
{
    MISSING_TYPE *videoPlayer;	// 8 = 0x8
    MISSING_TYPE *playWhenVisible;	// 48 = 0x30
    MISSING_TYPE *playMode;	// 56 = 0x38
    MISSING_TYPE *primaryPlayerAsset;	// 72 = 0x48
    MISSING_TYPE *primaryPlayerItem;	// 80 = 0x50
    MISSING_TYPE *playerLooper;	// 88 = 0x58
    MISSING_TYPE *accessibilityVideoDescription;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_captionLabel;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000021470
- (void)nonLoopingEndOfPlay:(id)arg1;	// IMP=0x00000000000213a0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e320
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001e2f0
@property(nonatomic, copy) NSString *accessibilityVideoDescription;

@end


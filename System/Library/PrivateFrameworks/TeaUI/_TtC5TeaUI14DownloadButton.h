//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC5TeaUI14DownloadButton
{
    MISSING_TYPE *handler;	// 40 = 0x28
    MISSING_TYPE *delegate;	// 56 = 0x38
    MISSING_TYPE *dataProvider;	// 72 = 0x48
    MISSING_TYPE *imageTintColor;	// 88 = 0x58
    MISSING_TYPE *progressTintColor;	// 96 = 0x60
    MISSING_TYPE *trackTintColor;	// 104 = 0x68
    MISSING_TYPE *downloadingImage;	// 112 = 0x70
    MISSING_TYPE *notDownloadingImage;	// 120 = 0x78
    MISSING_TYPE *progressBackgroundLayer;	// 128 = 0x80
    MISSING_TYPE *progressLayer;	// 136 = 0x88
    MISSING_TYPE *buttonState;	// 144 = 0x90
    MISSING_TYPE *downloadProgressDisposable;	// 152 = 0x98
    MISSING_TYPE *downloadStateDisposable;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000002ba32f
- (void)startingButtonTappedWithSender:(id)arg1;	// IMP=0x00000000002ba1f8
- (void)tintColorDidChange;	// IMP=0x00000000002ba1d3
- (void)layoutSubviews;	// IMP=0x00000000002ba17c
- (_Bool)accessibilityActivate;	// IMP=0x00000000002b9e88
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002b9b2b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002b98a8
- (id)init;	// IMP=0x00000000002b9185

@end


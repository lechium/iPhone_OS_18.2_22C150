//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface PUAvalancheStackView : UIView
{
    CALayer *_imageLayer;	// 8 = 0x8
    CALayer *_stackLayer0;	// 16 = 0x10
    CALayer *_stackLayer1;	// 24 = 0x18
    long long _contentMode;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004d25f2
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) CALayer *stackLayer1; // @synthesize stackLayer1=_stackLayer1;
@property(retain, nonatomic) CALayer *stackLayer0; // @synthesize stackLayer0=_stackLayer0;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
- (struct CGRect)_imageContentFrame;	// IMP=0x00000000004d2353
- (void)layoutSubviews;	// IMP=0x00000000004d20e3
- (void)setImage:(id)arg1;	// IMP=0x00000000004d1f56
- (id)init;	// IMP=0x00000000004d1b10

@end


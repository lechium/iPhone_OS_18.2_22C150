//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIImageView.h>

@class UIGraphicsImageRenderer;

__attribute__((visibility("hidden")))
@interface _HKGraphViewOverlayView : UIImageView
{
    UIGraphicsImageRenderer *_imageRenderer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000086649
@property(retain, nonatomic) UIGraphicsImageRenderer *imageRenderer; // @synthesize imageRenderer=_imageRenderer;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000865c7
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000008656e
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000086515
- (void)drawContentUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000086389
- (void)_updateRendererSize:(struct CGSize)arg1;	// IMP=0x000000000008631f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000008627c

@end


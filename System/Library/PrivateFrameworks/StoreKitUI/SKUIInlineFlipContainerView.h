//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface SKUIInlineFlipContainerView : UIView
{
    UIView *_backView;	// 8 = 0x8
    UIView *_frontView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002f9f81
- (void)flipToBackViewWithDuration:(double)arg1 options:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000002f9d4d
- (id)initWithFrontView:(id)arg1 backView:(id)arg2;	// IMP=0x00000000002f9a78

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface QLRoundProgressView : UIView
{
}

+ (Class)layerClass;	// IMP=0x006000000004f083
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x000000000004f2ea
@property(nonatomic) double progress;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;	// IMP=0x000000000004f0a8
- (void)didMoveToWindow;	// IMP=0x000000000004efba
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004ef17

@end


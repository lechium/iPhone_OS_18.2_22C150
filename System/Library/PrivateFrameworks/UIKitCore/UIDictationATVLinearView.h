//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIDictationView.h"

@class UIKBRenderConfig;

__attribute__((visibility("hidden")))
@interface UIDictationATVLinearView : UIDictationView
{
    UIKBRenderConfig *_renderConfig;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000f92104
- (_Bool)isShowing;	// IMP=0x0000000000f920d1
- (void)finishReturnToKeyboard;	// IMP=0x0000000000f920cb
- (void)returnToKeyboard;	// IMP=0x0000000000f92050
- (void)removeFromSuperview;	// IMP=0x0000000000f91fd6
- (void)layoutSubviews;	// IMP=0x0000000000f91ece
- (void)setState:(int)arg1;	// IMP=0x0000000000f91ce4
- (_Bool)drawsOwnBackground;	// IMP=0x0000000000f91cdc
- (void)_applyRenderConfig:(id)arg1;	// IMP=0x0000000000f91bf1
- (void)setRenderConfig:(id)arg1;	// IMP=0x0000000000f91b97

@end


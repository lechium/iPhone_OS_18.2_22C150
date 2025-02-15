//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIStatusBar_Base.h"

__attribute__((visibility("hidden")))
@interface UIStatusBar_Placeholder : UIStatusBar_Base
{
}

+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(_Bool)arg3 inWindow:(id)arg4 isAzulBLinked:(_Bool)arg5;	// IMP=0x00800000015394c5
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000001539948
- (void)_setHidden:(_Bool)arg1 animationParameters:(id)arg2;	// IMP=0x00000000015398b8
- (double)defaultDoubleHeight;	// IMP=0x00000000015398af
- (long long)currentStyle;	// IMP=0x0000000001539874
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;	// IMP=0x00000000015397b3
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;	// IMP=0x00000000015396f5
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;	// IMP=0x0000000001539610
- (void)_requestStyle:(long long)arg1 partStyles:(id)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 animationParameters:(id)arg5 forced:(_Bool)arg6;	// IMP=0x00000000015395a4
- (id)_initWithFrame:(struct CGRect)arg1 showForegroundView:(_Bool)arg2 wantsServer:(_Bool)arg3 inProcessStateProvider:(id)arg4;	// IMP=0x000000000153937f

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewAnimationState.h"

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCE5UIKitCSo6UIView23InProcessAnimationState : UIViewAnimationState
{
    MISSING_TYPE *updateType;	// 8 = 0x8
    MISSING_TYPE *animationAndComposerGetter;	// 16 = 0x10
    MISSING_TYPE *isInteractive;	// 56 = 0x38
    MISSING_TYPE *retargeted;	// 57 = 0x39
}

- (void).cxx_destruct;	// IMP=0x0000000000094080
@property(nonatomic, readonly) _Bool isInProcess;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;	// IMP=0x000000000008e3d0
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000082960
- (_Bool)shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000000082630
- (id)init;	// IMP=0x00000000000825a0

@end

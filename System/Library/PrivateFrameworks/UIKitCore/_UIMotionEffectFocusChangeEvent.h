//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIMotionEffectFocusChangeEvent
{
    struct CGPoint _focusPosition;	// 8 = 0x8
}

@property(readonly, nonatomic) struct CGPoint focusPosition; // @synthesize focusPosition=_focusPosition;
- (double)velocityRelativeToPreviousEvent:(id)arg1;	// IMP=0x00000000011cc793
- (id)copyWithTimestamp:(double)arg1;	// IMP=0x00000000011cc733
- (id)initWithTimestamp:(double)arg1 focusPosition:(struct CGPoint)arg2;	// IMP=0x00000000011cc6d9

@end

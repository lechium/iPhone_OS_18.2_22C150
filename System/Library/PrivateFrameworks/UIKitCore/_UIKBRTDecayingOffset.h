//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIKBRTDecayingOffset
{
    _Bool _limitMovement;	// 40 = 0x28
    struct CGPoint _offset;	// 48 = 0x30
}

@property(readonly, nonatomic) struct CGPoint originalOffset;
@property(readonly, nonatomic) struct CGPoint offset;
- (void)updateOffsetTo:(struct CGPoint)arg1;	// IMP=0x0000000001100b4c
- (void)reset;	// IMP=0x0000000001100b06
- (id)initWithTimeoutDuration:(double)arg1 limitMovement:(_Bool)arg2;	// IMP=0x0000000001100ac4

@end

//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITextFieldPaddedMetricsProvider : NSObject
{
    _Bool _canIntrinsicHeightExceedContentHeight;	// 8 = 0x8
    double _minimumIntrinsicHeight;	// 16 = 0x10
    struct UIEdgeInsets _padding;	// 24 = 0x18
}

@property(nonatomic) _Bool canIntrinsicHeightExceedContentHeight; // @synthesize canIntrinsicHeightExceedContentHeight=_canIntrinsicHeightExceedContentHeight;
@property(nonatomic) double minimumIntrinsicHeight; // @synthesize minimumIntrinsicHeight=_minimumIntrinsicHeight;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) _Bool shouldExtendCaretHeight;
@property(readonly, nonatomic) double naturalHeight;
- (struct CGSize)intrinsicSizeForContentSize:(struct CGSize)arg1;	// IMP=0x0000000000a200e5
- (struct CGRect)contentFrameForBounds:(struct CGRect)arg1;	// IMP=0x0000000000a20038
- (id)initWithPerEdgePadding:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000a1fff1
- (id)initWithSymmetricalPadding:(struct CGSize)arg1;	// IMP=0x0000000000a1ff95
- (id)init;	// IMP=0x0000000000a1ff56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

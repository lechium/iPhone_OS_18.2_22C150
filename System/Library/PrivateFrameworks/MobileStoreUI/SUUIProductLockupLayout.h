//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, SUUIViewElement, SUUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SUUIProductLockupLayout : NSObject
{
    long long _bottomLeftLayoutStyle;	// 8 = 0x8
    NSMutableArray *_bottomLeftViewElements;	// 16 = 0x10
    NSMutableArray *_bottomRightViewElements;	// 24 = 0x18
    SUUIViewElementLayoutContext *_layoutContext;	// 32 = 0x20
    NSMutableArray *_middleLeftViewElements;	// 40 = 0x28
    SUUIViewElement *_productImageElement;	// 48 = 0x30
    NSMutableArray *_topLeftViewElements;	// 56 = 0x38
    NSMutableArray *_topRightViewElements;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000c8a07
@property(readonly, nonatomic) long long bottomLeftLayoutStyle; // @synthesize bottomLeftLayoutStyle=_bottomLeftLayoutStyle;
- (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2;	// IMP=0x00000000000c8973
- (struct CGSize)_sizeForVerticalViewElements:(id)arg1 width:(double)arg2;	// IMP=0x00000000000c8622
- (struct CGSize)_sizeForSegmentedControl:(id)arg1 width:(double)arg2;	// IMP=0x00000000000c8558
- (id)viewElementsForSection:(long long)arg1;	// IMP=0x00000000000c8494
- (double)topPaddingForViewElement:(id)arg1;	// IMP=0x00000000000c824f
- (struct SUUIProductLockupLayoutSizing)sizingToFitWidth:(double)arg1;	// IMP=0x00000000000c7f19
- (double)metadataWidthForWidth:(double)arg1;	// IMP=0x00000000000c7ecc
- (_Bool)hasBottomRightElementWithRightAlignment;	// IMP=0x00000000000c7e22
- (struct SUUIProductLockupLayoutSizing)layoutWidthsForWidth:(double)arg1;	// IMP=0x00000000000c7c7a
- (void)enumerateViewElementsForWidth:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c78ef
- (double)bottomPaddingForViewElement:(id)arg1;	// IMP=0x00000000000c785d
- (id)initWithLockup:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000000c6e50

@end

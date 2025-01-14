//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _HKAnnotationColumnLayout : UIView
{
    _Bool _includeSeparators;	// 8 = 0x8
    _Bool _reverseColumnsInRightToLeftLayoutDirection;	// 9 = 0x9
    long long _context;	// 16 = 0x10
    NSMutableArray *_columnViews;	// 24 = 0x18
    NSMutableArray *_separatorViews;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f92fb
@property(retain, nonatomic) NSMutableArray *separatorViews; // @synthesize separatorViews=_separatorViews;
@property(retain, nonatomic) NSMutableArray *columnViews; // @synthesize columnViews=_columnViews;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) _Bool reverseColumnsInRightToLeftLayoutDirection; // @synthesize reverseColumnsInRightToLeftLayoutDirection=_reverseColumnsInRightToLeftLayoutDirection;
@property(nonatomic) _Bool includeSeparators; // @synthesize includeSeparators=_includeSeparators;
- (id)_makeSeparatorView;	// IMP=0x00000000000f91d8
- (double)_minimumHeight;	// IMP=0x00000000000f904a
- (double)_totalColumnWidth;	// IMP=0x00000000000f8ecc
- (double)_columnSeparation;	// IMP=0x00000000000f8ea4
- (double)_largestColumnWidth;	// IMP=0x00000000000f8d16
- (double)_minimumWidthForPackedLayout;	// IMP=0x00000000000f8c92
- (double)_minimumWithForEqualLayout;	// IMP=0x00000000000f8c05
- (double)_minimumWidth;	// IMP=0x00000000000f8bc5
- (void)_layoutColumnsWithWidth:(double)arg1 columnSeparation:(double)arg2 currentSize:(struct CGSize)arg3;	// IMP=0x00000000000f7e31
- (void)_layoutColumnsPacked;	// IMP=0x00000000000f7dc9
- (void)_layoutColumnsEqually;	// IMP=0x00000000000f7ce9
- (void)_addSeparatorViews;	// IMP=0x00000000000f7c04
- (void)_clearSeparatorViews;	// IMP=0x00000000000f7aa3
- (void)_clearColumnViews;	// IMP=0x00000000000f7942
- (void)_invalidateLayout;	// IMP=0x00000000000f7914
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000f7902
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000f78c0
- (void)layoutSubviews;	// IMP=0x00000000000f7837
- (void)clearViewsFromIndex:(unsigned long long)arg1;	// IMP=0x00000000000f7628
- (void)clearViews;	// IMP=0x00000000000f75fa
- (void)setColumnView:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000f748d
- (void)addColumnView:(id)arg1;	// IMP=0x00000000000f7327
- (id)initWithContext:(long long)arg1;	// IMP=0x00000000000f71e6

@end


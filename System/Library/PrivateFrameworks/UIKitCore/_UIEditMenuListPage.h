//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIEditMenuListPage : NSObject
{
    double _width;	// 8 = 0x8
    double _overlapWidth;	// 16 = 0x10
    double _itemSpacing;	// 24 = 0x18
    long long _numberOfItemsUsingItemSpacing;	// 32 = 0x20
    struct _NSRange _range;	// 40 = 0x28
}

@property(nonatomic) long long numberOfItemsUsingItemSpacing; // @synthesize numberOfItemsUsingItemSpacing=_numberOfItemsUsingItemSpacing;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) double overlapWidth; // @synthesize overlapWidth=_overlapWidth;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000012476d2
- (long long)_resolvedNumberOfPagesForItemSpacing;	// IMP=0x0000000001247692
- (id)description;	// IMP=0x00000000012475d8
- (void)enforceMinimumWidth:(double)arg1;	// IMP=0x00000000012475ab
- (void)removeLastItemWithWidth:(double)arg1;	// IMP=0x0000000001247593
- (void)prependItemWithWidth:(double)arg1;	// IMP=0x000000000124757d
- (void)appendItemWithWidth:(double)arg1;	// IMP=0x0000000001247569
@property(readonly, nonatomic) double width; // @synthesize width=_width;
- (id)initWithStartIndex:(long long)arg1;	// IMP=0x00000000012474ca

@end

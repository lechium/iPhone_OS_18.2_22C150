//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface AKShapesPicker
{
    NSArray *_shapes;	// 8 = 0x8
    long long _style;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000445d2
@property long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSArray *shapes; // @synthesize shapes=_shapes;
- (void)layoutSubviews;	// IMP=0x000000000004455e
- (void)_updateCurrentAppearanceIfNeeded;	// IMP=0x00000000000444db
- (void)_shapeButtonPressed:(id)arg1;	// IMP=0x00000000000444a7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000044425
- (id)initWithFrame:(struct CGRect)arg1 shapeTags:(id)arg2;	// IMP=0x0000000000043dcd

@end

//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UICellSpacingAccessory
{
    struct CGSize _size;	// 40 = 0x28
}

+ (id)accessoryWithIdentifier:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00600000015b1354
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)view;	// IMP=0x00000000015b145f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000015b1447
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000015b13b8

@end

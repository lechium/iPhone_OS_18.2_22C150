//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface AKFillableShapeStylePicker
{
    NSArray *_buttons;	// 8 = 0x8
    _Bool _showFill;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000041221
@property(nonatomic) _Bool showFill; // @synthesize showFill=_showFill;
- (void)_updateImagesForAnnotationType:(id)arg1;	// IMP=0x000000000004084e
- (void)revalidateItems:(id)arg1;	// IMP=0x00000000000402c7
- (void)_styleButtonPressed:(id)arg1;	// IMP=0x0000000000040293
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;	// IMP=0x000000000003fde8

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class MISSING_TYPE;

@interface _TtC5TeaUI17PaddedShapeButton : UIButton
{
    MISSING_TYPE *contentOffset;	// 8 = 0x8
    MISSING_TYPE *onTap;	// 24 = 0x18
    MISSING_TYPE *onMenuPresentation;	// 32 = 0x20
    MISSING_TYPE *_backgroundColor;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000010fc56
@property(nonatomic) _Bool enabled;
- (_Bool)isEnabled;	// IMP=0x000000000010fae2
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;	// IMP=0x000000000010f7d3
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000010f782
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010f6e5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000010f5ea
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIImageView.h>

@class MISSING_TYPE;

@interface _TtC19HealthVisualization16DiagramImageView : UIImageView
{
    MISSING_TYPE *imageRenderer;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *lastUsedTransformer;	// 32 = 0x20
    MISSING_TYPE *lastUsedModelSpace;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000044730
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;	// IMP=0x00000000000446c0
- (id)initWithImage:(id)arg1;	// IMP=0x0000000000044610
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000043340
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000042ec0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000042d50
@property(nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGRect frame;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIColor, UIImageView;
@protocol SCATGridDelegate;

@interface SCATGridView : UIView
{
    UIImageView *_centerPoint;	// 8 = 0x8
    _Bool _showsTopBorder;	// 16 = 0x10
    _Bool _showsLeftBorder;	// 17 = 0x11
    _Bool _showsBottomBorder;	// 18 = 0x12
    _Bool _showsRightBorder;	// 19 = 0x13
    _Bool _centerPointVisible;	// 20 = 0x14
    _Bool _shouldIncludeCenterPoint;	// 21 = 0x15
    _Bool _shouldShowGridBorder;	// 22 = 0x16
    id <SCATGridDelegate> _delegate;	// 24 = 0x18
    unsigned long long _numberOfRows;	// 32 = 0x20
    unsigned long long _numberOfColumns;	// 40 = 0x28
    double _lineThickness;	// 48 = 0x30
    UIColor *_lineColor;	// 56 = 0x38
    UIColor *_shadowColor;	// 64 = 0x40
    struct CGSize _shadowOffset;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000085c1c
@property(nonatomic) _Bool shouldShowGridBorder; // @synthesize shouldShowGridBorder=_shouldShowGridBorder;
@property(nonatomic) _Bool shouldIncludeCenterPoint; // @synthesize shouldIncludeCenterPoint=_shouldIncludeCenterPoint;
@property(nonatomic, getter=isCenterPointVisible) _Bool centerPointVisible; // @synthesize centerPointVisible=_centerPointVisible;
@property(nonatomic) _Bool showsRightBorder; // @synthesize showsRightBorder=_showsRightBorder;
@property(nonatomic) _Bool showsBottomBorder; // @synthesize showsBottomBorder=_showsBottomBorder;
@property(nonatomic) _Bool showsLeftBorder; // @synthesize showsLeftBorder=_showsLeftBorder;
@property(nonatomic) _Bool showsTopBorder; // @synthesize showsTopBorder=_showsTopBorder;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double lineThickness; // @synthesize lineThickness=_lineThickness;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) __weak id <SCATGridDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0010000000085a04
- (void)_drawLinesInContext:(struct CGContext *)arg1 forRows:(_Bool)arg2;	// IMP=0x00100000000856f8
- (void)layoutSubviews;	// IMP=0x001000000008535f
- (double)_adjustOriginValue:(double)arg1 forDistance:(double)arg2 maximumEndPosition:(double)arg3;	// IMP=0x0010000000085331
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000851f4

@end


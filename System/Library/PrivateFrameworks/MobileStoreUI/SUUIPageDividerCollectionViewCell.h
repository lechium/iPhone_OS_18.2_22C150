//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface SUUIPageDividerCollectionViewCell : UICollectionViewCell
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    UIView *_topDividerLine;	// 40 = 0x28
    UIView *_bottomDividerLine;	// 48 = 0x30
    double _dividerHeight;	// 56 = 0x38
    long long _dividerType;	// 64 = 0x40
    UIView *_insetView;	// 72 = 0x48
    UIColor *_insetColor;	// 80 = 0x50
    double _leftEdgeInset;	// 88 = 0x58
    double _rightEdgeInset;	// 96 = 0x60
    long long _verticalAlignment;	// 104 = 0x68
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000000cc9cc
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000000cc9c6
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000000cc933
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000000cc92b
- (void).cxx_destruct;	// IMP=0x00000000000cd666
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) double rightEdgeInset; // @synthesize rightEdgeInset=_rightEdgeInset;
@property(nonatomic) double leftEdgeInset; // @synthesize leftEdgeInset=_leftEdgeInset;
@property(nonatomic) long long dividerType; // @synthesize dividerType=_dividerType;
@property(nonatomic) double dividerHeight; // @synthesize dividerHeight=_dividerHeight;
- (void)layoutSubviews;	// IMP=0x00000000000cd235
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000000000cd1a4
- (void)setInsetColor:(id)arg1;	// IMP=0x00000000000cd054
- (void)setColoringWithStyle:(id)arg1;	// IMP=0x00000000000cccdc
- (void)setColoringWithColorScheme:(id)arg1;	// IMP=0x00000000000ccbb5
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000000ccbad
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000ccba5
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000000ccb9d
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000000ccb45
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000000ccb3f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000cc82b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

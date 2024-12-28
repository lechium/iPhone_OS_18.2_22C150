//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MultilineWrappingListView, NSArray, NSLayoutConstraint, UIColor, UIImage;

@interface TransitArtworkListView : UIView
{
    struct CGSize _lastSize;	// 8 = 0x8
    NSArray *_artworkImageViews;	// 24 = 0x18
    NSArray *_arrowImageViews;	// 32 = 0x20
    MultilineWrappingListView *_multilineWrappingStackView;	// 40 = 0x28
    NSLayoutConstraint *_maxWidthConstraint;	// 48 = 0x30
    float _verticalContentHuggingPriority;	// 56 = 0x38
    float _verticalContentCompressionResistancePriority;	// 60 = 0x3c
    UIImage *_arrowImage;	// 64 = 0x40
    UIImage *_incidentBadgeImage;	// 72 = 0x48
    long long _shieldSize;	// 80 = 0x50
    unsigned long long _separatorStyle;	// 88 = 0x58
    NSArray *_artworkData;	// 96 = 0x60
    UIColor *_overrideTintColor;	// 104 = 0x68
    double _maxWidth;	// 112 = 0x70
}

+ (double)transitArtworkListHeight;	// IMP=0x0040000000a35620
+ (CDStruct_7660b417)_metricsForIdiom:(long long)arg1;	// IMP=0x0010000000a32bd4
- (void).cxx_destruct;	// IMP=0x0020000000a3574a
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) float verticalContentCompressionResistancePriority; // @synthesize verticalContentCompressionResistancePriority=_verticalContentCompressionResistancePriority;
@property(nonatomic) float verticalContentHuggingPriority; // @synthesize verticalContentHuggingPriority=_verticalContentHuggingPriority;
@property(retain, nonatomic) UIColor *overrideTintColor; // @synthesize overrideTintColor=_overrideTintColor;
@property(retain, nonatomic) NSArray *artworkData; // @synthesize artworkData=_artworkData;
@property(nonatomic) unsigned long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(nonatomic) long long shieldSize; // @synthesize shieldSize=_shieldSize;
@property(readonly, nonatomic) UIImage *incidentBadgeImage; // @synthesize incidentBadgeImage=_incidentBadgeImage;
@property(readonly, nonatomic) double singleLineWidth;
@property(readonly, nonatomic) unsigned long long numberOfLines;
- (id)_createSizeConstraintsForArtworkViews:(id)arg1;	// IMP=0x0010000000a34df9
- (void)_configureContainerWithBackgroundIfNeeded:(id)arg1 constraints:(id)arg2;	// IMP=0x0010000000a34c63
@property(readonly, nonatomic) UIImage *arrowImage; // @synthesize arrowImage=_arrowImage;
- (id)_arrowImageView;	// IMP=0x0010000000a34a55
- (id)_segmentContainer;	// IMP=0x0010000000a349aa
- (id)_addViewForArtwork:(id)arg1 inContainer:(id)arg2 constraints:(id)arg3 previousViewInSegment:(id)arg4 leadingSpacing:(double)arg5;	// IMP=0x0010000000a34491
- (void)_createNewMultilineShieldView;	// IMP=0x0010000000a34079
- (void)_updateArtworkImageViewWithArtworks;	// IMP=0x0010000000a3352a
- (void)_updateTintColorForArrowImageView:(id)arg1;	// IMP=0x0010000000a33480
- (void)_updateTintColorForView:(id)arg1;	// IMP=0x0010000000a333c1
- (void)_updateTintColor:(id)arg1;	// IMP=0x0010000000a32ecf
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000a32d64
- (void)layoutSubviews;	// IMP=0x0010000000a32cbf
- (CDStruct_7660b417)_metrics;	// IMP=0x0010000000a32b49
- (void)_commonInit;	// IMP=0x0010000000a32af1
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000a32a93
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000a32a24

@end

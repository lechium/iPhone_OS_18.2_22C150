//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKArtworkImageView, NSLayoutConstraint, UIImageView, UILabel, UITapGestureRecognizer, UIView;
@protocol TransitDirectionsIncidentCellDelegate;

@interface TransitDirectionsIncidentStepView
{
    UILabel *_label;	// 16 = 0x10
    MKArtworkImageView *_imageView;	// 24 = 0x18
    UIView *_backgroundView;	// 32 = 0x20
    UIImageView *_chevronImageView;	// 40 = 0x28
    UITapGestureRecognizer *_tapGesture;	// 48 = 0x30
    NSLayoutConstraint *_artworkShowingLabelConstraint;	// 56 = 0x38
    NSLayoutConstraint *_artworkHiddenLabelConstraint;	// 64 = 0x40
    NSLayoutConstraint *_chevronShowingLabelConstraint;	// 72 = 0x48
    NSLayoutConstraint *_chevronHiddenLabelConstraint;	// 80 = 0x50
    id <TransitDirectionsIncidentCellDelegate> _delegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000004a3cdd
@property(nonatomic) __weak id <TransitDirectionsIncidentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateNavigationStateAlpha:(double)arg1;	// IMP=0x00100000004a3c22
- (void)_tapped;	// IMP=0x00100000004a3b36
- (void)configureWithItem:(id)arg1;	// IMP=0x00100000004a35f4
- (id)_incidentItem;	// IMP=0x00100000004a35a1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000004a2643

@end


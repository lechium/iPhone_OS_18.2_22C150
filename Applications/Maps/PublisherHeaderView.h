//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class ContainerHeaderView, NSLayoutConstraint, NSString, PublisherHeaderViewActionManager, UIImageView;
@protocol GEOCollectionPublisherAttribution, PublisherAnalytics, PublisherHeaderViewDelegate;

@interface PublisherHeaderView : UIView
{
    _Bool _isMarzipan;	// 8 = 0x8
    PublisherHeaderViewActionManager *_actionManager;	// 16 = 0x10
    id <PublisherHeaderViewDelegate> _delegate;	// 24 = 0x18
    id <GEOCollectionPublisherAttribution> _attribution;	// 32 = 0x20
    id <PublisherAnalytics> _analyticsManager;	// 40 = 0x28
    ContainerHeaderView *_publisherHeaderView;	// 48 = 0x30
    UIImageView *_publisherLogoImageView;	// 56 = 0x38
    NSLayoutConstraint *_publisherLogoImageViewTopConstraint;	// 64 = 0x40
    NSLayoutConstraint *_publisherLogoImageViewHeightConstraint;	// 72 = 0x48
    NSLayoutConstraint *_publisherLogoImageViewWidthConstraint;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000003ba318
@property(retain, nonatomic) NSLayoutConstraint *publisherLogoImageViewWidthConstraint; // @synthesize publisherLogoImageViewWidthConstraint=_publisherLogoImageViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *publisherLogoImageViewHeightConstraint; // @synthesize publisherLogoImageViewHeightConstraint=_publisherLogoImageViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *publisherLogoImageViewTopConstraint; // @synthesize publisherLogoImageViewTopConstraint=_publisherLogoImageViewTopConstraint;
@property(nonatomic) _Bool isMarzipan; // @synthesize isMarzipan=_isMarzipan;
@property(retain, nonatomic) UIImageView *publisherLogoImageView; // @synthesize publisherLogoImageView=_publisherLogoImageView;
@property(retain, nonatomic) ContainerHeaderView *publisherHeaderView; // @synthesize publisherHeaderView=_publisherHeaderView;
@property(retain, nonatomic) id <PublisherAnalytics> analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(retain, nonatomic) id <GEOCollectionPublisherAttribution> attribution; // @synthesize attribution=_attribution;
@property(nonatomic) __weak id <PublisherHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PublisherHeaderViewActionManager *actionManager; // @synthesize actionManager=_actionManager;
- (void)headerViewButtonTapped:(id)arg1 buttonType:(unsigned long long)arg2;	// IMP=0x00100000003ba106
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000003ba04a
- (void)setupConstraints;	// IMP=0x00100000003b9808
- (void)setupHeaderContainerView;	// IMP=0x00100000003b94c5
- (void)updateImage;	// IMP=0x00100000003b938c
- (void)setupStackView;	// IMP=0x00100000003b912c
- (void)setupSubviews;	// IMP=0x00100000003b908b
- (double)minimumRequiredHeight;	// IMP=0x00100000003b9062
- (double)maximumRequiredHeight;	// IMP=0x00100000003b9039
- (void)adjustLogoImageViewTopConstraint:(double)arg1;	// IMP=0x00100000003b8fa8
- (void)headerHeightChangedWithNewYOffset:(double)arg1;	// IMP=0x00100000003b8e1b
- (void)resetLogoHeight;	// IMP=0x00100000003b8d44
- (id)initWithDelegate:(id)arg1 usingPublisherAttribution:(id)arg2 usingAnalyticsManager:(id)arg3;	// IMP=0x00100000003b8c28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

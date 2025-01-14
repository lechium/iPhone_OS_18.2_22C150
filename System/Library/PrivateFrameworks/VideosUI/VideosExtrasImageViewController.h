//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MPUContentSizeLayoutConstraint, NSArray, NSAttributedString, NSString, UIActivityIndicatorView, UIImage, UILabel, UIView, VideosExtrasZoomableImageView, VideosExtrasZoomingImageInteractiveTransitionSourceContext;

__attribute__((visibility("hidden")))
@interface VideosExtrasImageViewController : UIViewController
{
    _Bool _allowsPinchingImageForInteractiveZoomingImageTransition;	// 8 = 0x8
    _Bool _overlayHidden;	// 9 = 0x9
    unsigned long long _imageIndex;	// 16 = 0x10
    NSString *_zoomingImageTransitionIdentifier;	// 24 = 0x18
    UIActivityIndicatorView *_activityIndicatorView;	// 32 = 0x20
    VideosExtrasZoomableImageView *_zoomableImageView;	// 40 = 0x28
    NSArray *_gestureRecognizers;	// 48 = 0x30
    VideosExtrasZoomingImageInteractiveTransitionSourceContext *_interactiveTransitionSourceContext;	// 56 = 0x38
    UIView *_textContainmentView;	// 64 = 0x40
    UILabel *_titleLabel;	// 72 = 0x48
    UILabel *_subtitleLabel;	// 80 = 0x50
    UILabel *_descriptionLabel;	// 88 = 0x58
    MPUContentSizeLayoutConstraint *_topLabelConstraint;	// 96 = 0x60
    MPUContentSizeLayoutConstraint *_subtitleLeadingConstraint;	// 104 = 0x68
    MPUContentSizeLayoutConstraint *_descriptionLeadingConstraint;	// 112 = 0x70
    MPUContentSizeLayoutConstraint *_bottomLabelConstraint;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000049d5b
@property(nonatomic) _Bool overlayHidden; // @synthesize overlayHidden=_overlayHidden;
@property(retain, nonatomic) MPUContentSizeLayoutConstraint *bottomLabelConstraint; // @synthesize bottomLabelConstraint=_bottomLabelConstraint;
@property(retain, nonatomic) MPUContentSizeLayoutConstraint *descriptionLeadingConstraint; // @synthesize descriptionLeadingConstraint=_descriptionLeadingConstraint;
@property(retain, nonatomic) MPUContentSizeLayoutConstraint *subtitleLeadingConstraint; // @synthesize subtitleLeadingConstraint=_subtitleLeadingConstraint;
@property(retain, nonatomic) MPUContentSizeLayoutConstraint *topLabelConstraint; // @synthesize topLabelConstraint=_topLabelConstraint;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *textContainmentView; // @synthesize textContainmentView=_textContainmentView;
@property(retain, nonatomic) VideosExtrasZoomingImageInteractiveTransitionSourceContext *interactiveTransitionSourceContext; // @synthesize interactiveTransitionSourceContext=_interactiveTransitionSourceContext;
@property(copy, nonatomic) NSArray *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
@property(retain, nonatomic) VideosExtrasZoomableImageView *zoomableImageView; // @synthesize zoomableImageView=_zoomableImageView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(copy, nonatomic) NSString *zoomingImageTransitionIdentifier; // @synthesize zoomingImageTransitionIdentifier=_zoomingImageTransitionIdentifier;
@property(nonatomic) _Bool allowsPinchingImageForInteractiveZoomingImageTransition; // @synthesize allowsPinchingImageForInteractiveZoomingImageTransition=_allowsPinchingImageForInteractiveZoomingImageTransition;
@property(nonatomic) unsigned long long imageIndex; // @synthesize imageIndex=_imageIndex;
- (void)_handleSingleTap:(id)arg1;	// IMP=0x0000000000049a93
- (void)_handlePinch:(id)arg1;	// IMP=0x000000000004995b
- (void)_handleDoubleTap:(id)arg1;	// IMP=0x0000000000049882
@property(retain, nonatomic) NSAttributedString *descriptionString;
@property(retain, nonatomic) NSAttributedString *subtitleString;
@property(retain, nonatomic) NSAttributedString *titleString;
@property(retain, nonatomic) UIImage *image;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;	// IMP=0x00000000000491f4
- (void)performZoomingImageTransitionWithContext:(id)arg1;	// IMP=0x000000000004918b
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;	// IMP=0x00000000000490e4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000049051
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000004900b
- (void)updateViewConstraints;	// IMP=0x0000000000048614
- (void)viewDidLoad;	// IMP=0x0000000000047c60
- (_Bool)prefersStatusBarHidden;	// IMP=0x0000000000047c1c
- (void)dealloc;	// IMP=0x0000000000047ac2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


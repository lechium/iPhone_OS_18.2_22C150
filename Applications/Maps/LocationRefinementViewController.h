//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKMapCamera, MKMapView, NSArray, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView, UIVisualEffectView;
@protocol LocationRefinementViewControllerDelegate, MKMapViewDelegate;

@interface LocationRefinementViewController
{
    _Bool _needsInitialCameraPosition;	// 8 = 0x8
    _Bool _viewDidLoadComplete;	// 9 = 0x9
    _Bool _visible;	// 10 = 0xa
    id <LocationRefinementViewControllerDelegate> _delegate;	// 16 = 0x10
    MKMapView *_mapView;	// 24 = 0x18
    id <MKMapViewDelegate> _mapViewDelegate;	// 32 = 0x20
    UIView *_instructionsContainer;	// 40 = 0x28
    NSLayoutConstraint *_instructionsContainerBottomConstraint;	// 48 = 0x30
    UILabel *_instructionsLabel;	// 56 = 0x38
    NSArray *_mapViewConstraints;	// 64 = 0x40
    NSString *_instructionsText;	// 72 = 0x48
    NSLayoutConstraint *_userLocationButtonBottomConstraint;	// 80 = 0x50
    UIVisualEffectView *_snapToUserLocationContainerView;	// 88 = 0x58
    MKMapCamera *_initialCamera;	// 96 = 0x60
    UIVisualEffectView *_buttonContainerView;	// 104 = 0x68
    UIButton *_snapToUserLocationButton;	// 112 = 0x70
    unsigned long long _crosshairType;	// 120 = 0x78
    UIImageView *_crosshairImageView;	// 128 = 0x80
    NSLayoutConstraint *_crosshairXConstraint;	// 136 = 0x88
    NSLayoutConstraint *_crosshairYConstraint;	// 144 = 0x90
    double _initialMapViewZoomLevel;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x002000000083e800
@property(nonatomic) double initialMapViewZoomLevel; // @synthesize initialMapViewZoomLevel=_initialMapViewZoomLevel;
@property(retain, nonatomic) NSLayoutConstraint *crosshairYConstraint; // @synthesize crosshairYConstraint=_crosshairYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *crosshairXConstraint; // @synthesize crosshairXConstraint=_crosshairXConstraint;
@property(retain, nonatomic) UIImageView *crosshairImageView; // @synthesize crosshairImageView=_crosshairImageView;
@property(readonly, nonatomic) unsigned long long crosshairType; // @synthesize crosshairType=_crosshairType;
- (void);	// IMP=0x001000000083e75e
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool viewDidLoadComplete; // @synthesize viewDidLoadComplete=_viewDidLoadComplete;
@property(retain, nonatomic) UIButton *snapToUserLocationButton; // @synthesize snapToUserLocationButton=_snapToUserLocationButton;
@property(retain, nonatomic) UIVisualEffectView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(retain, nonatomic) MKMapCamera *initialCamera; // @synthesize initialCamera=_initialCamera;
@property(readonly, nonatomic) UIVisualEffectView *snapToUserLocationContainerView; // @synthesize snapToUserLocationContainerView=_snapToUserLocationContainerView;
@property(readonly, nonatomic) NSLayoutConstraint *userLocationButtonBottomConstraint; // @synthesize userLocationButtonBottomConstraint=_userLocationButtonBottomConstraint;
@property(copy, nonatomic) NSString *instructionsText; // @synthesize instructionsText=_instructionsText;
@property(retain, nonatomic) NSArray *mapViewConstraints; // @synthesize mapViewConstraints=_mapViewConstraints;
@property(readonly, nonatomic) UILabel *instructionsLabel; // @synthesize instructionsLabel=_instructionsLabel;
@property(readonly, nonatomic) NSLayoutConstraint *instructionsContainerBottomConstraint; // @synthesize instructionsContainerBottomConstraint=_instructionsContainerBottomConstraint;
@property(readonly, nonatomic) UIView *instructionsContainer; // @synthesize instructionsContainer=_instructionsContainer;
@property(nonatomic) _Bool needsInitialCameraPosition; // @synthesize needsInitialCameraPosition=_needsInitialCameraPosition;
@property(nonatomic) __weak id <MKMapViewDelegate> mapViewDelegate; // @synthesize mapViewDelegate=_mapViewDelegate;
@property(readonly, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak id <LocationRefinementViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)recenterMapView;	// IMP=0x001000000083e4ac
- (void)updateCrosshairConstraints;	// IMP=0x001000000083e24a
- (void)setSelectedCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;	// IMP=0x001000000083e0b8
@property(nonatomic) struct CLLocationCoordinate2D selectedCoordinate;
- (void)updateLocateMeButtonState;	// IMP=0x001000000083ded0
- (void)locationManagerApprovalDidChange:(id)arg1;	// IMP=0x001000000083debe
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000083de7b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000083ddff
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000083ddbe
- (void)applyInitialZoomLevel;	// IMP=0x001000000083dc9e
- (void)applyInitialCameraPosition;	// IMP=0x001000000083dc19
- (void)viewDidLayoutSubviews;	// IMP=0x001000000083da54
- (id)crosshairImage;	// IMP=0x001000000083da00
- (void)updateTheme;	// IMP=0x001000000083d906
- (void)_contentSizeChanged;	// IMP=0x001000000083d8a1
- (void)viewDidLoad;	// IMP=0x001000000083bd05
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000083bcef
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000083bcd9
- (id)initWithCamera:(id)arg1 crosshairType:(unsigned long long)arg2;	// IMP=0x001000000083bbdd
- (id)initWithCamera:(id)arg1 showCrosshair:(_Bool)arg2;	// IMP=0x001000000083bbc1
- (struct CGPoint)mapView:(id)arg1 focusPointForPoint:(struct CGPoint)arg2 gesture:(long long)arg3;	// IMP=0x001000000083eda2
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;	// IMP=0x001000000083ed90
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;	// IMP=0x001000000083ed7e
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;	// IMP=0x001000000083ec95
- (void)mapViewDidFinishLoadingMap:(id)arg1;	// IMP=0x001000000083ebe4
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x001000000083eb2c
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x001000000083ea74
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x001000000083e9dc
- (_Bool)delegateProtocolHasInstanceMethod:(SEL)arg1;	// IMP=0x001000000083e981
- (_Bool)protocol:(id)arg1 hasInstanceMethod:(SEL)arg2;	// IMP=0x001000000083e91b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

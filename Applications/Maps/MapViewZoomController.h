//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IOSBasedChromeViewController, MKMapView, NSString, NavigationDisplay;
@protocol MapViewZoomControllerDelegate;

@interface MapViewZoomController : NSObject
{
    unsigned long long _zoom;	// 8 = 0x8
    id <MapViewZoomControllerDelegate> _delegate;	// 16 = 0x10
    IOSBasedChromeViewController *_chromeViewController;	// 24 = 0x18
    NavigationDisplay *_navigationDisplay;	// 32 = 0x20
    double _currentCameraOffset;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000e7640d
@property(nonatomic) double currentCameraOffset; // @synthesize currentCameraOffset=_currentCameraOffset;
@property(retain, nonatomic) NavigationDisplay *navigationDisplay; // @synthesize navigationDisplay=_navigationDisplay;
@property(nonatomic) __weak IOSBasedChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(nonatomic) __weak id <MapViewZoomControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long zoom; // @synthesize zoom=_zoom;
- (double)_horizontalCameraOffset;	// IMP=0x0010000000e7622d
- (void)_applyOffsetCameraForOverlay:(_Bool)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3;	// IMP=0x0010000000e760ef
- (CDStruct_02837cd9)_boundingMapRectForLocation:(id)arg1;	// IMP=0x0010000000e75f90
- (void)_zoomToOverview:(_Bool)arg1 startCameraTracking:(_Bool)arg2;	// IMP=0x0010000000e75ddc
- (void)_zoomToDetail:(_Bool)arg1 startCameraTracking:(_Bool)arg2;	// IMP=0x0010000000e75c2b
- (void)updateCameraForTraits:(id)arg1 containerStyle:(unsigned long long)arg2;	// IMP=0x0010000000e75afa
- (void)setZoomToTargetWithRect:(CDStruct_02837cd9)arg1;	// IMP=0x0010000000e75a27
- (void)setZoomTo:(unsigned long long)arg1 startCameraTracking:(_Bool)arg2;	// IMP=0x0010000000e757fe
- (void)setZoomTo:(unsigned long long)arg1;	// IMP=0x0010000000e757e7
@property(readonly, nonatomic) MKMapView *mapView;
- (id)initWithNavigationDisplay:(id)arg1;	// IMP=0x0010000000e756ec
- (void)dealloc;	// IMP=0x0010000000e75663

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

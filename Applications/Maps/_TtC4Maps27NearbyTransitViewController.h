//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC4Maps27NearbyTransitViewController
{
    MISSING_TYPE *nearbyTransitView;	// 8 = 0x8
    MISSING_TYPE *nearbyTransitDeparturesProvider;	// 80 = 0x50
    MISSING_TYPE *mapView;	// 88 = 0x58
    MISSING_TYPE *actionCoordinator;	// 96 = 0x60
    MISSING_TYPE *initialMapViewMode;	// 104 = 0x68
    MISSING_TYPE *shouldAlwaysPrioritizeUserPosition;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000018fb80
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000018fb20
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000018fab0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000018f9c0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000018f880
- (void)viewDidLoad;	// IMP=0x001000000018f740
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000018e320
- (id)initWithActionCoordinator:(id)arg1;	// IMP=0x001000000018e1e0
- (void)headerViewButtonTapped:(id)arg1 buttonType:(unsigned long long)arg2;	// IMP=0x001000000018fd00
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000190220
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x00100000001901d0

@end


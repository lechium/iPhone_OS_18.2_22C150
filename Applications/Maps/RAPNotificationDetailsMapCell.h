//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class MKMapView, NSString, _TtC4Maps31RAPNotificationDetailsViewModel;

@interface RAPNotificationDetailsMapCell : UICollectionViewCell
{
    _TtC4Maps31RAPNotificationDetailsViewModel *_viewModel;	// 8 = 0x8
    MKMapView *_mapView;	// 16 = 0x10
}

+ (id)identifier;	// IMP=0x0020000000de9bcb
- (void).cxx_destruct;	// IMP=0x0020000000deaf7e
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) _TtC4Maps31RAPNotificationDetailsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;	// IMP=0x0010000000deae49
- (void)_updateMapView;	// IMP=0x0010000000dea4da
- (_Bool)_showsSingleMarker;	// IMP=0x0010000000dea447
- (void)_setupConstraints;	// IMP=0x0010000000de9ff6
- (void)_setupViews;	// IMP=0x0010000000de9cb4
- (void)_commonInit;	// IMP=0x0010000000de9c86
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000de9c3a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000de9bdd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


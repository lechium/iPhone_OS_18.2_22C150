//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MapViewModeGridView, NSString, SettingsController, UIMenu;
@protocol MapViewModeGridSelectorDelegate;

@interface MapViewModeGridSelector : UIView
{
    MapViewModeGridView *_gridView;	// 8 = 0x8
    UIMenu *_satelliteMenu;	// 16 = 0x10
    id <MapViewModeGridSelectorDelegate> _delegate;	// 24 = 0x18
    SettingsController *_settingsController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000098191b
@property(nonatomic) __weak SettingsController *settingsController; // @synthesize settingsController=_settingsController;
@property(nonatomic) __weak id <MapViewModeGridSelectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)toggleTraffic;	// IMP=0x0010000000981880
- (void)toggleLabels;	// IMP=0x001000000098182b
- (void)validateCommand:(id)arg1;	// IMP=0x001000000098174d
- (void)mapViewModeButtonViewTapped:(id)arg1;	// IMP=0x00100000009814d4
- (id)_buttonViewModelForViewMode:(long long)arg1;	// IMP=0x00100000009810e8
- (void)_createSatelliteMenu;	// IMP=0x0010000000980ec3
- (void)_createSubviews;	// IMP=0x0010000000980b38
- (void)_updateState;	// IMP=0x00100000009808ab
- (void)refresh;	// IMP=0x0010000000980899
- (id)init;	// IMP=0x001000000098079c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

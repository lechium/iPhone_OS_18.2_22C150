//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CarETAOnlyGuidanceSign, GuidanceETA, MapsSuggestionsRouteGeniusEntry, NSArray, NSTimer, UILabel;

@interface CarMapsSuggestionsView : UIView
{
    _Bool _showSelectLabel;	// 8 = 0x8
    _Bool _navigationAidedDrivingEnabled;	// 9 = 0x9
    _Bool _routeIsNavigable;	// 10 = 0xa
    MapsSuggestionsRouteGeniusEntry *_currentSuggestion;	// 16 = 0x10
    GuidanceETA *_currentETA;	// 24 = 0x18
    CarETAOnlyGuidanceSign *_etaOnlyView;	// 32 = 0x20
    UILabel *_selectLabel;	// 40 = 0x28
    NSArray *_currentConstraints;	// 48 = 0x30
    NSTimer *_hideSelectLabelTimer;	// 56 = 0x38
    NSTimer *_layoutUpdateTimer;	// 64 = 0x40
    unsigned long long _suggestionKey;	// 72 = 0x48
    CDStruct_24a8a0a7 _lastLayoutConfig;	// 80 = 0x50
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0040000000f1bad3
- (void).cxx_destruct;	// IMP=0x0020000000f1d30f
@property(nonatomic) _Bool routeIsNavigable; // @synthesize routeIsNavigable=_routeIsNavigable;
@property(nonatomic) _Bool navigationAidedDrivingEnabled; // @synthesize navigationAidedDrivingEnabled=_navigationAidedDrivingEnabled;
@property(nonatomic) _Bool showSelectLabel; // @synthesize showSelectLabel=_showSelectLabel;
@property unsigned long long suggestionKey; // @synthesize suggestionKey=_suggestionKey;
@property CDStruct_24a8a0a7 lastLayoutConfig; // @synthesize lastLayoutConfig=_lastLayoutConfig;
@property(retain) NSTimer *layoutUpdateTimer; // @synthesize layoutUpdateTimer=_layoutUpdateTimer;
@property(retain) NSTimer *hideSelectLabelTimer; // @synthesize hideSelectLabelTimer=_hideSelectLabelTimer;
@property(retain) NSArray *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property(retain) UILabel *selectLabel; // @synthesize selectLabel=_selectLabel;
@property(retain) CarETAOnlyGuidanceSign *etaOnlyView; // @synthesize etaOnlyView=_etaOnlyView;
@property(retain, nonatomic) GuidanceETA *currentETA; // @synthesize currentETA=_currentETA;
@property(retain, nonatomic) MapsSuggestionsRouteGeniusEntry *currentSuggestion; // @synthesize currentSuggestion=_currentSuggestion;
- (unsigned long long)accessibilityTraits;	// IMP=0x0010000000f1d123
- (_Bool)isAccessibilityElement;	// IMP=0x0010000000f1d11b
- (void)_hideSelectLabel;	// IMP=0x0010000000f1d0eb
- (void)stopHideSelectLabelTimer;	// IMP=0x0010000000f1d091
- (void)startHideSelectLabelTimer;	// IMP=0x0010000000f1cffa
- (void)_updateContents;	// IMP=0x0010000000f1c798
- (void)_updateViewLayout;	// IMP=0x0010000000f1c2b5
- (_Bool)_needsViewLayout;	// IMP=0x0010000000f1c21c
- (void)_setNeedsViewLayout;	// IMP=0x0010000000f1c06f
- (void)_externalDeviceUpdated:(id)arg1;	// IMP=0x0010000000f1bfec
- (void)dealloc;	// IMP=0x0010000000f1bf77
- (id)init;	// IMP=0x0010000000f1badb

@end

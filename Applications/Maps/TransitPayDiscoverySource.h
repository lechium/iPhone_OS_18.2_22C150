//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FeatureDiscoveryModel, NSString, RouteCollection, TransitPassManager, TransitPayFeatureDiscoveryMetadataStore;
@protocol FeatureDiscoverySourceDelegate, MapsSuggestionsInsights, OS_dispatch_queue, TransitPayActionDelegate;

@interface TransitPayDiscoverySource : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <MapsSuggestionsInsights> _msgInsights;	// 16 = 0x10
    TransitPayFeatureDiscoveryMetadataStore *_dataStore;	// 24 = 0x18
    unsigned long long _currentMarketMUID;	// 32 = 0x20
    TransitPassManager *_passManager;	// 40 = 0x28
    _Bool _isUpdatingAvailability;	// 48 = 0x30
    id <FeatureDiscoverySourceDelegate> _delegate;	// 56 = 0x38
    long long _priority;	// 64 = 0x40
    id <TransitPayActionDelegate> _transitPayActionDelegate;	// 72 = 0x48
    id <TransitPayActionDelegate> _actionDelegate;	// 80 = 0x50
    FeatureDiscoveryModel *_model;	// 88 = 0x58
    long long _transportType;	// 96 = 0x60
    RouteCollection *_routeCollection;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000ef550d
@property(retain, nonatomic) RouteCollection *routeCollection; // @synthesize routeCollection=_routeCollection;
@property(nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) FeatureDiscoveryModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <TransitPayActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) __weak id <TransitPayActionDelegate> transitPayActionDelegate; // @synthesize transitPayActionDelegate=_transitPayActionDelegate;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) __weak id <FeatureDiscoverySourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)paymentSetupViewController:(id)arg1 didFinishAddingPaymentPasses:(id)arg2 error:(id)arg3;	// IMP=0x0010000000ef5245
- (void)performActionSetupViewControllerDidFinish:(id)arg1;	// IMP=0x0010000000ef5233
- (void)performActionSetupViewControllerDidCancel:(id)arg1;	// IMP=0x0010000000ef51b4
@property(readonly, nonatomic) _Bool wantsAllRouteCollectionChanges;
- (void)_tearDown;	// IMP=0x0010000000ef50fa
- (void)_updateAvailability;	// IMP=0x0010000000ef4531
- (id)_suggestionsFromPBSuggestions:(id)arg1;	// IMP=0x0010000000ef41c5
- (id)_modelFromData:(id)arg1;	// IMP=0x0010000000ef3737
- (void)_fetchInsightsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ef319e
- (void)updateFeatureEligibilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ef2cd0
- (void)transitPassManagerDidChange:(id)arg1;	// IMP=0x0010000000ef2cbe
- (void)setTransportType:(long long)arg1 routeCollection:(id)arg2;	// IMP=0x0010000000ef2999
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
- (id)initWithPriority:(long long)arg1 delegate:(id)arg2;	// IMP=0x0010000000ef2734

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

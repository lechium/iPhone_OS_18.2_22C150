//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/VKRouteContext.h>

@class NSString;

@interface VKRouteContext (MKRouteContextExtras)
- (id)_routeInfoForRoute:(id)arg1;	// IMP=0x0020000000169de4
- (void)_updateWaypointCaptions;	// IMP=0x002000000016a972
- (void)_setAlternateRouteContextAnnotationETAComparison:(unsigned char)arg1 forRoute:(id)arg2;	// IMP=0x002000000016a77b
- (void)_setRouteContextAnnotationFocus:(_Bool)arg1 forRoute:(id)arg2;	// IMP=0x002000000016a718
- (void)_setRouteContextAnnotationTexts:(id)arg1 forLegsInRoute:(id)arg2;	// IMP=0x002000000016a387
- (void)_setRouteContextAnnotationText:(id)arg1 advisoryStyleAttributes:(id)arg2 forRoute:(id)arg3;	// IMP=0x002000000016a298
- (void)_setRouteContextAnnotationText:(id)arg1 tollCurrency:(unsigned char)arg2 forRoute:(id)arg3;	// IMP=0x002000000016a1ca
- (void)_setRouteContextAnnotationText:(id)arg1 etaType:(long long)arg2 tollCurrency:(unsigned char)arg3 advisoryStyleAttributes:(id)arg4 forRoute:(id)arg5;	// IMP=0x002000000016a07e
- (void)_setRouteContextInspectedSegmentIndex:(unsigned long long)arg1 inspectedStepIndex:(unsigned long long)arg2;	// IMP=0x002000000016a041

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


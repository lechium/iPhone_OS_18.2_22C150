//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ChromeViewController, NSString, Protocol;

@interface ChromeMapSelectionHandler : NSObject
{
    ChromeViewController *_chromeViewController;	// 8 = 0x8
    Protocol *_protocol;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000005bfc34
- (_Bool)_propagateDidSelectInvocation:(id)arg1;	// IMP=0x00100000005be9d2
- (_Bool)_propagateShouldSelectInvocation:(id)arg1;	// IMP=0x00100000005bd803
- (id)protocolMethodSignatureForSelector:(SEL)arg1;	// IMP=0x00100000005bd784
- (id)_invocationWithSelector:(SEL)arg1 argument:(id)arg2;	// IMP=0x00100000005bd569
- (int)currentMapViewTargetForAnalytics;	// IMP=0x00100000005bd4d8
- (int)currentUITargetForAnalytics;	// IMP=0x00100000005bd447
- (id)searchPinsManagerForMapSelectionManager:(id)arg1;	// IMP=0x00100000005bd404
- (void)mapSelectionManagerClearSelection:(id)arg1;	// IMP=0x00100000005bd3af
- (_Bool)_checkAndPropagateSpecificCallbacksForAnnotationView:(id)arg1;	// IMP=0x00100000005bd30c
- (void)mapSelectionManager:(id)arg1 selectAnnotationView:(id)arg2;	// IMP=0x00100000005bd288
- (_Bool)mapSelectionManager:(id)arg1 shouldSelectAnnotationView:(id)arg2;	// IMP=0x00100000005bd207
- (_Bool)_checkAndPropagateSpecificCallbacksForMarker:(id)arg1;	// IMP=0x00100000005bc310
- (void)mapSelectionManager:(id)arg1 selectVKLabelMarker:(id)arg2;	// IMP=0x00100000005bc28c
- (_Bool)mapSelectionManager:(id)arg1 shouldSelectVKLabelMarker:(id)arg2;	// IMP=0x00100000005bc20b
- (id)initWithChromeViewController:(id)arg1;	// IMP=0x00100000005bc197

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

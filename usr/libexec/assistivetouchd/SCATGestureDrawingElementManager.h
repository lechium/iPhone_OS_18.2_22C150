//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SCATGestureDrawingViewController;

@interface SCATGestureDrawingElementManager
{
}

- (_Bool)allowsDwellScanningToAbortAfterTimeout;	// IMP=0x00200000000c7e90
- (_Bool)allowsDwellSelection;	// IMP=0x00100000000c7e4c
- (void)driver:(id)arg1 willUnfocusFromContext:(id)arg2;	// IMP=0x00100000000c7ce8
- (void)driver:(id)arg1 didFocusOnContext:(id)arg2 oldContext:(id)arg3;	// IMP=0x00100000000c7b96
- (_Bool)shouldKeepScannerAwake;	// IMP=0x00100000000c7b8e
- (void)scannerWillMakeManagerInactive:(id)arg1 activeElementManager:(id)arg2;	// IMP=0x00100000000c7adc
- (void)scannerWillMakeManagerActive:(id)arg1 forDisplayID:(unsigned int)arg2;	// IMP=0x00100000000c7a44
- (void)scannerWillMakeManagerActive:(id)arg1;	// IMP=0x00100000000c79b4
- (id)elementBefore:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00100000000c7928
- (id)elementAfter:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00100000000c789c
- (id)lastElementWithOptions:(int *)arg1;	// IMP=0x00100000000c783d
- (id)firstElementWithOptions:(int *)arg1;	// IMP=0x00100000000c77de
@property(readonly, nonatomic) SCATGestureDrawingViewController *drawingViewController;
- (id)identifier;	// IMP=0x00100000000c77b8
- (id)initWithStartingFingerPositions:(id)arg1 menu:(id)arg2;	// IMP=0x00100000000c76f8

@end

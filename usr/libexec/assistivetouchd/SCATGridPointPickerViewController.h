//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexPath, NSMutableDictionary, NSString, SCATGridPointPickerView;

@interface SCATGridPointPickerViewController
{
    NSMutableDictionary *_scannableElements;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000eab16
- (_Bool)handleInputAction:(id)arg1 withElement:(id)arg2;	// IMP=0x00100000000ea971
- (void)scannerWillMakeManagerActive:(id)arg1 forDisplayID:(unsigned int)arg2;	// IMP=0x00100000000ea95f
- (void)scannerWillMakeManagerActive:(id)arg1;	// IMP=0x00100000000ea94d
- (void)scannerWillMakeManagerInactive:(id)arg1 activeElementManager:(id)arg2;	// IMP=0x00100000000ea947
- (void)driver:(id)arg1 didFocusOnContext:(id)arg2 oldContext:(id)arg3;	// IMP=0x00100000000ea7b1
- (id)elementBefore:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00100000000ea65d
- (id)elementAfter:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00100000000ea505
- (id)lastElementWithOptions:(int *)arg1;	// IMP=0x00100000000ea4b5
- (id)firstElementWithOptions:(int *)arg1;	// IMP=0x00100000000ea463
- (void)didGenerateElements:(id)arg1;	// IMP=0x00100000000ea44e
- (id)generateElementsForGroup:(id)arg1;	// IMP=0x00100000000ea3ec
- (struct CGRect)scannerFrameForPointPickerGroup:(id)arg1;	// IMP=0x00100000000ea2e0
- (struct CGPath *)scannerPathForPointPickerCenterPoint:(id)arg1;	// IMP=0x00100000000ea24b
- (struct CGRect)scannerFrameForPointPickerCenterPoint:(id)arg1;	// IMP=0x00100000000ea13f
- (struct CGRect)scannerFrameForPointPickerSquare:(id)arg1;	// IMP=0x00100000000ea033
@property(retain, nonatomic) NSIndexPath *currentSelectionPath;
- (void)_resetGrid;	// IMP=0x00100000000e9f66
- (id)_scannableElements;	// IMP=0x00100000000e9f07
- (id)_scannableElementsAtSelectionPath:(id)arg1;	// IMP=0x00100000000e9c19
- (_Bool)_showsRowsForSelectionPath:(id)arg1;	// IMP=0x00100000000e9bfe
@property(readonly, nonatomic) SCATGridPointPickerView *pointPickerView;
- (_Bool)_isVisible;	// IMP=0x00100000000e9b89
@property(readonly, copy) NSString *description;
- (Class)classForPointPickerView;	// IMP=0x00100000000e9aae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


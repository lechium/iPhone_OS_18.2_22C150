//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SCATGridPointPicker
{
}

- (_Bool)handleInputAction:(id)arg1 withElement:(id)arg2;	// IMP=0x00400000000e99f1
- (void)scannerWillMakeManagerInactive:(id)arg1 activeElementManager:(id)arg2;	// IMP=0x00100000000e993f
- (void)scannerWillMakeManagerActive:(id)arg1 forDisplayID:(unsigned int)arg2;	// IMP=0x00100000000e98a5
- (void)scannerWillMakeManagerActive:(id)arg1;	// IMP=0x00100000000e9815
- (void)driver:(id)arg1 didFocusOnContext:(id)arg2 oldContext:(id)arg3;	// IMP=0x00100000000e9748
- (id)elementBefore:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00100000000e96bc
- (id)elementAfter:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00100000000e9630
- (id)lastElementWithOptions:(int *)arg1;	// IMP=0x00100000000e95d1
- (id)firstElementWithOptions:(int *)arg1;	// IMP=0x00100000000e9572
- (id)_gridViewController;	// IMP=0x00100000000e9560
- (long long)pickerType;	// IMP=0x00100000000e9558
- (id)_initWithMenu:(id)arg1;	// IMP=0x00100000000e94b6

@end

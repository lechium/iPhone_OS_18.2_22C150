//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNTestNavigationControllerDelegate, NSString;

@interface ShowContactsTest
{
    int _nextContactIndex;	// 8 = 0x8
    int _maxContactIndex;	// 12 = 0xc
    CNTestNavigationControllerDelegate *_navControllerDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000acb4
@property(retain, nonatomic) CNTestNavigationControllerDelegate *navControllerDelegate; // @synthesize navControllerDelegate=_navControllerDelegate;
@property(nonatomic) int maxContactIndex; // @synthesize maxContactIndex=_maxContactIndex;
@property(nonatomic) int nextContactIndex; // @synthesize nextContactIndex=_nextContactIndex;
- (void)showContactsListForIPhone;	// IMP=0x001000000000aa8e
- (void)showNextContact;	// IMP=0x001000000000a782
- (void)iterateContact;	// IMP=0x001000000000a4f4
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x001000000000a4df
- (void)didShow:(id)arg1;	// IMP=0x001000000000a367
- (void)resetDelegate;	// IMP=0x001000000000a262
- (void)prepareForNextTest;	// IMP=0x001000000000a224
- (_Bool)prepareForTestWithOptions:(id)arg1;	// IMP=0x0010000000009f10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

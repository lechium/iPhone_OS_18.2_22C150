//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactNavigationController, ContactsSplitViewController, NSDictionary, NSString;

@interface ContactsTest : NSObject
{
    _Bool _isIPad;	// 8 = 0x8
    NSDictionary *_testOptions;	// 16 = 0x10
    CNContactNavigationController *_contactNavigationController;	// 24 = 0x18
    ContactsSplitViewController *_contactSplitViewController;	// 32 = 0x20
}

+ (id)testWithSplitViewController:(id)arg1;	// IMP=0x0020000000008cc6
- (void).cxx_destruct;	// IMP=0x0020000000009454
@property(nonatomic) _Bool isIPad; // @synthesize isIPad=_isIPad;
@property(retain, nonatomic) ContactsSplitViewController *contactSplitViewController; // @synthesize contactSplitViewController=_contactSplitViewController;
@property(retain, nonatomic) CNContactNavigationController *contactNavigationController; // @synthesize contactNavigationController=_contactNavigationController;
@property(retain, nonatomic) NSDictionary *testOptions; // @synthesize testOptions=_testOptions;
- (void)performScrollTestWithScrollView:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000902a
- (void)showContactListWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008e32
- (void)prepareForNextTest;	// IMP=0x0010000000008e2c
- (void)willStartTest;	// IMP=0x0010000000008db0
- (_Bool)prepareForTestWithOptions:(id)arg1;	// IMP=0x0010000000008d9b
@property(readonly, nonatomic) _Bool isRecap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RemoteUIController, UINavigationController, UIViewController;

@interface SFTermsAndConditionsManager : NSObject
{
    UINavigationController *_genericTermsUIViewController;	// 8 = 0x8
    UIViewController *_presenter;	// 16 = 0x10
    _Bool _showWarranty;	// 24 = 0x18
    _Bool _showingOfflineTerms;	// 25 = 0x19
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    CDUnknownBlockType _loadedHandler;	// 40 = 0x28
    RemoteUIController *_termsController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000112850
@property(retain, nonatomic) RemoteUIController *termsController; // @synthesize termsController=_termsController;
@property(copy, nonatomic) CDUnknownBlockType loadedHandler; // @synthesize loadedHandler=_loadedHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;	// IMP=0x00100000001125a8
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x0010000000112290
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;	// IMP=0x0010000000112277
- (void)dismissTerms:(_Bool)arg1;	// IMP=0x0010000000112211
- (void)handleAgreeButton;	// IMP=0x00100000001121fa
- (void)handleDisagreeButton;	// IMP=0x00100000001121e6
- (void)loadOfflineTerms;	// IMP=0x001000000011200a
- (void)_termsDisagree;	// IMP=0x0010000000111ff6
- (void)_handleAgreeFromObjectModel:(id)arg1;	// IMP=0x0010000000111eec
- (void)activate;	// IMP=0x0010000000111b1b
- (id)initWithPresenter:(id)arg1 showWarranty:(_Bool)arg2;	// IMP=0x0010000000111aa4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASWebAuthenticationSession, NSString;

@interface WebAuthenticationViewController
{
    ASWebAuthenticationSession *_authenticationSession;	// 8 = 0x8
    CDUnknownBlockType _viewControllerDismissedHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000003b2e
- (id)presentationAnchorForWebAuthenticationSession:(id)arg1;	// IMP=0x0010000000003ade
- (void)_viewControllerDismissed:(id)arg1;	// IMP=0x0010000000003a0c
- (void)cancel;	// IMP=0x001000000000354c
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x0010000000003544
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000003094
- (void)viewDidLoad;	// IMP=0x001000000000300b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


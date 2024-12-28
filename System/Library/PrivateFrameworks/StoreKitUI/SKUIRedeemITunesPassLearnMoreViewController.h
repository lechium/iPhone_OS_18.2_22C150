//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIRedeemStepViewController.h"

@class NSString, NSURL, SKUIPassbookLoader, SKUIRedeemITunesPassLearnMoreView;

__attribute__((visibility("hidden")))
@interface SKUIRedeemITunesPassLearnMoreViewController : SKUIRedeemStepViewController
{
    _Bool _didTapAddPassbookButton;	// 8 = 0x8
    SKUIRedeemITunesPassLearnMoreView *_learnMoreView;	// 16 = 0x10
    SKUIPassbookLoader *_passbookLoader;	// 24 = 0x18
    NSURL *_passbookURL;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000010c203
- (void)_showErrorDialog;	// IMP=0x000000000010c066
- (void)_loadPassbookURL;	// IMP=0x000000000010be52
- (void)_loadPassbookPass;	// IMP=0x000000000010bd51
- (id)_existingPass;	// IMP=0x000000000010bc70
- (void)_didLoadPassbookURLString:(id)arg1;	// IMP=0x000000000010bb9c
- (void)_passButtonAction:(id)arg1;	// IMP=0x000000000010bad1
- (void)_doneButtonAction:(id)arg1;	// IMP=0x000000000010bab8
- (id)presentationViewControllerForPassbookLoader:(id)arg1;	// IMP=0x000000000010baaf
- (void)passbookLoaderDidFinish:(id)arg1;	// IMP=0x000000000010b96c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000010b7ff
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000010b7b2
- (void)loadView;	// IMP=0x000000000010b59b
- (void)dealloc;	// IMP=0x000000000010b503
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000010b431

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

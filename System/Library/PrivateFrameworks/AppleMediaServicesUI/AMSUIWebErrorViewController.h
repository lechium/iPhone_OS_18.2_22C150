//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonViewController.h"

@class AMSUIErrorView, AMSUIWebAppearance, AMSUIWebClientContext, AMSUIWebErrorPageModel, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebErrorViewController : AMSUICommonViewController
{
    _Bool _showingCancelButton;	// 8 = 0x8
    AMSUIWebAppearance *_appearance;	// 16 = 0x10
    AMSUIWebClientContext *_context;	// 24 = 0x18
    AMSUIErrorView *_errorView;	// 32 = 0x20
    AMSUIWebErrorPageModel *_model;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000a91c3
@property(nonatomic) _Bool showingCancelButton; // @synthesize showingCancelButton=_showingCancelButton;
@property(retain, nonatomic) AMSUIWebErrorPageModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AMSUIErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) AMSUIWebAppearance *appearance; // @synthesize appearance=_appearance;
- (void)_showCancelButtonIfNeeded;	// IMP=0x00000000000a8d8c
- (void)_enqueuePageEventIfNeeded;	// IMP=0x00000000000a89bc
- (void)_applyAppearance;	// IMP=0x00000000000a886d
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;	// IMP=0x00000000000a865e
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000a8595
- (void)loadView;	// IMP=0x00000000000a78be
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000a76c4
- (id)initWithContext:(id)arg1;	// IMP=0x00000000000a7667

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _SFReaderController;
@protocol SFReaderEnabledWebViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFReaderEnabledWebViewController
{
    _Bool _supportsAdvancedPrivacyProtections;	// 8 = 0x8
    _SFReaderController *_readerController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000153531
@property(nonatomic) _Bool supportsAdvancedPrivacyProtections; // @synthesize supportsAdvancedPrivacyProtections=_supportsAdvancedPrivacyProtections;
@property(readonly, nonatomic) _SFReaderController *readerController; // @synthesize readerController=_readerController;
- (void)readerController:(id)arg1 contentDidBecomeReadyWithDetectedLanguage:(id)arg2;	// IMP=0x000000000015348f
- (void)createReaderWebViewForReaderController:(id)arg1;	// IMP=0x000000000015342f
- (void)readerController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2;	// IMP=0x00000000001533a4
- (void)readerController:(id)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg2;	// IMP=0x0000000000153319
- (void)readerController:(id)arg1 didDetermineAdditionalTextSamples:(id)arg2 dueTo:(long long)arg3;	// IMP=0x0000000000153163
- (void)readerController:(id)arg1 didDetermineReaderAvailability:(id)arg2 dueTo:(long long)arg3;	// IMP=0x0000000000153024
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;	// IMP=0x0000000000152f7a
- (void)invalidate;	// IMP=0x0000000000152f4b
- (void)setUpReaderWithReaderWebView:(id)arg1;	// IMP=0x0000000000152da1
- (void)loadView;	// IMP=0x0000000000152cdf
- (void)dealloc;	// IMP=0x0000000000152c61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <SFReaderEnabledWebViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


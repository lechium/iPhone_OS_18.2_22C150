//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPReport;

@interface RAPWebBundleHomeViewController
{
    RAPReport *_report;	// 8 = 0x8
    long long _currentAutocompleteSelectionKind;	// 16 = 0x10
    CDUnknownBlockType _replyHandler;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000722bda
- (void)macFooterViewRightButtonTapped:(id)arg1;	// IMP=0x0010000000722bc8
- (void)macFooterViewLeftButtonTapped:(id)arg1;	// IMP=0x0010000000722bb6
- (void)categoryChooserViewController:(id)arg1 categoriesDidNotChange:(id)arg2;	// IMP=0x0010000000722adb
- (void)categoryChooserViewController:(id)arg1 didReceiveSelectedCategories:(id)arg2;	// IMP=0x0010000000722a00
- (void)rapSearchAutocompleteViewControllerDidCancel:(id)arg1;	// IMP=0x00100000007229d9
- (void)rapSearchAutocompleteViewController:(id)arg1 finishedPickingAutocompleteResult:(id)arg2 isAutocompleteResult:(_Bool)arg3;	// IMP=0x0010000000722425
- (void)_presentAutocompleteViewController:(id)arg1 forItemKind:(long long)arg2;	// IMP=0x00100000007223c5
- (void)_presentContainmentUIIsParentContainment:(_Bool)arg1 currentlySelectedMUIDs:(id)arg2;	// IMP=0x00100000007221e2
- (void)_contextFromQuestionWithLocales:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000721f78
- (void)_presentAddressUI;	// IMP=0x0010000000721d48
- (void)didReceiveMessageFromUserContentController:(id)arg1 message:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000721421
- (void)didDismissByGesture;	// IMP=0x0010000000721377
- (void)_uploadForm:(id)arg1;	// IMP=0x0010000000720bd4
- (id)_headerTitle;	// IMP=0x0010000000720982
- (void)setupViews;	// IMP=0x00100000007207b0
- (void)_submit;	// IMP=0x00100000007203fc
- (void)_reportSentWithDismissalGesture:(_Bool)arg1;	// IMP=0x0010000000720385
- (void)_reportSent;	// IMP=0x0010000000720371
- (void)_dismiss;	// IMP=0x0010000000720311
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000007202c1
- (void)viewDidLoad;	// IMP=0x0010000000720280
- (id)initWithReport:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000007201d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

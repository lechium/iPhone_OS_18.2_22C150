//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICNoteEditorViewController, MISSING_TYPE, UITextView;

@interface ICAudioAttachmentEditorCoordinator : NSObject
{
    MISSING_TYPE *noteEditorViewController;	// 8 = 0x8
    MISSING_TYPE *recordingViewController;	// 16 = 0x10
    MISSING_TYPE *trackedAttachmentViews;	// 24 = 0x18
    MISSING_TYPE *temporaryExportURLToRemove;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_feedbackDelegateExtensionVC;	// 0 = 0x0
    MISSING_TYPE *miniPlayer;	// 0 = 0x0
    MISSING_TYPE *hideMiniPlayerConstraint;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *ignoredAttachments;	// 0 = 0x0
    MISSING_TYPE *closedAttachments;	// 3461952 = 0x34d340
    MISSING_TYPE *wantsMiniPlayerVisible;	// 28708 = 0x7024
    MISSING_TYPE *isShowingInspector;	// 3461952 = 0x34d340
}

- (void).cxx_destruct;	// IMP=0x0000000000291690
- (id)init;	// IMP=0x0000000000291630
- (void)teardown;	// IMP=0x00000000002915b0
- (void)textViewDidScroll:(id)arg1;	// IMP=0x0000000000290180
- (_Bool)isShowingMiniPlayer;	// IMP=0x0000000000290140
@property(nonatomic) _Bool isShowingInspector; // @synthesize isShowingInspector;
- (void)audioControllerDidPlay:(id)arg1;	// IMP=0x000000000028f240
- (void)attachmentWasUndeleted:(id)arg1;	// IMP=0x000000000028f110
- (void)attachmentWillBeDeleted:(id)arg1;	// IMP=0x000000000028efe0
- (void)attachmentViewDidMoveToWindow:(id)arg1;	// IMP=0x000000000028edc0
- (void)presentRecordingViewControllerForAttachment:(id)arg1;	// IMP=0x000000000028e9c0
- (id)initWithNoteEditorViewController:(id)arg1;	// IMP=0x000000000028dfd0
@property(nonatomic, readonly) ICNoteEditorViewController *noteEditorViewController; // @synthesize noteEditorViewController;
- (void)viewWasDismissed;	// IMP=0x0000000000295580
- (void)presentExportViewForAttachment:(id)arg1;	// IMP=0x0000000000294c30
- (void)exportCallRecordingForDataCollectionForAttachment:(id)arg1;	// IMP=0x00000000002949b0
- (void)presentCallRecordingExportViewForAttachment:(id)arg1;	// IMP=0x0000000000294930
- (void)presentSharingViewForAttachment:(id)arg1 fromSourceView:(id)arg2;	// IMP=0x00000000002921c0
@property(nonatomic, readonly) UITextView *textView;
- (id)makeCancelAction;	// IMP=0x0000000000297ea0
- (id)makeDeleteActionFor:(id)arg1;	// IMP=0x0000000000297e40
- (id)makeDeleteAlertControllerFor:(id)arg1;	// IMP=0x0000000000297d10
- (void)delete:(id)arg1;	// IMP=0x0000000000297940
- (void)presentReportAConcernFor:(id)arg1 withPositiveFeedback:(_Bool)arg2;	// IMP=0x0000000000297840
- (void)appendTo:(id)arg1;	// IMP=0x0000000000295fe0
- (void)presentSummaryFor:(id)arg1;	// IMP=0x0000000000295df0
- (void)presentTranscriptFor:(id)arg1;	// IMP=0x0000000000295c20
- (void)rename:(id)arg1;	// IMP=0x0000000000295b10
- (void)scrollTo:(id)arg1;	// IMP=0x0000000000295a20
- (void)closeMiniPlayerFor:(id)arg1;	// IMP=0x00000000002958e0
- (void)playFromBeginning:(id)arg1;	// IMP=0x00000000002957f0
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;	// IMP=0x00000000002980b0
- (void)documentPickerWasCancelled:(id)arg1;	// IMP=0x0000000000298050

@end


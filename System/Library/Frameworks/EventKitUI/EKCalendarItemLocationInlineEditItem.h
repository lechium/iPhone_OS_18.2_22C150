//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventEditItem.h"

@class EKCalendarItemEditor, EKLocationEditItemViewController, EKUILocationEditItemModel, NSString;

__attribute__((visibility("hidden")))
@interface EKCalendarItemLocationInlineEditItem : EKEventEditItem
{
    EKUILocationEditItemModel *_viewModel;	// 32 = 0x20
    EKCalendarItemEditor *_editor;	// 40 = 0x28
    EKLocationEditItemViewController *_currentLocationEditController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001cf0b7
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001cee0e
- (struct CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;	// IMP=0x00000000001cedb5
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ced96
- (void)_scribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;	// IMP=0x00000000001cea76
- (void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;	// IMP=0x00000000001ce900
- (_Bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;	// IMP=0x00000000001ce8f8
- (id)searchStringForEventAutocomplete;	// IMP=0x00000000001ce87c
- (_Bool)textFieldShouldClear:(id)arg1;	// IMP=0x00000000001ce867
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000001ce84f
- (void)textFieldDidChange:(id)arg1;	// IMP=0x00000000001ce83d
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000000001ce79b
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000000001ce6f1
- (void)didTapDismissSuggestedLocationCell:(id)arg1;	// IMP=0x00000000001ce56b
- (void)didTapAddSuggestedLocationCell:(id)arg1 disambiguatedLocation:(id)arg2;	// IMP=0x00000000001cdfb5
- (void)editItemPendingVideoConferenceCompleted:(id)arg1;	// IMP=0x00000000001cd991
- (_Bool)editItemViewControllerSave:(id)arg1;	// IMP=0x00000000001cd393
- (_Bool)isSubitemAtIndexSaveable:(unsigned long long)arg1;	// IMP=0x00000000001cd134
- (unsigned long long)onSaveEditItemsToRefresh;	// IMP=0x00000000001cd129
- (unsigned long long)onSaveEditorReloadBehavior;	// IMP=0x00000000001cd11e
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;	// IMP=0x00000000001cd116
- (void)_clearLocationAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001ccfb8
- (void)_clearButtonTapped:(id)arg1;	// IMP=0x00000000001ccf84
- (unsigned long long)_supportedSearchTypesForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001cce6c
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000001cca4d
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;	// IMP=0x00000000001cca45
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;	// IMP=0x00000000001cc975
- (void)_setEditor:(id)arg1 andUpdateScribbleInteractionOnCell:(id)arg2 addScribbleInteraction:(_Bool)arg3;	// IMP=0x00000000001cc5fe
- (void)_updateVirtualConferenceCell:(id)arg1 index:(unsigned long long)arg2 virtualConference:(id)arg3;	// IMP=0x00000000001cc08c
- (void)_updateClearButtonAndMakeVisible:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000000001cc00f
- (void)_updateMapLocationCell:(id)arg1 index:(unsigned long long)arg2 location:(id)arg3;	// IMP=0x00000000001cbca4
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 inEditor:(id)arg2;	// IMP=0x00000000001cb314
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001cb300
- (_Bool)isSaveable;	// IMP=0x00000000001cb29b
- (unsigned long long)numberOfSubitems;	// IMP=0x00000000001cb22c
- (void)reset;	// IMP=0x00000000001cb20f
- (_Bool)isInline;	// IMP=0x00000000001cb207
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;	// IMP=0x00000000001cb05e
- (void)refreshFromCalendarItemAndStore;	// IMP=0x00000000001cb03e
- (void)dealloc;	// IMP=0x00000000001caff5
- (id)init;	// IMP=0x00000000001caf98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


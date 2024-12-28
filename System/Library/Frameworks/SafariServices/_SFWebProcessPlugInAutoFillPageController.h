//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WKWebProcessPlugInScriptWorld, _SFFormMetadataController, _WKRemoteObjectInterface;

__attribute__((visibility("hidden")))
@interface _SFWebProcessPlugInAutoFillPageController
{
    _WKRemoteObjectInterface *_activityControllerInterface;	// 8 = 0x8
    _WKRemoteObjectInterface *_autoFillerInterface;	// 16 = 0x10
    WKWebProcessPlugInScriptWorld *_isolatedWorld;	// 24 = 0x18
    _SFFormMetadataController *_formMetadataController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000173801
@property(retain, nonatomic) _SFFormMetadataController *formMetadataController; // @synthesize formMetadataController=_formMetadataController;
- (void)diagnosticsFormMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000173774
- (void)setAutoFillSpinnerVisibility:(_Bool)arg1 textFieldMetadata:(id)arg2 frame:(id)arg3;	// IMP=0x0000000000173696
- (void)setStrongPasswordElementViewableIfAppropriate:(_Bool)arg1 frame:(id)arg2 passwordControlUniqueIDs:(id)arg3;	// IMP=0x00000000001735b8
- (void)automaticPasswordSheetDimissedInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2;	// IMP=0x00000000001734e3
- (void)removeAutomaticPasswordVisualTreatmentInFrame:(id)arg1 passwordControlUniqueIDs:(id)arg2;	// IMP=0x000000000017340e
- (void)removeAutomaticPasswordElementsInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2 passwordControlUniqueIDs:(id)arg3;	// IMP=0x0000000000173317
- (void)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(id)arg1 formID:(long long)arg2 focusedPasswordControlUniqueID:(id)arg3 passwordControlUniqueIDs:(id)arg4 automaticPassword:(id)arg5 blurAfterSubstitution:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000001731a9
- (void)clearAutoFillMetadata;	// IMP=0x0000000000173101
- (void)getMetadataForTextField:(id)arg1 inFrame:(id)arg2 atURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000172f57
- (void)collectFormMetadataForPageLevelAutoFillAtURL:(id)arg1;	// IMP=0x0000000000172e78
- (void)collectFormMetadataForPrefillingAtURL:(id)arg1;	// IMP=0x0000000000172d99
- (void)collectFormMetadataForTestingAtURL:(id)arg1;	// IMP=0x0000000000172cba
- (void)collectURLsForPrefillingAtURL:(id)arg1;	// IMP=0x0000000000172bdb
- (void)clearFieldsAndSetFormControlsToNotAutoFilled:(id)arg1 inFrame:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000172ae7
- (void)setFormControls:(id)arg1 areAutoFilled:(_Bool)arg2 andClearField:(id)arg3 inFrame:(id)arg4;	// IMP=0x00000000001729c1
- (void)focusFormForStreamlinedLogin:(long long)arg1 inFrame:(id)arg2;	// IMP=0x00000000001728fe
- (void)autoFillOneTimeCodeFieldsInFrame:(id)arg1 withValue:(id)arg2 shouldSubmit:(_Bool)arg3;	// IMP=0x000000000017281e
- (void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;	// IMP=0x000000000017272a
- (void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3;	// IMP=0x000000000017262b
- (void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;	// IMP=0x000000000017253b
- (void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2;	// IMP=0x0000000000172466
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 fieldToFocus:(id)arg5 fieldsToObscure:(id)arg6 submitForm:(_Bool)arg7;	// IMP=0x0000000000172320
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 fieldToFocus:(id)arg5 submitForm:(_Bool)arg6;	// IMP=0x00000000001722fb
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 fieldToFocus:(id)arg5;	// IMP=0x00000000001722df
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 selectFieldAfterFilling:(id)arg4;	// IMP=0x00000000001722bc
- (void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3;	// IMP=0x0000000000172244
- (void)webProcessPlugInBrowserContextController:(id)arg1 didRemoveFrameFromHierarchy:(id)arg2;	// IMP=0x00000000001721e6
- (void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2;	// IMP=0x0000000000172188
- (void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;	// IMP=0x0000000000172168
- (void)runJavaScriptForActivity:(id)arg1 withScript:(id)arg2 object:(id)arg3 invokeMethod:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000171eaf
- (void)willDestroyBrowserContextController:(id)arg1;	// IMP=0x0000000000171d82
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;	// IMP=0x0000000000171bf7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFModuleSummaryEditor.h"

@class MISSING_TYPE;

@interface _TtC14WorkflowEditor32FilePickerParameterSummaryEditor : WFModuleSummaryEditor
{
    MISSING_TYPE *modal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000104821
- (id)initWithParameter:(id)arg1 arrayIndex:(long long)arg2 processing:(_Bool)arg3;	// IMP=0x00000000001047c3
- (void)cancelEditingWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x0000000000103904
- (void)beginEditingNewArrayElementFromPresentationAnchor:(id)arg1;	// IMP=0x00000000001036e7
- (void)beginEditingSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;	// IMP=0x0000000000103676
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000104b66
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000000104a9c
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;	// IMP=0x0000000000104a0f
- (void)documentPickerWasCancelled:(id)arg1;	// IMP=0x00000000001048e0

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtCV14WorkflowEditorP33_060892FA80DB790CDB013ACF6F2F770418SummaryHostingView11Coordinator : NSObject
{
    MISSING_TYPE *view;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000122e62
- (id)init;	// IMP=0x0000000000122e1f
- (void)showParameterEditingHint:(id)arg1;	// IMP=0x0000000000122da5
- (void)showVariableEditorWithOptions:(id)arg1 fromSourceRect:(struct CGRect)arg2;	// IMP=0x0000000000122c12
- (void)revealAction:(id)arg1 preScrollHandler:(CDUnknownBlockType)arg2 goBackHandler:(CDUnknownBlockType)arg3 scrolledAwayHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001221c7
- (void)showActionOutputPickerAllowingShortcutInput:(_Bool)arg1 variableProvider:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000121ef7
- (void)summaryCoordinator:(id)arg1 outputButtonDidChange:(_Bool)arg2;	// IMP=0x0000000000121d70
- (void)summaryCoordinator:(id)arg1 disclosureArrowDidChange:(_Bool)arg2;	// IMP=0x0000000000121bd4
- (void)summaryCoordinatorDidInvalidateSize:(id)arg1;	// IMP=0x0000000000121abb
- (id)viewControllerForCoordinator:(id)arg1;	// IMP=0x0000000000121a1f

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/NSObject-Protocol.h>

@class NSString, NSTextAttachment, WFModuleSummaryEditor, WFSlotIdentifier, WFVariable;
@protocol WFParameterState;

@protocol WFModuleSummaryEditorDelegate <NSObject>
- (void)summaryEditorDidFinish:(WFModuleSummaryEditor *)arg1 returnToKeyboard:(_Bool)arg2 withTextAttachmentToEdit:(NSTextAttachment *)arg3;
- (void)summaryEditor:(WFModuleSummaryEditor *)arg1 didRequestEditingSlotWithIdentifier:(WFSlotIdentifier *)arg2;
- (void)summaryEditorDidRequestTextEntry:(WFModuleSummaryEditor *)arg1;
- (void)summaryEditor:(WFModuleSummaryEditor *)arg1 didCommitParameterState:(id <WFParameterState>)arg2;
- (id <WFParameterState>)initialStateForSummaryEditor:(WFModuleSummaryEditor *)arg1;

@optional
- (void)summaryEditor:(WFModuleSummaryEditor *)arg1 didCommitAuxiliaryParameterState:(id <WFParameterState>)arg2 forKey:(NSString *)arg3;
- (void)summaryEditor:(WFModuleSummaryEditor *)arg1 didStageParameterState:(id <WFParameterState>)arg2;
- (void)summaryEditor:(WFModuleSummaryEditor *)arg1 willUpdateVariable:(WFVariable *)arg2;
@end


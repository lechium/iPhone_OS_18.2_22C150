//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkServices/LNActionMetadata.h>

@class NSArray, WFAppIntentShortcutsMetadata, WFAppIntentsControlMetadata;

@interface LNActionMetadata (WorkflowKit)
@property(nonatomic, readonly) WFAppIntentsControlMetadata *associatedControl;
@property(nonatomic, readonly) WFAppIntentShortcutsMetadata *shortcutsActionMetadata;
- (id)wf_actionMetadataWithOutputType:(id)arg1;	// IMP=0x00300000005a7d40
- (_Bool)wf_validateParametersForAction:(id)arg1 error:(id *)arg2;	// IMP=0x00300000005a7a46
@property(readonly, nonatomic) NSArray *wf_parameterDefinitions;
@end


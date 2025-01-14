//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class WFWorkflowRecord, WFWorkflowReference;

@protocol WFWorkflowStorage <NSObject>
- (_Bool)reloadRecord:(WFWorkflowRecord *)arg1 withReference:(WFWorkflowReference *)arg2 error:(id *)arg3;
- (_Bool)saveRecord:(WFWorkflowRecord *)arg1 withReference:(WFWorkflowReference *)arg2 error:(id *)arg3;
@end


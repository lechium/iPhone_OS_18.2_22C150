//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSArray, WFTriggerMultiSelectCell;

@protocol WFTriggerMultiSelectCellDelegate <NSObject>

@optional
- (void)cell:(WFTriggerMultiSelectCell *)arg1 didSelectOptions:(NSArray *)arg2;
- (void)cell:(WFTriggerMultiSelectCell *)arg1 didSelectOptionWithLeftViewSelected:(_Bool)arg2 rightViewSelected:(_Bool)arg3;
@end

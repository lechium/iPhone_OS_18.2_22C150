//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class WFInteractionCardViewController;

@protocol WFInteractionCardViewControllerDelegate <NSObject>
- (void)interactionCardViewControllerDidRequestCancel:(WFInteractionCardViewController *)arg1;
- (void)interactionCardViewControllerDidRequestPunchout:(WFInteractionCardViewController *)arg1;
- (void)interactionCardViewControllerDidInvalidateSize:(WFInteractionCardViewController *)arg1;
- (void)interactionCardViewControllerDidLoad:(WFInteractionCardViewController *)arg1;
@end


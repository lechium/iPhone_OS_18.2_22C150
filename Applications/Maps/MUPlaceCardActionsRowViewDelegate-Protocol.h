//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MUActionRowItemViewModel, MUGroupedActionsRowView, MUPresentationOptions;

@protocol MUPlaceCardActionsRowViewDelegate <NSObject>
- (void)actionsRowView:(MUGroupedActionsRowView *)arg1 didSelectViewModel:(MUActionRowItemViewModel *)arg2 presentationOptions:(MUPresentationOptions *)arg3;

@optional
- (void)actionsRowView:(MUGroupedActionsRowView *)arg1 didPresentMenuForViewModel:(MUActionRowItemViewModel *)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/UIContextMenuInteractionDelegate-Protocol.h>

@class NSArray, UIContextMenuConfiguration, UIContextMenuInteraction;

@protocol UIContextMenuInteractionDelegate_ForWebKitOnly <UIContextMenuInteractionDelegate>

@optional
- (NSArray *)_contextMenuInteraction:(UIContextMenuInteraction *)arg1 overrideSuggestedActionsForConfiguration:(UIContextMenuConfiguration *)arg2;
- (void)_contextMenuInteraction:(UIContextMenuInteraction *)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2 completion:(void (^)(UIContextMenuConfiguration *))arg3;
@end


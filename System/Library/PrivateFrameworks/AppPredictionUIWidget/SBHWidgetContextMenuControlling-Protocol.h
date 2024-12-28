//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppPredictionUIWidget/NSObject-Protocol.h>

@class NSArray, SBSApplicationShortcutItem;

@protocol SBHWidgetContextMenuControlling <NSObject>
@property(readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property(nonatomic, getter=isShowingContextMenu) _Bool showingContextMenu;
- (void)willShowContextMenuAtLocation:(struct CGPoint)arg1;
- (void)didSelectApplicationShortcutItem:(SBSApplicationShortcutItem *)arg1;
@end

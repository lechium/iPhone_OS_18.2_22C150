//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class TUISystemInputAssistantView, UIBarButtonItemGroup, UIView;

@protocol TUISystemInputAssistantViewDelegate <NSObject>
- (void)systemInputAssistantView:(TUISystemInputAssistantView *)arg1 wantsToShowCollapsedItemGroup:(UIBarButtonItemGroup *)arg2 fromView:(UIView *)arg3;

@optional
- (void)systemInputAssistantView:(TUISystemInputAssistantView *)arg1 didExpand:(_Bool)arg2;
- (void)systemInputAssistantView:(TUISystemInputAssistantView *)arg1 willExpand:(_Bool)arg2;
@end

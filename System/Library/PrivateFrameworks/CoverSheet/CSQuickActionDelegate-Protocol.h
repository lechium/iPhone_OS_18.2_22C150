//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class CSQuickAction;

@protocol CSQuickActionDelegate <NSObject>
- (void)isSelectedDidChangeForAction:(CSQuickAction *)arg1;
- (void)allowsInteractionDidChangeForAction:(CSQuickAction *)arg1;
- (void)showsButtonDidChangeForAction:(CSQuickAction *)arg1;
@end

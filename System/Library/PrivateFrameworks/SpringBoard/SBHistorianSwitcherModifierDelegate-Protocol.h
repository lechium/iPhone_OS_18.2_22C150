//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBHistorianSwitcherModifier, SBSwitcherModifierEvent, SBSwitcherModifierTimelineEntry;

@protocol SBHistorianSwitcherModifierDelegate <NSObject>
- (void)historianModifier:(SBHistorianSwitcherModifier *)arg1 didRecordEntry:(SBSwitcherModifierTimelineEntry *)arg2;
- (_Bool)historianModifier:(SBHistorianSwitcherModifier *)arg1 shouldRecordEvent:(SBSwitcherModifierEvent *)arg2;
@end


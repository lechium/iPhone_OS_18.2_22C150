//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSSet, SBAppLayout, SBAppSwitcherModel;

@protocol SBAppSwitcherModelDelegate <NSObject>
- (SBAppLayout *)appSwitcherModel:(SBAppSwitcherModel *)arg1 willAddAppLayout:(SBAppLayout *)arg2 replacingAppLayouts:(NSSet *)arg3 removingAppLayouts:(NSSet *)arg4;
- (SBAppLayout *)appSwitcherModel:(SBAppSwitcherModel *)arg1 willReplaceAppLayout:(SBAppLayout *)arg2 proposedReplacementAppLayout:(SBAppLayout *)arg3;
- (void)appSwitcherModel:(SBAppSwitcherModel *)arg1 didRemoveAppLayoutForFallingOffList:(SBAppLayout *)arg2;
@end


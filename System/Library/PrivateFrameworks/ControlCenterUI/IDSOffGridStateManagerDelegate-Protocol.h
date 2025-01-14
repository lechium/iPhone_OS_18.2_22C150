//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class IDSOffGridModeContext, IDSOffGridStateManager, NSArray;

@protocol IDSOffGridStateManagerDelegate <NSObject>

@optional
- (void)manager:(IDSOffGridStateManager *)arg1 contactInfoUpdated:(NSArray *)arg2;
- (void)manager:(IDSOffGridStateManager *)arg1 changedOffGridModeStatus:(long long)arg2 currentState:(long long)arg3 context:(IDSOffGridModeContext *)arg4;
- (void)manager:(IDSOffGridStateManager *)arg1 offGridModeUpdated:(long long)arg2 publishStatus:(long long)arg3 context:(IDSOffGridModeContext *)arg4;
@end


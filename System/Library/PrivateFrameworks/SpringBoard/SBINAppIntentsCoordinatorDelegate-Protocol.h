//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBINAppIntent, SBINAppIntentsCoordinator;

@protocol SBINAppIntentsCoordinatorDelegate <NSObject>
- (void)appIntentsCoordinator:(SBINAppIntentsCoordinator *)arg1 performAppIntent:(SBINAppIntent *)arg2 withCompletion:(void (^)(_Bool))arg3;
@end


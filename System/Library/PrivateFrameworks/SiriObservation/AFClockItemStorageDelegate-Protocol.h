//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriObservation/NSObject-Protocol.h>

@class AFClockItemStorage, NSSet;

@protocol AFClockItemStorageDelegate <NSObject>
- (void)clockItemStorageDidUpdate:(AFClockItemStorage *)arg1 insertedItemIDs:(NSSet *)arg2 updatedItemIDs:(NSSet *)arg3 deletedItemIDs:(NSSet *)arg4;
@end

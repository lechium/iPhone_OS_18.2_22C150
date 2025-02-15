//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class IDSBatchIDQueryController, NSDictionary, NSError, NSString;

@protocol IDSBatchIDQueryControllerDelegate <NSObject>
- (void)batchQueryController:(IDSBatchIDQueryController *)arg1 updatedDestinationsStatus:(NSDictionary *)arg2 onService:(NSString *)arg3 error:(NSError *)arg4;

@optional
- (void)idStatusUpdatedForDestinations:(NSDictionary *)arg1 service:(NSString *)arg2;
- (void)idStatusUpdatedForDestinations:(NSDictionary *)arg1;
@end


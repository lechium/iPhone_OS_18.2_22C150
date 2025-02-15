//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDPersistence/NSObject-Protocol.h>

@protocol IMDSpotlightQueries <NSObject>
- (void)deleteAllDonationsForAppDeletionWithCompletion:(void (^)(NSError *))arg1;
- (void)invalidateSpotlightClientStateVersioningWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchSpotlightClientStateWithCompletion:(void (^)(IMSpotlightClientState *, NSError *))arg1;
- (void)validateSpotlightClientStateWithCompletion:(void (^)(_Bool, NSError *))arg1;
@end


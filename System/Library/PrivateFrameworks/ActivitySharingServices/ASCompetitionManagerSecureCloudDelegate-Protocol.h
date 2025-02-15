//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivitySharingServices/NSObject-Protocol.h>

@class ASCompetitionList, ASCompetitionManager, ASContact, CKOperationGroup, NSSet;

@protocol ASCompetitionManagerSecureCloudDelegate <NSObject>
- (void)competitionManager:(ASCompetitionManager *)arg1 deleteCompetitionLists:(NSSet *)arg2 group:(CKOperationGroup *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)competitionManager:(ASCompetitionManager *)arg1 saveCompetitionLists:(NSSet *)arg2 group:(CKOperationGroup *)arg3 completion:(void (^)(_Bool, NSError *, NSArray *))arg4;
- (void)competitionManager:(ASCompetitionManager *)arg1 saveCurrentCompetitionList:(ASCompetitionList *)arg2 archivedCompetitionList:(ASCompetitionList *)arg3 contact:(ASContact *)arg4 group:(CKOperationGroup *)arg5 completion:(void (^)(_Bool, NSError *, NSArray *))arg6;
@end


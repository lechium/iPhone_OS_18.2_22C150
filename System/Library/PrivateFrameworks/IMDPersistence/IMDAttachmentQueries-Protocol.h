//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDPersistence/NSObject-Protocol.h>

@class NSArray, NSPredicate;

@protocol IMDAttachmentQueries <NSObject>
- (void)updateAttachmentsSyncStatusTo:(long long)arg1 forGUIDs:(NSArray *)arg2;
- (void)fetchAttachmentRecordsFilteredUsingPredicate:(NSPredicate *)arg1 sortedUsingDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 completionHandler:(void (^)(NSArray *))arg4;
- (void)fetchAttachmentRecordsFilteredUsingPredicate:(NSPredicate *)arg1 limit:(unsigned long long)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (void)deleteAttachmentsDirectWithPredicate:(NSPredicate *)arg1;
- (void)coreSpotlightDeleteAttachmentGUIDs:(NSArray *)arg1 reason:(long long)arg2;
@end


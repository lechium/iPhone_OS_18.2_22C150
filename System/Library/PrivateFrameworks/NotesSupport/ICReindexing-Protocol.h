//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesSupport/NSObject-Protocol.h>

@class NSArray;

@protocol ICReindexing <NSObject>
- (void)deleteAllSearchableItemsWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)reindexSearchableItemsWithObjectIDURIs:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)reindexAllSearchableItemsWithCompletionHandler:(void (^)(NSError *))arg1;
@end

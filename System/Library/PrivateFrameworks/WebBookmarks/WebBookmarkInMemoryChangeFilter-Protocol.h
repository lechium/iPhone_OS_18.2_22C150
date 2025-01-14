//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebBookmarks/NSObject-Protocol.h>

@class NSArray, WebBookmark, WebBookmarkChangeSet;

@protocol WebBookmarkInMemoryChangeFilter <NSObject>

@optional
- (_Bool)shouldIncludeBookmarkAddedInMemory:(WebBookmark *)arg1;
- (NSArray *)bookmarkIDsModifiedInMemoryNotPassingFilterFromChangeSet:(WebBookmarkChangeSet *)arg1 inFolder:(int)arg2;
- (NSArray *)bookmarkIDsModifiedInMemoryPassingFilterFromChangeSet:(WebBookmarkChangeSet *)arg1 inFolder:(int)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebBookmarks/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, WBBookmarksDatabaseHealthInformation, WebBookmark, WebBookmarkList;

@protocol WBBookmarkProvider <NSObject>
- (NSDictionary *)leafChildCountForFoldersInFolderWithID:(int)arg1;
- (unsigned long long)leafChildCountForBookmarksInFolderWithID:(int)arg1;
- (WBBookmarksDatabaseHealthInformation *)databaseHealthInformation;
- (WebBookmark *)bookmarkWithID:(int)arg1;
- (NSArray *)readingListBookmarksMatchingString:(NSString *)arg1 maxResults:(unsigned int)arg2 onlyArchivedBookmarks:(_Bool)arg3;
- (WebBookmarkList *)readingListWithUnreadOnly:(_Bool)arg1 filteredUsingString:(NSString *)arg2;
- (NSArray *)bookmarksMatchingString:(NSString *)arg1;
- (void)enumerateBookmarks:(_Bool)arg1 andReadingListItems:(_Bool)arg2 matchingString:(NSString *)arg3 usingBlock:(void (^)(NSString *, NSString *, WebBookmark * (^)(void)))arg4;
@end


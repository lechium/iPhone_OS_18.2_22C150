//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class NSURL;

@interface NSString (WebBookmarksExtras)
@property(readonly, nonatomic) NSURL *wb_bestURLForUserTypedString;
- (id)wb_stringByRedactingBookmarkDAVServerID;	// IMP=0x0030000000064637
- (id)_wb_stringByDeletingTrailingSlash;	// IMP=0x00300000000645d1
- (id)_wb_stringByStandardizingDAVServerID;	// IMP=0x003000000006452d
- (_Bool)_webBookmarks_hasCaseInsensitivePrefix:(id)arg1;	// IMP=0x00300000000644fd
@end


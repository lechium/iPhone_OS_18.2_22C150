//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/_SFActivityDelegate-Protocol.h>

@class _SFActivity;
@protocol TabGroupProvider;

@protocol AddBookmarkActivityDelegate <_SFActivityDelegate>
- (id <TabGroupProvider>)addBookmarkActivityTabGroupProvider;
- (_Bool)addBookmarkActivityCanSaveBookmarkChanges:(_SFActivity *)arg1;
- (void)addBookmarkActivityFailedToAcquireBookmarkLock:(_SFActivity *)arg1;
@end

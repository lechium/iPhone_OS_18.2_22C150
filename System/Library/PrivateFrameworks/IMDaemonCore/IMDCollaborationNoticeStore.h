//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface IMDCollaborationNoticeStore : NSObject
{
    MISSING_TYPE *$__lazy_storage_$_persistenceContainer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000289d50
- (id)init;	// IMP=0x0000000000289ce0
- (void)deleteNoticesForURLs:(id)arg1;	// IMP=0x0000000000289c20
- (id)deleteAllNoticesWithCollaborationIdentifier:(id)arg1;	// IMP=0x00000000002893b0
- (id)deleteNoticeWithGUIDString:(id)arg1;	// IMP=0x00000000002888c0
- (id)deleteNotice:(id)arg1;	// IMP=0x0000000000287b40
- (id)noticesForURLs:(id)arg1;	// IMP=0x0000000000287a40
- (void)saveNotice:(id)arg1;	// IMP=0x0000000000286990

@end


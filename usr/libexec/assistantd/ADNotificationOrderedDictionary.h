//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFLinkedListItem, NSMutableDictionary;

@interface ADNotificationOrderedDictionary : NSObject
{
    NSMutableDictionary *_allBulletins;	// 8 = 0x8
    AFLinkedListItem *_orderedBulletinsHead;	// 16 = 0x10
    AFLinkedListItem *_orderedBulletinsTail;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000372371
- (void)removeBulletinItem:(id)arg1;	// IMP=0x00100000003722e6
- (id)appendItemWithBulletin:(id)arg1;	// IMP=0x0010000000372255
- (void)enumerateBulletinsAfterBulletinWithNotificationID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000372104
- (void)removeBulletinWithInternalID:(id)arg1;	// IMP=0x0010000000372081
- (void)setBulletin:(id)arg1 forInternalID:(id)arg2;	// IMP=0x0010000000371fb6
- (id)allBulletins;	// IMP=0x0010000000371dec
- (id)bulletinWithNotificationID:(id)arg1;	// IMP=0x0010000000371ccd
- (id)bulletinForInternalID:(id)arg1;	// IMP=0x0010000000371c79
- (id)init;	// IMP=0x0010000000371c23

@end


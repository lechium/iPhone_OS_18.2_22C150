//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, CNContactStore, CNUICoreRecentsManager, NSString;

__attribute__((visibility("hidden")))
@interface CNContactListDeleteContactAction : NSObject
{
    CNContact *_contact;	// 8 = 0x8
    NSString *_containerIdentifier;	// 16 = 0x10
    CNUICoreRecentsManager *_recentsManager;	// 24 = 0x18
    CNContactStore *_contactStore;	// 32 = 0x20
}

+ (id)log;	// IMP=0x00600000001fa4c5
- (void).cxx_destruct;	// IMP=0x00000000001fa46c
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNUICoreRecentsManager *recentsManager; // @synthesize recentsManager=_recentsManager;
@property(retain, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)undoDeleteAction;	// IMP=0x00000000001fa23e
- (_Bool)executeDeleteAction;	// IMP=0x00000000001f9fec
- (void)undoAction;	// IMP=0x00000000001f9fda
- (_Bool)executeAction;	// IMP=0x00000000001f9fc8
- (id)initWithContact:(id)arg1 contactStore:(id)arg2 containerIdentifier:(id)arg3 recentsManager:(id)arg4;	// IMP=0x00000000001f9ecd

@end


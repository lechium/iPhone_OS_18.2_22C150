//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC10ContactsUI33ContactListMergeUnifyActionHelper : NSObject
{
    MISSING_TYPE *contactStore;	// 8 = 0x8
    MISSING_TYPE *contactItems;	// 16 = 0x10
    MISSING_TYPE *mergeResult;	// 0 = 0x0
}

+ (id)descriptorForRequiredKeys;	// IMP=0x006000000000b740
- (void).cxx_destruct;	// IMP=0x000000000000c930
- (id)init;	// IMP=0x000000000000c8d0
- (_Bool)applyUndoTo:(id)arg1 and:(id)arg2;	// IMP=0x000000000000c800
- (_Bool)applyMergeResultToSaveRequest:(id)arg1;	// IMP=0x000000000000bf00
- (void)mergeContacts:(id)arg1 withContainerIdentifiers:(id)arg2 withContactIDToParentGroupsDict:(id)arg3;	// IMP=0x000000000000bd50
- (id)initWithContactStore:(id)arg1;	// IMP=0x000000000000b8d0

@end

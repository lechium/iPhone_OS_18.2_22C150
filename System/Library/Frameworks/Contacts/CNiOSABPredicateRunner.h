//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNiOSABPredicateRunner : NSObject
{
}

- (id)personPredicateWithNameLike:(id)arg1 inGroups:(id)arg2 sources:(id)arg3 addressBook:(void *)arg4;	// IMP=0x000000000012790f
- (id)personPredicateWithNameLike:(id)arg1 inSource:(id)arg2 addressBook:(void *)arg3;	// IMP=0x00000000001278f6
- (void)searchPeopleWithPredicate:(id)arg1 sortOrder:(unsigned int)arg2 ranked:(_Bool)arg3 inAddressBook:(void *)arg4 withDelegate:(id)arg5;	// IMP=0x00000000001278dd

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CNUIGroupContext : NSObject
{
    NSDictionary *_addedGroupsByContainerDict;	// 8 = 0x8
    NSArray *_removedGroups;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002ade77
@property(readonly, nonatomic) NSArray *removedGroups; // @synthesize removedGroups=_removedGroups;
@property(readonly, nonatomic) NSDictionary *addedGroupsByContainerDict; // @synthesize addedGroupsByContainerDict=_addedGroupsByContainerDict;
- (id)initWithAddedGroupsByContainerDict:(id)arg1 removedGroups:(id)arg2;	// IMP=0x00000000002addba

@end


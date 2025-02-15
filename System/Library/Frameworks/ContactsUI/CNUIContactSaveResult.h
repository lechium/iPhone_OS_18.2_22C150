//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNMutableContact, NSArray;

__attribute__((visibility("hidden")))
@interface CNUIContactSaveResult : NSObject
{
    _Bool _success;	// 8 = 0x8
    CNMutableContact *_contact;	// 16 = 0x10
    NSArray *_identifiersOfIssuedSaveRequests;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000032f38b
@property(readonly, nonatomic) NSArray *identifiersOfIssuedSaveRequests; // @synthesize identifiersOfIssuedSaveRequests=_identifiersOfIssuedSaveRequests;
@property(readonly, nonatomic) CNMutableContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
- (id)initWithSuccess:(_Bool)arg1 contact:(id)arg2 identifiersOfIssuedSaveRequests:(id)arg3;	// IMP=0x000000000032f2bf

@end


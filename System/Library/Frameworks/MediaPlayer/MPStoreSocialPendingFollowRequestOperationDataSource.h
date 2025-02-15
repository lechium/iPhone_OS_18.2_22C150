//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelSocialPerson, NSString;

__attribute__((visibility("hidden")))
@interface MPStoreSocialPendingFollowRequestOperationDataSource : NSObject
{
    long long _action;	// 8 = 0x8
    MPModelSocialPerson *_person;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001d0efb
@property(retain, nonatomic) MPModelSocialPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
- (id)queryItems;	// IMP=0x00000000001d0ece
- (long long)httpMethod;	// IMP=0x00000000001d0ec3
- (long long)httpBodyType;	// IMP=0x00000000001d0eb8
- (id)httpBody;	// IMP=0x00000000001d0d85
- (id)fallbackBagKeys;	// IMP=0x00000000001d0d78
- (id)bagKey;	// IMP=0x00000000001d0d6b
- (id)_actionTypeString;	// IMP=0x00000000001d0d4c
- (id)initWithAction:(long long)arg1;	// IMP=0x00000000001d0d0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


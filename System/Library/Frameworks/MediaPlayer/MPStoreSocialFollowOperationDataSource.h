//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelSocialPerson, NSString;

__attribute__((visibility("hidden")))
@interface MPStoreSocialFollowOperationDataSource : NSObject
{
    MPModelSocialPerson *_person;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000012a7cf
@property(retain, nonatomic) MPModelSocialPerson *person; // @synthesize person=_person;
- (id)queryItems;	// IMP=0x000000000012a7ac
- (long long)httpMethod;	// IMP=0x000000000012a7a1
- (long long)httpBodyType;	// IMP=0x000000000012a796
- (id)httpBody;	// IMP=0x000000000012a66f
- (id)bagKey;	// IMP=0x000000000012a662

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

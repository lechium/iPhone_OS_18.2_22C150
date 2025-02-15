//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOrderedSet, NSString, UITextSearchingFindSession;

__attribute__((visibility("hidden")))
@interface _UITextSearchingFindSessionAggregator : NSObject
{
    _Bool _valid;	// 8 = 0x8
    UITextSearchingFindSession *_session;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000157c5e8
@property(readonly, nonatomic) __weak UITextSearchingFindSession *session; // @synthesize session=_session;
@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
- (void)invalidate;	// IMP=0x000000000157c590
- (void)invalidateFoundRange:(id)arg1 inDocument:(id)arg2;	// IMP=0x000000000157c4bd
- (void)foundRange:(id)arg1 forSearchString:(id)arg2 inDocument:(id)arg3;	// IMP=0x000000000157c3c6
- (void)finishedSearching;	// IMP=0x000000000157c398
@property(readonly, nonatomic) NSOrderedSet *allFoundRanges;
- (void)_performOnMainIfValid:(CDUnknownBlockType)arg1;	// IMP=0x000000000157c224
- (id)initWithSession:(id)arg1;	// IMP=0x000000000157c1bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


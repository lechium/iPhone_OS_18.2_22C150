//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface NNHeadlineRequestChange : NSObject
{
    NSString *_resultIdentifier;	// 8 = 0x8
    NSDate *_requestDate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000b0c9
@property(readonly, copy, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(readonly, copy, nonatomic) NSString *resultIdentifier; // @synthesize resultIdentifier=_resultIdentifier;
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (id)initWithResultIdentifier:(id)arg1 requestDate:(id)arg2;	// IMP=0x001000000000af4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

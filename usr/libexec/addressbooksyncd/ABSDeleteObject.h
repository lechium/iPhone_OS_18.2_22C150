//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABSDeleteObject : NSObject
{
    NSString *_guid;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000002aabc
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, copy) NSString *description;
- (id)createProtobufWithOptions:(id)arg1;	// IMP=0x001000000002a94e
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) NSString *objectIdentifier;
@property(readonly, nonatomic) long long changeType;
- (id)initWithGuid:(id)arg1;	// IMP=0x001000000002a8c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


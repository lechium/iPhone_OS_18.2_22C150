//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ACXTimedIdentifierList : NSObject
{
    CDUnknownBlockType _timeoutHandler;	// 8 = 0x8
    NSMutableDictionary *_list;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_sweepTimer;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    double _timeoutInSeconds;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000061426
@property(readonly, nonatomic) double timeoutInSeconds; // @synthesize timeoutInSeconds=_timeoutInSeconds;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *sweepTimer; // @synthesize sweepTimer=_sweepTimer;
@property(readonly, nonatomic) NSMutableDictionary *list; // @synthesize list=_list;
@property(copy, nonatomic) CDUnknownBlockType timeoutHandler; // @synthesize timeoutHandler=_timeoutHandler;
- (_Bool)containsIdentifier:(id)arg1;	// IMP=0x001000000006125b
- (_Bool)removeIdentifier:(id)arg1;	// IMP=0x0010000000061004
- (void)updateTimeOnIdentifier:(id)arg1;	// IMP=0x0010000000060e6c
- (_Bool)addIdentifierIfNotPresent:(id)arg1;	// IMP=0x001000000006073a
- (id)initWithTimeout:(double)arg1;	// IMP=0x001000000006067f

@end


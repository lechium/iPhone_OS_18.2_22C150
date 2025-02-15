//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MRDRemoteControlContext : NSObject
{
    NSMutableArray *_routedCommands;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_commandQueue;	// 16 = 0x10
    NSString *_contextID;	// 24 = 0x18
    NSString *_originatingAppDisplayID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002a9f3
@property(readonly, nonatomic) NSString *originatingAppDisplayID; // @synthesize originatingAppDisplayID=_originatingAppDisplayID;
@property(readonly, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
- (void)clearRoutedCommands;	// IMP=0x001000000002a97a
- (void)addRoutedCommand:(id)arg1;	// IMP=0x001000000002a786
@property(readonly, nonatomic) NSArray *routedCommands;
- (id)initWithContextID:(id)arg1 originatingAppDisplayID:(id)arg2;	// IMP=0x001000000002a560

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTLDebugInstrumentationData, NSString;

__attribute__((visibility("hidden")))
@interface MTLDebugSubProgram : NSObject
{
    MTLDebugInstrumentationData *_data;	// 8 = 0x8
    struct DebugSubProgram *_debugSubProgram;	// 16 = 0x10
}

- (oneway void)releaseInternal;	// IMP=0x00000000000c4e28
- (oneway void)release;	// IMP=0x00000000000c4e22
- (id)retain;	// IMP=0x00000000000c4e19
@property(readonly, nonatomic) unsigned int line;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *filename;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSProcessHandle, NSData;

__attribute__((visibility("hidden")))
@interface SYNotesActivationContext : NSObject
{
    unsigned int _contextID;	// 8 = 0x8
    NSData *_userActivityData;	// 16 = 0x10
    BSProcessHandle *_processHandle;	// 24 = 0x18
    unsigned long long _renderID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000005cbc
- (void).cxx_destruct;	// IMP=0x0000000000005fdc
@property(readonly, nonatomic) unsigned long long renderID; // @synthesize renderID=_renderID;
@property(readonly, nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
@property(readonly, nonatomic) BSProcessHandle *processHandle; // @synthesize processHandle=_processHandle;
@property(readonly, copy, nonatomic) NSData *userActivityData; // @synthesize userActivityData=_userActivityData;
- (id)initWithUserActivityData:(id)arg1 contextID:(unsigned int)arg2 renderID:(unsigned long long)arg3;	// IMP=0x0000000000005ef4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005dfd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005cef
- (id)init;	// IMP=0x0000000000005cc4

@end

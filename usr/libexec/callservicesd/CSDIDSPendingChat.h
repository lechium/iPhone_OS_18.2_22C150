//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSUUID, TUHandle;

@interface CSDIDSPendingChat : NSObject
{
    MISSING_TYPE *uuid;	// 0 = 0x0
    MISSING_TYPE *isVideo;	// 268435456 = 0x10000000
    MISSING_TYPE *handle;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x004000000034e309
- (id)init;	// IMP=0x001000000034e2f6
- (id)initWithUUID:(id)arg1 isVideo:(_Bool)arg2 handle:(id)arg3;	// IMP=0x001000000034e26b
@property(nonatomic, readonly) TUHandle *handle; // @synthesize handle;
@property(nonatomic, readonly) _Bool isVideo; // @synthesize isVideo;
@property(nonatomic, readonly) NSUUID *uuid;

@end


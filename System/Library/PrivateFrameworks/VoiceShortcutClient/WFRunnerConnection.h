//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface WFRunnerConnection : NSObject
{
    MISSING_TYPE *policy;	// 8 = 0x8
    MISSING_TYPE *host;	// 16 = 0x10
    MISSING_TYPE *connection;	// 24 = 0x18
    MISSING_TYPE *onInterruption;	// 40 = 0x28
    MISSING_TYPE *onInvalidation;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000007697
- (id)init;	// IMP=0x0000000000007661
- (void)invalidate;	// IMP=0x00000000000075fe
- (id)syncRunnerWithReason:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000669a
- (id)asyncRunnerWithReason:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000006676
- (id)initWithRunDescriptor:(id)arg1 host:(id)arg2 onInterruption:(CDUnknownBlockType)arg3 onInvalidation:(CDUnknownBlockType)arg4;	// IMP=0x00000000000061a4
@property(nonatomic, copy) CDUnknownBlockType onInvalidation;
@property(nonatomic, copy) CDUnknownBlockType onInterruption;
@property(nonatomic, readonly) long long targetType;

@end

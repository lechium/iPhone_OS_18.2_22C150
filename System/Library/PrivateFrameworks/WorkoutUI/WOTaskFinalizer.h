//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface WOTaskFinalizer : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *tasks;	// 16 = 0x10
    MISSING_TYPE *finalizedIdentifiers;	// 24 = 0x18
}

+ (void)finalizeWithIdentifier:(id)arg1;	// IMP=0x0060000000101c70
+ (void)replaceTasksWithIdentifier:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x00600000001015e0
+ (void)appendTaskWithIdentifier:(id)arg1 task:(CDUnknownBlockType)arg2;	// IMP=0x00600000001009e0
- (void).cxx_destruct;	// IMP=0x0000000000102550
- (id)init;	// IMP=0x00000000001009a0

@end


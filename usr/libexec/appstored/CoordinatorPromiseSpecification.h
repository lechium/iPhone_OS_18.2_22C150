//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface CoordinatorPromiseSpecification : NSObject
{
    _Bool _fastExtraction;	// 8 = 0x8
    unsigned long long _archiveSize;	// 16 = 0x10
    unsigned long long _diskSpaceNeeded;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    long long _promiseType;	// 40 = 0x28
    NSNumber *_referenceID;	// 48 = 0x30
    NSDictionary *_streamingZipOptions;	// 56 = 0x38
    NSString *_transferPath;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000023c3bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000023c30b

@end

